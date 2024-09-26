#!/usr/bin/env bash

TARGET_DIR="~/shift-pro-coding/lessons"

ALIAS_COMMAND="alias 'shift-cd'='cd $TARGET_DIR'"

if ! grep -Fxq "$ALIAS_COMMAND" ~/.bashrc; then
    echo "$ALIAS_COMMAND" >> ~/.bashrc
    echo "Alias 'shift-cd' added to .bashrc. Please restart your terminal or run 'source ~/.bashrc' to apply the changes."
else
    echo "Alias 'shift-cd' already exists in .bashrc."
fi
