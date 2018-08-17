cat /etc/passwd | grep -v "#" | sed '1!n;p' | grep "^[FT_LINE1-$FT_LINE2]" | cut -d : -f 1 | rev | sort -r | tr '\n', ',' | sed 's/,$/./'
