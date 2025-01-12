#!/usr/bin/python3
"""
Module for querying the Reddit API and counting words in hot article titles.
"""
import requests


def count_words(subreddit, word_list, after="", counts={}):
    """
    Recursively queries the Reddit API, parses titles of all hot articles,
    and counts occurrences of keywords in `word_list`.

    Args:
        subreddit (str): The subreddit to query.
        word_list (list): A list of keywords to count.
        after (str): The "after" parameter for pagination in the Reddit API.
        counts (dict): A dictionary to hold the counts of keywords.

    Returns:
        None: Prints the sorted results or nothing if the subreddit is invalid.
    """
    headers = {"User-Agent": "Holberton-Reddit-API-Query"}
    url = f"https://www.reddit.com/r/{subreddit}/hot.json"
    params = {"after": after, "limit": 100}

    try:
        response = requests.get(
            url, headers=headers, params=params, allow_redirects=False
        )
        if response.status_code != 200:
            return

        data = response.json().get("data")
        if not data:
            return

        # Process titles in the current page
        for post in data.get("children", []):
            title = post.get("data", {}).get("title", "").lower()
            for word in word_list:
                word_lower = word.lower()
                counts[word_lower] = counts.get(
                    word_lower, 0) + title.split().count(
                    word_lower
                )

        # Check for the next page
        after = data.get("after")
        if after is not None:
            count_words(subreddit, word_list, after, counts)
        else:
            # Print the results when recursion ends
            sorted_counts = sorted(counts.items(), key=lambda x: (-x[1], x[0]))
            for word, count in sorted_counts:
                if count > 0:
                    print(f"{word}: {count}")

    except Exception as e:
        return
