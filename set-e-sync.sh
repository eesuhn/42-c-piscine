if ! grep -q "e_sync_alias" ~/.zshrc; then
    cat <<EOF >> ~/.zshrc
e_sync_alias() {
    original_dir=\$(pwd)
    cd ~/c-piscine-14 || return
    ./e-sync.sh "\$@"
    cd "\$original_dir" || return
}
alias esync='e_sync_alias'
EOF
	source ~/.zshrc
	printf "esync configuration completed.\n"
else
    printf "esync setup is already done. No action needed.\n"
fi
