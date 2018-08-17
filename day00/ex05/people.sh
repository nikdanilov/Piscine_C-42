ldapsearch -H ldap://ldap-master.42.us.org -LLL "uid=z*" | grep cn: | sort -r
