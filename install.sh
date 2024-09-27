#!/usr/bin/env bash

append_alias() {
	ALIAS_NAME=$1
	ALIAS_COMMAND=$2
	if ! grep -Fxq "$ALIAS_COMMAND" ~/.bashrc; then
		echo "$ALIAS_COMMAND" >> ~/.bashrc
		echo "Alias '$ALIAS_NAME' added to .bashrc. Please restart your terminal or run 'source ~/.bashrc' to apply the changes."
	else
		echo "Alias '$ALIAS_NAME' already exists in .bashrc."
	fi
}


TARGET_DIR="~/shift-pro-coding/lessons"
SHIFT_ALIAS="alias 'shift-cd'='cd $TARGET_DIR'"

append_alias "shift-cd" "${SHIFT_ALIAS}"
append_alias "python" "alias python='python3"
