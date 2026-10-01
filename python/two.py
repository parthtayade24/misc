import csv

file = open("namelist.csv","a")

name = input("name:")
number = input("number:")

writer = csv.DictWriter(file, fieldnames=["name", "number"])

writer.writerow([{"name": name, "number": number}])

file.close()