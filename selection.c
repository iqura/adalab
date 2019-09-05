import random
arr=[]
def selection(a,n):
	count =0
	for i in range(0,n-1):
		max_index = i
		for j in range(i+1,n):
			count = count+1
			if a[j]>a[max_index]:
				max_index =j
				
		temp = a[max_index]
		a[max_index]=a[i]
		a[i] = temp
	print("selection:",count)

def bubble(a,n):
	count =0
	for i in range(0,n-1):
		for j in range(0,n-1-i):
			if a[j]>a[j+1]:
				temp = a[j]
				a[j]=a[j+1]
				a[j+1] = temp
				count = count+1
	print("bubble: ", count)

count =0
def mergeSort(arr): 
	global count
	if len(arr) >1: 
		mid = len(arr)//2 
		L = arr[:mid] 
		R = arr[mid:]

		mergeSort(L) 
		mergeSort(R)

		i = j = k = 0		
		
		while i < len(L) and j < len(R):
			count = count+1 
			if L[i] < R[j]: 
				
				arr[k] = L[i] 
				i+=1
			else: 
				arr[k] = R[j] 
				j+=1
			k+=1		
		 
		while i < len(L): 
			arr[k] = L[i] 
			i+=1
			k+=1
		
		while j < len(R): 
			arr[k] = R[j] 
			j+=1
			k+=1
	


def printList(arr): 
	for i in range(len(arr)):		 
		print(arr[i],end=" ") 
	print() 



n=6
for i in range(0,n):
	arr.append(random.randint(0,100))

arr1=arr
selection(arr1,n)
bubble(arr,n)		

arr2 = [12, 11, 13, 5, 6, 7] 
mergeSort(arr2)
print(count) 


