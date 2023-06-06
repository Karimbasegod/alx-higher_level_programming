#!/usr/bin/python3

str = "Python is an interpreted, interactive, object-oriented programming
language that combines remarkable power with very clear syntax"
start_index = str.find("object-oriented programming")
end_index = start_index + len("object-oriented programming")
print(str[start_index:end_index])
