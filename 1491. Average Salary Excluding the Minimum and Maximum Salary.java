class Solution {
    public double average(int[] salary) {
        Arrays.sort(salary);
        int i;
        double summ=Arrays.stream(salary).sum();
        summ-=salary[0];
        summ-=salary[salary.length-1];
        return summ/(salary.length-2);
    }
}
