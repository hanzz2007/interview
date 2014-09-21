"""
	Write a business_days_from_now() method, which takes as an input a number of business days, and returns a Date object which is that many business days from now. For this, a business day is only a weekday and not a weekend. 

	for example: 

		Today is Wednesday the 8th. 
		business_days_from_now(5) 

		Current Date: Jan 8, 2013 Wednesday 

		Output: 
		Wednesday the 15th
"""

import time
import datetime
def get_today():
	today = time.strftime("%Y-%m-%d", time.localtime(time.time()))
	return str(today)

class Day(object):
	"""
	input date, calculate how many days from now
	"""
	odd_month = [1,3,5,7,8,10,12]
	def __init__(self,date):
		date = date.split("-")
		self.year = int(date[0])
		self.month = int(date[1])
		self.day = int(date[2])
		self.leap = self.__leap_check()
		self.odd = self.__odd_check()

	def __odd_check(self):
		return self.month in Day.odd_month

	def __leap_check(self):
		if not self.year % 4:
			if self.year % 100:
				return True
			elif not self.year % 400:
				return True
		return False

	def __inc_day(self):
		if self.month == 2:
			if self.leap:
				full_day = 29
			else:
				full_day = 28
		else:
			full_day = 31 if self.odd else 30
		if self.day + 1 > full_day:
			if self.month == 12:
				self.year += 1
				self.month = 1
				self.day = 1
				self.leap = self.__leap_check()
				self.odd = self.__odd_check()
			else:
				self.month += 1
				self.day =1
		else:
			self.day += 1

	def get_days(self, end_date):
		date_list = []
		if self.year == end_date.year and self.month == end_date.month and self.day == end_date.day:	
			date_list.append(self.get_date())
		else:
			while self.year != end_date.year or self.month != end_date.month or self.day != end_date.day:
					date_list.append(self.get_date())
					self.__inc_day()
		date_list.append(end_date.get_date())
		return len(date_list)

	def get_date(self):
		return str(self.year) +"-"+str(self.month)+"-"+str(self.day)
				
	def get_next(self):
		self.__inc_day()
		return self.get_date()

	def get_weekday(self):
		WEEKDAY = ["MON", "TUE", "WEN", "THE", "FRI", "SAT", "SUN"]
		return WEEKDAY[int(datetime.datetime(self.year, self.month, self.day).strftime("%w"))]

def main(weekday_nums):
	today = get_today()
	today_obj = Day(today)
	start_day = "2014-1-1"
	start_day_obj = Day(start_day)
	days = start_day_obj.get_days(today_obj)

	numbers = 0
	WEEKDAY = ["MON", "TUE", "WEN", "THE", "FRI", "SAT", "SUN"]
	for i in xrange(weekday_nums):
		today_obj.get_next()
		week_dat =  today_obj.get_weekday()
		week_day = today_obj.get_weekday()
		if week_day in WEEKDAY:
			numbers += 1
	
	days += numbers
	return days+1


if __name__ =="__main__":
	weekday_nums = raw_input("please input number")
	main(weekday_nums)
