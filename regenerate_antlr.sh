#!/bin/bash

# Ensure we're in the right directory
cd /home/ubuntu/pryst-cpp

# Create generated directory if it doesn't exist
mkdir -p src/generated

# Generate parser and lexer files with correct namespace
antlr4 -Dlanguage=Cpp -no-listener -visitor -package pryst::parser -o src/generated src/PrystLexer.g4
antlr4 -Dlanguage=Cpp -no-listener -visitor -package pryst::parser -o src/generated src/PrystParser.g4
