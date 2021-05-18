class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0,j=0,k=0;
        double median=0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int s1=0,s2=0,e1=0,e2=0;
        if(size1!=0)
            e1=size1-1;
        else
            e1=-2;
        if(size2!=0)
            e2=size2-1;
        else
            e2=-2;
        
        while((e1-s1+1>2) && (e2-s2+1>2))
        {
            int middle1 = (s1+e1)/2;
            int middle2 = (s2+e2)/2;
            if(nums1[middle1]<nums2[middle2])
            {
                s1=middle1;
                e1=e1;
                //size1=e1-s1+1;
                s2=0;
                e2=middle2;
                //size2=e2-s2+1;
            }
            else if(nums1[middle1]==nums2[middle2])
            {
                if(size1%2==0)
                {
                     
                    median = (nums1[middle1]+nums1[middle1+1])/2.0;
                    return median;
                }
                else
                {
                    median = nums1[middle1];
                    return median;
                }
            }
            else
            {
                s1=0;
                e1=middle1;
                //size1=e1-s1+1;
                s2=middle2;
                e2=e2;
                //size2=e2-s2+1;
            }
        }
        int size3=0;
        if(size1==0)
        {
            size3=e2-s2+1;
            e1=-2;
            s1=-1;
            i=s1;
            j=s2;
            k=0; 
        }
        else if(size2==0) //second vector length is 0
        {
            size3=e1-s1+1;
            s2=-1;
            e2=-2;
            i=s1;
            j=s2;
            k=0;
        }
        else
        {
            i=s1;
            j=s2;
            k=0;
        }
        //size3=(e1-s1+1)+(e2-s2+1);
        double c[2001];
        //i=s1;j=s2;k=0;
        while(i<=e1 && j<=e2)
        {
            if(nums1[i]<=nums2[j])
            {
                c[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                c[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<=e1)
        {
            c[k]=nums1[i];
            i++;
            k++;
        }
        while(j<=e2)
        {
            c[k]=nums2[j];
            j++;
            k++;
        }
        if(k!=0)
        k--;
        if(k%2==0)
        {
            median= c[k/2];
        }
        else
        {
            median= (c[k/2]+c[(int)(k/2)+1])/2.0;
        }
        return median;
    }
};
