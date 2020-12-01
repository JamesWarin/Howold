from datetime import datetime

now = datetime.now()
print("Today's date is", now)

y = input("Please enter your year of birth\n")
print("You were born in the year", y, "\n")

m = input("Please enter your month of birth\n")
print("You were born in the month", m, "\n")
month_number = datetime.month
#attempting to convert responses into an array that allows conversion between month name & number
#e.g. December = 12, March = 3 etc.
print(month_number)

year = now.strftime("%Y")
b = int(year) - int(y)

print("This year, you have (or will) turn", b)
