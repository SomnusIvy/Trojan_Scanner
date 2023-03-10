#import all the modules and functions that I will need for the program
import xlrd   #import functions needed to retreive lists from excel
import os.path
assert os.path.isfile("portlist.xlsx")
import socket
import subprocess
import sys
from datetime import datetime

Host_address= input("Enter the address of the host you wish to scan: ") 

Server= socket.gethostbyname(Host_address) #Translate a host name to IPv4 address format

start=datetime.now()

print ("\nPlease wait for the scan to finish \n")

book = xlrd.open_workbook("/Users/Edon/Documents/Computer science HL/Extended Essay/portlist.xlsx")
first_sheet = book.sheet_by_index(0)
#通过索引顺序获取一个sheet列表
maxrows = first_sheet.nrows
#获取行数
#The lines above retreive the information from the excel sheet where Trojan ports are specified指定的特洛伊木马端口
try:
    for myrow in range (0,maxrows):
        port = int(first_sheet.cell(myrow,0).value)
		#获取单元格的值
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        result = sock.connect_ex((Server, port))

        if result == 0:
            print (port, "is infected")
                
        sock.close()

except socket.gaierror:
    print ('Hostname could not be resolved. Exiting')

except socket.error:
    print ("Couldn't connect to server")


end= datetime.now()

time_total =  end - start

print ("\nScanning Completed in:" , time_total,)
