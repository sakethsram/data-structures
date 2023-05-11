import pymongo
import datetime

db_name = "poly_house"
coll_name = "tasks"

db = None
collection = None

def init_db_connection(db_name, coll_name):
    myclient = pymongo.MongoClient("mongodb://localhost:27017/")
    db = myclient[db_name]
    collection = mydb[coll_name]

def add_task_to_db(tid, time_stamp, poly_house, task_id, descr, sv_name, status):
    mycol.insert_one(d)

d = {"_id" : 10, "owner_name " : "saketh",  "date" : ":w", "time_out"  : 1500,
        "statement" : " this is a statements of the task " , "notes" : " this is the  notes i" }
a="saketh"
i=1
t=1500
k="this is  statements of a task"
l="these are notes"
j=a+str(i)
for i in range (1000 , 1005):
    d={"_id":i,"owner_name":a+str(i),"date":"","time_out":t+i,"statement":k+str(i),"notes":l+str(i)}
    mycol.insert_one(d)
   
init_db_connection(db_name, coll_name)

#mydoc = mycol.find()
#for x in mydoc:
 # print(x)
