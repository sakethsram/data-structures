import pymongo
import datetime

myclient = pymongo.MongoClient("mongodb://localhost:27017/")
mydb = myclient["polyhouse"]
mycol = mydb["dsr"]
mycounter=mydb["counters"]




mydoc = mycol.find()
print(dir(mydoc))
exit(1)

for x in mydoc:
  print(x)

d = {"_id" : 10, "owner_name " : "saketh",  "date" : ":w", "time_out"  : 1500,
        "statement" : " this is a statements of the task " , "notes" : " this is the  notes i" }
a="saketh"
i=1
t=1500
k="this is  statements of a task"
l="these are notes"
j=a+str(i)
for i in range (1000 , 1005):
    db.collection.createIndex({ document_id: 1 }, { unique: true })
    d={"_id":i,"owner_name":a+str(i),"date":"","time_out":t+i,"statement":k+str(i),"notes":l+str(i)}
    #mycol.insert_one(d)

mydoc = mycol.find()
for x in mydoc:
  print(x)