#!/bin/bash
# Check if the file exists
if [ -f "iacta" ]; then
	# Use awk to print the third line
	awk 'NR==3' iacta
else
	echo "File 'iacta' does not exist."
fi