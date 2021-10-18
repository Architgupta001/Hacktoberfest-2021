from flask import Flask, render_template, request
app=Flask(__name__)

@app.route('/', methods=['GET','POST'])
def gettingData():
    if request.method=='POST':
        url=request.form['url']
        totalPages=request.form['pages']
        print(url,totalPages)
    return render_template('index.html')


if __name__=="__main__":
    app.run(debug=True) 