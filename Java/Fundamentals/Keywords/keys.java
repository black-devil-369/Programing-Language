//package  Java.Fundamentals.Keywords;
class Details{
    private String Name;
    private int Age;
    private String Subject;
    Details(String name , int age,String subject){
        this.Name = name;
        this.Age = age;
        this.Subject = subject;
    }
    void getdetails(){
        System.out.println(this.Name+" "+this.Age+" "+this.Subject);
    }
}
class keys{
    // main method
    public static void main(String[] args) {
        Details d = new Details("Ajay", 34, "CSE");
        d.getdetails();
    }
}