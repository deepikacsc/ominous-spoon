name = input("File Name: ").strip()
if name.endswith("gif"):
    print(f"image/gif")
elif name.endswith("jpg"):
    print(f"image/jpg")
elif name.endswith("jpeg"):
    print(f"image/jpeg")
elif name.endswith("png"):
    print(f"image/png")
elif name.endswith("pdf" or "PDF"):
    print(f"application/pdf")
elif name.endswith("zip"):
    print(f"application/zip")
elif name.endswith("txt"):
    print("text/plain")
else:
    print("application/octet-stream")