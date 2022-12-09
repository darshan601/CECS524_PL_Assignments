// program helloworld;
var a,b,c:integer;
	disc:real;
	count:integer;
	root1:real;
	root2:real;

begin
	// writeln('hello world !');
	writeln('This program calculates the real or imaginary roots of a quadratic equation.');
	writeln('Input is of the form A B C where A,B and C are the coefficients of the equation');
	writeln('Enter 0 0 0 to quit');

	count:=0;
	a:=2;
	b:=2;
	c:=2;
	while (a<>0) or (b<>0) or (c<>0) do
	begin
		write('Enter a b c values: ');
		read(a);
		read(b);
		read(c);
		// writeln(a,b,c);
		// check for 000 an dreturn count
		if (a=0) and (b=0) and (c=0) then
			writeln(count,' cases were solved')
		else
		begin
		// check disc
			disc:=(b*b)-(4*a*c);
			// writeln(disc);

			

			if (disc=0) then
			begin
				root1:=(-b)/(2*a);
				root2:=0;
				writeln('One real root...');
				writeln('Root1 = ',root1);
			end;
				
			if (disc<0) then
			begin
				root1:=((-b)+sqrt(disc*-1))/(2*a);
				root2:=((-b)-sqrt(disc*-1))/(2*a);
				writeln('Roots are imaginary');
				writeln('Root1 = i*',root1);
				writeln('Root2 = i*',root2);
			end;

			if (disc>0) then
			begin
				root1:=((-b)+sqrt(disc))/(2*a);
				root2:=((-b)-sqrt(disc))/(2*a);
				writeln('Roots are real..');
				writeln('Root1 = ',root1);
				writeln('Root2 = ',root2);
			end;

			count:=count+1;
			// writeln(count);

		end;
	end;
end.
