import pymongo

# Connect to the MongoDB database
client = pymongo.MongoClient("mongodb://localhost:27017/")
db = client["flag"]

# Get the "f2" collection
collection = db["f2"]

# Clear all documents from the "f2" collection
collection.delete_many({})

# Add 25 documents with sequential _id values starting from 1
for i in range(1, 26):
    # Create a document with sequential _id values
    document = {"_id": i, "owner_name": "Owner " + str(i), "date": "2023-05-12", "time_out": "17:00:00", "statement": "Statement " + str(i), "notes": "Notes " + str(i)}

    # Insert the document into the "f2" collection
    collection.insert_one(document)

# Retrieve all documents from the "f2" collection
all_documents = collection.find()

# Print all documents in the "f2" collection
for document in all_documents:
    print(f"{document['_id']:>2} {document['owner_name']} {document['date']} {document['time_out']} {document['statement']} {document['notes']}")
