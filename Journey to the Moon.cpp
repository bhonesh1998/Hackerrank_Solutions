/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


public class GFG
{
    
   static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
    class Node
    {
        int data ;
        Node parent;
        int rank;
    }
     HashMap<Integer, Node> m= new HashMap<>();
    
    public void makeset(int data)
    {
        Node node = new Node();
        node.data=data;
        node.parent=node;
        node.rank=0;
        m.put(data,node);
    }
    
    public boolean union(int data1,int data2)
    {
            Node node1 = m.get(data1); 
            Node node2 =m.get(data2);
            
            Node parent1= findset(node1);
            Node parent2 = findset(node2);
            
            
           if(parent1.data==parent2.data)
           return false;
           
           else
           {
               if(parent1.rank>=parent2.rank)
               {
                    if(parent1.rank==parent2.rank)
                    parent1.rank++;
                    parent2.parent=parent1;
               }
               else
               
               parent1.parent=parent2;
           }
           return true;
        
    }
    
    public int findset(int data)
     {return findset(m.get(data)).data;}
    
    public Node findset(Node node)
    {
        
        
        Node parent = node.parent;
        if(parent==node)
        return parent;
        
        node.parent = findset(node.parent);
        return node.parent;
    }
    
    
    public static void main (String[] args) {
        int i,j;
        FastReader s=new FastReader();
       // Scanner s = new Scanner(System.in);
        
    GFG ds = new GFG();
    
    int n = s.nextInt();
    for(i=0;i<n;i++)
    ds.makeset(i);
    
    int q = s.nextInt();
    while(q-->0)
    {
            int a = s.nextInt();
            int b = s.nextInt();
            ds.union(a,b);
    }
    Set<Integer> my = new HashSet<Integer>();
    //HashMap<Integer, Integer> mm= new HashMap<>();
    int arr[] = new int[100000];
    for(i=0;i<100000;i++)
        arr[i]=0;
    for(i=0;i<n;i++)
    {
        //my.add(ds.findset(i));
        arr[ds.findset(i)]++;
    }
    long ans =0;
    Vector<Integer> v = new Vector<>();
    for(i=0;i<100000;i++)
    if(arr[i]>0)
    v.addElement(arr[i]);
    
    
    for(i=0;i<v.size();i++)
    {
       ans+=(v.get(i)*(n-v.get(i)));
    }
            
    System.out.println(ans/2);
    
        // ds.makeset(1);
        // ds.makeset(2);
        //  ds.makeset(3);
        // // ds.makeSet(4);
        // // ds.makeSet(5);
        // // ds.makeSet(6);
        // // ds.makeSet(7);

        // ds.union(1, 2);
        // ds.union(2, 3);
        // // ds.union(4, 5);
        // // ds.union(6, 7);
        // // ds.union(5, 6);
        // // ds.union(3, 7);

        // System.out.println(ds.findset(1));
        // System.out.println(ds.findset(2));
        // System.out.println(ds.findset(3));
        // System.out.println(ds.findSet(4));
        // System.out.println(ds.findSet(5));
        // System.out.println(ds.findSet(6));
        // System.out.println(ds.findSet(7));
    }
}
