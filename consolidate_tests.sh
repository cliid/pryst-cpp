#!/bin/bash

mkdir -p tests/unit/{types,web,runtime,parser}

# Create unit test directories if they don't exist
mkdir -p src/test/unit/parser
mkdir -p src/test/unit/runtime
mkdir -p src/test/unit/types
mkdir -p src/test/unit/web

# Move test files to unified structure
for dir in types web runtime parser; do
    mv src/test/unit/$dir/* tests/unit/$dir/ 2>/dev/null || true
done

# Move test runner and clean up
mv src/test/test_runner.cpp tests/ 2>/dev/null || true
rm -rf src/test src/*_test.cpp

echo "Test files consolidated into unified test structure"
