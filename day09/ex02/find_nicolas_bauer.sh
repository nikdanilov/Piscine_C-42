cat contacts_hard.txt | grep -i "Nicolas	Bauer" | awk '{print $(NF-1)}'
