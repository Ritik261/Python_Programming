# Now read file from file.txt

# f = open("file.txt","r")
# print(f.read(6))

# print(f.readline())
# print(f.readline())

# for x in f:
#     print(x)

f = open("myfile.txt","a")
f.write("This is 4th line")

f.close()

f = open("myfile.txt", "r")
print(f.read())