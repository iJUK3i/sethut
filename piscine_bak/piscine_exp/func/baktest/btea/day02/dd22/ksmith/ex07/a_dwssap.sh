cat /etc/passwd | grep -o '^[^#]*' | awk 'NR%2==0' | rev | sort -r | awk 'NR>=8 && NR<=16' | tr -d "\n" | sed 's/, $/./' | tr -d "\n"
