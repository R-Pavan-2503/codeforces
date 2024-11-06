def has_distinct_digits(year):
    return len(set(str(year))) == len(str(year))

y = int(input())

year = y + 1

while not has_distinct_digits(year):
    year += 1
print(year)
