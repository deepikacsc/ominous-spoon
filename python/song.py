import requests
import sys

if len(sys.argv) != 2:
    sys.exit("Missing command line argument")

response = requests.get(
    "https://itunes.apple.com/search?entity=song&term=" + sys.argv[1]
)

obj = response.json()

for result in obj["results"]:
    print(result["trackName"])