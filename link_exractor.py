import re
f = open("source.html","r")

fh = f.read()

hrefs = re.findall('href="[^(https)(http)/].+"',fh)





ne = open("hexas.txt","w")

a = "hello"

print(dir(a))
for i in  hrefs:

        ele = (i.split(" "))[0]
        ele = ele[6:-1]
        ne.write(ele+"\n")

ne.close()


