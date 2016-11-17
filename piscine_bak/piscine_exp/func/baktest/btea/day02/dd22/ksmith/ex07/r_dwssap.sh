cat /etc/passwd | grep -o '^[^#]*' | awk 'NR%2==0' | rev | sort -r | awk -v l=8 -v u=16 | tr "\n" "," | tr -d "\n"
