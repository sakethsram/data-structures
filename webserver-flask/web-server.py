
from flask import Flask, jsonify, request

app = Flask(__name__)

# Define a sample data store
items = [
    {"id": 1, "name": "item 1", "description": "This is item 1."},
    {"id": 2, "name": "item 2", "description": "This is item 2."}
]

# Define a route to retrieve all items
@app.route('/items', methods=['GET'])
def get_items():
    return jsonify(items)

# Define a route to retrieve a single item by ID
@app.route('/items/<int:item_id>', methods=['GET'])
def get_item(item_id):
    item = next((item for item in items if item["id"] == item_id), None)
    if item:
        return jsonify(item)
    else:
        return jsonify({"error": "Item not found."}), 404

# Define a route to add a new item
@app.route('/items', methods=['POST'])
def add_item():
    new_item = {
        "id": len(items) + 1,
        "name": request.json["name"],
        "description": request.json["description"]
    }
    items.append(new_item)
    return jsonify(new_item), 201

# Define a route to update an existing item
@app.route('/items/<int:item_id>', methods=['PUT'])
def update_item(item_id):
    item = next((item for item in items if item["id"] == item_id), None)
    if item:
        item["name"] = request.json.get("name", item["name"])
        item["description"] = request.json.get("description", item["description"])
        return jsonify(item)
    else:
        return jsonify({"error": "Item not found."}), 404

# Define a route to delete an existing item
@app.route('/items/<int:item_id>', methods=['DELETE'])
def delete_item(item_id):
    item = next((item for item in items if item["id"] == item_id), None)
    if item:
        items.remove(item)
        return '', 204
    else:
        return jsonify({"error": "Item not found."}), 404

if __name__ == '__main__':
    app.run()
