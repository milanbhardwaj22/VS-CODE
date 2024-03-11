arr=[13,58,23,45,26,48,100,66];
arr2 = [];
arr.sort(function(a,b){return a-b});
for(let i=0,ni=0;i<arr.length;i++){
    if(arr[i]%2==0){
        arr2[ni] = arr[i];
        console.log(arr[i],"<br>");
    }
}


for(let i=0;i<arr2.length;i++){
    console.log(arr2[i],"<br>");
}