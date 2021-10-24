import smtplib as s
from typing import List
ob = s.SMTP("smtp.gmail.com",587)
ob.starttls()
ob.login("shubhamnag789@gmail.com","kdddpczcjwfjmqiz")
subject = "Sending email using python"
body = "Sending email using python script in simple"
message = "Subject:{}\n\n{}".format(subject,body)
listofAddress = ["shubhamng14@gmail.com"]
ob.sendmail("shubhamnag789@gmail.com",listofAddress,message)
print("send succesfully")
ob.quit()