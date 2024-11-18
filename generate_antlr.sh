#!/bin/bash

# Clean up old generated files
rm -rf src/generated/*

# Create generated directory if it doesn't exist
mkdir -p src/generated

# Generate lexer first to create tokens file
cd src && java -jar /usr/local/lib/antlr-4.13.2-complete.jar -Dlanguage=Cpp -no-listener -visitor -package pryst::parser -o generated PrystLexer.g4 && cd ..

# Then generate parser using the tokens file
cd src && java -jar /usr/local/lib/antlr-4.13.2-complete.jar -Dlanguage=Cpp -no-listener -visitor -package pryst::parser -o generated PrystParser.g4 && cd ..

# Move any nested generated files up
find src/generated/src -type f -exec mv {} src/generated/ \; 2>/dev/null || true
rm -rf src/generated/src 2>/dev/null || true
