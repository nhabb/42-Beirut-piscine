for i in `git log -n 5 --pretty=format:"%H"`;
do
	echo $i
done
