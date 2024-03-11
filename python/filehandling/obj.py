students = []
with open("student.csv") as file:
    for line in file:
        name, house = line.rstrip().split(",")
        students.append({"name": name, "house": house})
for student in students:
    print(f"{student['name']} is in {student['house']}")
