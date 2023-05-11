from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello():
    #return "JAI SRI RAM!"
    return '<!DOCTYPE html> <html lang="en"> <head> <title>Title of the document</title> </head> <body> <h1>Jai Sri Ram</h1> </body></html>'

@app.route("/api/<name>")
def api(name):
    return {"message": f"Hello, {name}!"}

@app.route("/napi/")
def napi():
    return {"message": f"Jai Sri Ram"}

if __name__ == '__main__':
    app.run(debug=True)
