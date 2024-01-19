#!/bin/bash
RED='\033[0;31m'
YELLOW='\033[0;33m'
GREEN='\033[0;32m'
PURPLE=$(tput setaf 5)
NC=$(tput sgr0)

if [ -z "$1" ]; then
	printf "${RED}Error:${NC} Action is not specified.\n\n"
	exit 1
fi
if [ -z "$2" ]; then
	printf "${RED}Error:${NC} Source is not provided.\n\n"
	exit 1
fi
if [ "$1" == "push" ] && [ -z "$3" ]; then
	printf "${RED}Error:${NC} Commit message is not provided.\n\n"
	exit 1
fi

action="$1"
source="$2"
commit_msg="$3"

divider() {
	echo "${PURPLE}----------${NC}"
}

push() {
	if [ ! -e ~/"$source" ]; then
		printf "${RED}Error:${NC} Source '$source' is not found.\n\n"
		exit 1
	fi
	mkdir -p ~/c-piscine-14/$source
	cp -r ~/$source/* ~/c-piscine-14/$source
	if [ $? -eq 0 ]; then
		printf "${YELLOW}Source '$source' copied.${NC}\n"
	fi
	rm -rf ~/c-piscine-14/$source/.git
	if [ $? -eq 0 ]; then
		printf "${YELLOW}.git from '$source' removed.${NC}\n"
	fi
	divider
	git add .
	git commit -m "Push: '$source': $commit_msg"
	divider
	git push
	divider
	printf "${GREEN}ESNYC:${NC} Pushed source '$source'.\n"
}

pull() {
	git pull
	divider
	if [ ! -e ~/c-piscine-14/"$source" ]; then
		printf "${RED}Error:${NC} Source '$source' is not found.\n\n"
		exit 1
	fi
	if [ ! -d ~/"$source" ]; then
		mkdir -p ~/$source
		printf "${YELLOW}Directory '$source' created.${NC}\n"
	fi
	cp -r ~/c-piscine-14/$source ~
	if [ $? -eq 0 ]; then
		printf "${YELLOW}Source '$source' copied.${NC}\n"
	fi
	divider
	printf "${GREEN}ESYNC:${NC} Pulled.\n"
}

if [ "$action" == "push" ]; then
	push
elif [ "$action" == "pull" ]; then
	pull
else
	printf "${RED}Error:${NC} Invalid action.\n\n"
	exit 1
fi
