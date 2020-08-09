# Build script
# Find result in dir: out

cd .. &&
mkdir -p out &&
cd out &&
cmake .. &&
cmake --build .
