RED='\033[0;31m'
YELLOW='\033[0;33m'
GREEN='\033[0;32m'
NC='\033[0m'

if [ -z "$1" ]; then
	echo "${RED}Error:${NC} Action is not specified."
	echo ""
	exit 1
fi

if [ "$1" == "push" ] && [ -z "$2" ]; then
	echo "${RED}Error:${NC} Source is not provided."
	echo ""
	exit 1
fi

action="$1"
source="$2"

push() {
	if [ ! -e ~/"$source" ]; then
		echo "${RED}Error:${NC} Source '$source' is not found."
		echo ""
		exit 1
	fi
	mkdir -p ~/c-piscine-14/$source
	cp -r ~/$source/* ~/c-piscine-14/$source
	if [ $? -eq 0 ]; then
		echo "${YELLOW}Source '$source' copied.${NC}"
	fi
	rm -rf ~/c-piscine-14/$source/.git
	if [ $? -eq 0 ]; then
		echo "${YELLOW}.git from '$source' removed.${NC}"
	fi
	echo ""
	git add .
	git commit -m "Push: '$source'"
	echo ""
	git push
	echo ""
	echo "${GREEN}ESNYC:${NC} Pushed source '$source'."
	echo ""
}

pull() {
	git pull
	echo ""
	echo "${GREEN}ESYNC:${NC} Pulled."
	echo ""
}

if [ "$action" == "push" ]; then
	push
elif [ "$action" == "pull" ]; then
	pull
else
	echo "${RED}Error:${NC} Invalid action."
	echo ""
	exit 1
fi
