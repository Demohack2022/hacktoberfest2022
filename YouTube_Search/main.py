from requests import get
from urllib.parse import quote
from re import findall
from fake_useragent import UserAgent

query: str = quote(str(input("Search: ")))

print("\n")

page_source: str = get(f"https://www.youtube.com/search?q={quote(query)}", headers={"User-Agent" : UserAgent().random}).text

for i in set(findall('"videoId":"(.*?)"', page_source)):
    print(f"https://www.youtube.com/watch?v={i}")
