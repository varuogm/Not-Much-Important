int BinExp(int base,int power)
{
  int res= 1;
  while(power>0){
  
  if(power%2){
    res*=base;
    power--;
  }
  else{
    base*=base;
    power/=2;
  }
  } 
 return res; 
}
