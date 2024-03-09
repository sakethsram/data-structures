from pymongo import MongoClient

# Connect to MongoDB
client = MongoClient()
db = client.polyhouse
collection = db.taskmgmt

# Retrieve all documents from the collection
documents = collection.find()

# Print each document
for document in documents:
    print(document)

# Close the MongoDB connection
client.close()
