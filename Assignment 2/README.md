# Assignment 2

*Due: 25/02/22*

**Write a program to calculate the AM, GM, HM, Median and Mode from N observations. The value of n and the observations are taken are user.**

### Information

> These three are average or mean of the respective series. AM stands for Arithmetic Mean, GM stands for Geometric Mean, and HM stands for Harmonic Mean. AM, GM and HM are the mean of Arithmetic Progression (AP), Geometric Progression (GP) and Harmonic Progression (HP) respectively.
>

### Arithmetic Mean

Arithmetic mean represents a number that is achieved by dividing the sum of the values of a set by the number of values in the set. If a1, a2, a3,….,an, is a number of group of values or the Arithmetic Progression, then;

*AM=(a1+a2+a3+….,+an)/n*

### Geometric Mean

The Geometric Mean for a given number of values containing n observations is the nth root of the product of the values.

*GM = n√(a1a2a3….an)*

Or

*GM = (a1a2a3….an)1/n*

### Harmonic Mean

HM is defined as the reciprocal of the arithmetic mean of the given data values. It is represented as:

*HM = n/[(1/a1) + (1/a2) + (1/a3) + ….+  (1/an)]*

### Median

1. **Ungrouped Data**
    1. Arrange the data in ascending or descending order.
    2. Let the total number of observations be n.

    To find the median, we need to consider if n is even or odd.  ***If n is odd, then use the formula: Median = (n + 1)/2th observation.***

2. **Grouped Data**

    When the data is continuous and in the form of a frequency distribution, the median is found as shown below:

    Step 1: Find the median class.

    Let n = total number of observations i.e. $∑fi∑fi$

    Note: Median Class is the class where (n/2) lies.

    Step 2: Use the following formula to find the median.

    Median = $l+[n2−cf]×hl+[n2−cf]×h$

    where,

    - l = lower limit of median class
    - c = cumulative frequency of the class preceding the median class
    - f = frequency of the median class
    - h = class size

### Mode

The value which appears most often in the given data i.e. the observation with the highest frequency is called a **mode** of data.

1. **Ungrouped Data**

    For ungrouped data, we just need to identify the observation which occurs maximum times.

    **Mode = Observation with maximum frequency**

2. **Grouped Data**

    When the data is continuous, the mode can be found using the following steps:

    - **Step 1:** Find modal class i.e. the class with maximum frequency.
    - **Step 2:** Find mode using the following formula:

    Mode = $l+[fm−f12fm−f1−f2]×hl+[fm−f12fm−f1−f2]×h$

    where,

    - l = lower limit of modal class,
    - $fm$= frequency of modal class,
    - $f1$= frequency of class preceding modal class,
    - $f2$= frequency of class succeeding modal class,
    - h = class width