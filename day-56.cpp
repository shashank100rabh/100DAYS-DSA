//coding-ninja -push zero at end
void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	int j=0;
	for(int i=0; i<arr.size(); i++){
		if(arr[i] != 0){
			arr[j]=arr[i];
			j++;
		}
	}

	for(int i=j; i<arr.size(); i++){
		arr[i]=0;
		arr[j]=arr[i];
			j++;
	}
	
}
