def main():
    timeip = input("What time is it? ")
    time = convert(timeip)

    if time >= 7.0 and time <= 8.0:
        print("Breakfast time")
    elif time >= 12.0 and time <= 13.0:
        print("lunch time")
    elif time >= 18.0 and time <= 19.0:
        print("Dinner time")
def convert(t):
    hour, minute= t.split(":")
    hour = float(hour)
    minute = float(minute)/60
    return hour + minute
if __name__ == "__main__":
    main()