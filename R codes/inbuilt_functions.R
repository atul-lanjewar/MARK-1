#built in functions in R
x<--5
print(abs(x))

print(sqrt(46))

x<-5.6
print(ceiling(x))
print(floor(x))

y<-c(1.5,5.6,8.5)
print(trunc(y))

z<-5
print(sin(z))

#string functions
s<-"123456789"
substr(s,4,6)

s1<-"atul lanjewar"
print(toupper(s1))
print(tolower(s1))

s2<-c("abcd","bcbd","abcdbcbd")
pat<-"^abc"
print(grep(pat,s2))

a1<-c(0:10,40)
su<-sum(a1)
print(su)

a1<-c(0:10,23,45)
su<-max(a1)
print(su)