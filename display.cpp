students = [
    {"id": 1, "name": "Amina Yusuf", "grade": "A"},
    {"id": 2, "name": "Daniel Kebede", "grade": "B+"},
    {"id": 3, "name": "Selam Tadesse", "grade": "A-"}
]

def display_all_students(data):
    if not data:
        print("No student records available.")
        return

    print(f"{'ID':<5} {'Name':<20} {'Grade'}")
    print("-" * 35)
    for s in data:
        print(f"{s['id']:<5} {s['name']:<20} {s['grade']}")

display_all_students(students)
