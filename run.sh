
echo "############# Do not update script ###############"
Libftest/grademe.sh
cd libft-unit-test
make re
./run_test
cd ..
cd libft-unity
./run.sh full
cd ..
