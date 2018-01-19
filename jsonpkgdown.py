import json
import subprocess
import pip

def install(name):
    try:
        pipcode=pip.main(['install',name])
        if pipcode !=0 :
            print( "unable to install" + name)
    except:
        print ("Unable to install" + name)

with open('input2.json','r') as f:
    input_dict=json.load(f)

for distro in input_dict:
    print distro['Name']
    install(distro['Name'])

