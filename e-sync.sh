RED='\033[0;31m'
YELLOW='\033[0;33m'
GREEN='\033[0;32m'
NC='\033[0m'

if [ -z "$1" ]; then
	echo -e "${RED}Error:${NC} Action is not specified.\n"
	exit 1
fi

if [ "$1" == "push" ] && [ -z "$2" ]; then
	echo -e "${RED}Error:${NC} Source is not provided.\n"
	exit 1
fi

action="$1"
source="$2"

push() {
	if [ ! -e ~/"$source" ]; then
		echo -e "${RED}Error:${NC} Source '$source' is not found.\n"
		exit 1
	fi
	mkdir -p ~/c-piscine-14/$source
	cp -r ~/$source/* ~/c-piscine-14/$source
	if [ $? -eq 0 ]; then
		echo -e "${YELLOW}Source '$source' copied.${NC}"
	fi
	rm -rf ~/c-piscine-14/$source/.git
	if [ $? -eq 0 ]; then
		echo -e "${YELLOW}.git from '$source' removed.${NC}"
	fi
	echo ""
	git add .
	git commit -m "Push: '$source'"
	echo ""
	git push
	echo -e "\n${GREEN}ESNYC:${NC} Pushed source '$source'."
}

pull() {
	git pull
	echo ""
	echo "${GREEN}ESYNC:${NC} Pulled.\n"
}

if [ "$action" == "push" ]; then
	push
elif [ "$action" == "pull" ]; then
	pull
else
	echo -e "${RED}Error:${NC} Invalid action\n"
	exit 1
fi
