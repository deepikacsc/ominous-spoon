students = []
with open("student.csv") as file:
    for line in file:
        name, house = line.rstrip().split(",")
        students.append({"name": name, "house": house})
def get_name(student):
    return student["name"]
for student in sorted(students, key=get_name):
    print(f"{student['name']} is in {student['house']}")

