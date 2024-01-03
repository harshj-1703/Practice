/*
ooooooooooooooooo                                                       
ooooooooooooooooo
ooooooooooooooooo                                                       
oooo                                                                    
oooo                                                                    
oooo
ooooooooooooooooo                                                       
ooooooooooooooooo                                                       
ooooooooooooooooo                                                       
      oooo
      oooo
      oooo
ooooooooooooooooo
ooooooooooooooooo                                                       
ooooooooooooooooo                    
*/

//==========================================================================================
//Static
//==========================================================================================
// let a = 17;
// let b = 3;
// let c = 4;
// let n = 1;

// for(let i=0;i<b;i++)
// {
//     for(let j=0;j<a;j++)
//     {
//       process.stdout.write('o');
//     }
//     console.log();
// }
// for(let i=0;i<b;i++)
// {
//     for(let j=0;j<c;j++)
//     {
//      process.stdout.write('o');
//     }
//     console.log();
// }
// for(let i=0;i<b;i++)
// {
//     for(let j=0;j<a;j++)
//     {
//       process.stdout.write('o');
//     }
//     console.log();
// }
// for(let i=0;i<b;i++)
// {
//     for(let j=0;j<c+3;j++)
//     {
//      process.stdout.write(' ');
//     }
//     for(let j=c;j<c+4;j++)
//     {
//      process.stdout.write('o');
//     }
//     console.log();
// }
// for(let i=0;i<b;i++)
// {
//     for(let j=0;j<a;j++)
//     {
//       process.stdout.write('o');
//     }
//     console.log();
// }

//==================================================================================
//dynamic code
//==================================================================================

let col = 17;
let row = 3;
let box_row = 3;
let box_col = 4;
let n = 1;
let z = 1;

for(let i = 0; i< row;i++)
{
  for(let j=0;j<col;j++)
  {
    process.stdout.write("o");
  }
  console.log();
}

for(let i = 0; i< box_row;i++)
{
  for(let j=0;j<box_col;j++)
  {
    process.stdout.write("o");
  }
  console.log();
}
//----------------------------------------
//Enter k as dynamic value of mini box printed
//----------------------------------------
for(let k = 1;k<3;k++)
{
  for(let i = 0; i< row;i++)
  {
    for(let j=0;j<col;j++)
    {
      process.stdout.write("o");
    }
    console.log();
  }
  for(let i = 0; i<box_row;i++)
  {
    for(let j=0;j<(box_col*z)+(3*n);j++)
    {
      process.stdout.write(" ");
    }
    for(let j=0;j<box_col;j++)
    {
      process.stdout.write("o");
    }
    console.log();
  }
  n++;
  z++;
}
//----------------------------------------
for(let i = 0; i< row;i++)
{
  for(let j=0;j<col;j++)
  {
    process.stdout.write("o");
  }
  console.log();
}