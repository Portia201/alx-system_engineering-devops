#!/bin/bash


# Define the file name with special characters
filename=\*\\'"Best School"\'\\*$\?\*\*\*\*\*:)

# Use echo to write the text to the file
echo "Best School" > "$filename"

# Add a newline character to the end of the file
echo >> "$filename"

# Verify that the file has been created
if [ -e "$filename" ]; then
	echo "File '$filename' has been created successfully."
else
	echo "File creation failed."
fi
