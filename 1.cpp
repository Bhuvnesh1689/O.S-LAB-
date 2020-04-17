#include<unistd.h>

#include<stdio.h>

#include<pthread.h>

#include<sys/types.h>

#include<sys/wait.h>

#include<fcntl.h>

#include<stdbool.h>

public class cSection (
int turn;
boolean flagl = new boolean[2]:
int i=0, j = 1;
//CSC variables
int counter = 0;// counter for giving processes an upper bound
int cscVar = 13;
private class Processl extends Thread {// process thread for i

public void run(){
try {
do{
flag[i] true;
tum = j;
while (flag[j] && turn=j)
;//wait for j to finish
//critical section
System.out.println("l is in critical section");
catch (Exception ex) {
ex.printStackT race(
}
}
}
private class ProcessJ extends Thread {//process thread for j

public void run() {
try{
do{
flag[j]= true;
tum = i;
while (flag[i] && turn=i)
;//wait for i to finish
// critical section
System.out.printin("J is in critical section");
cscVar--;
System.out.printin(cscVar);
counter++;
System.out.println("counter is"+counter+ "n_________________");
flag[j] = false;
//remainder section
while (counter < 100); //100 is upper bound, to remove
//infinite looping
}
catch (Exception ex) {
ex.printStackTrace();
}
}
}
public cSection() {
System.out.printin ("Starting Threads/Processes");
Thread I = new ProcessI();
Thread J = new ProcessJ();
I.start(); // start process i
J.start();// start process
}
public static void main(String[] args){
cSection cSec = new cSection();
}
}


