from scanner import Scanner

def readEmployeeRecord(s):
    name = s.readtoken();
    id = s.readtoken();
    title = s.readtoken();

    return name,id,title

s = Scanner(0)

print("about to scan");

t = s.readtoken()

ch = s.readrawchar()

q = s.readtoken()

print("<",t,"><",ch,"><",q,">",sep="")

s.close()
