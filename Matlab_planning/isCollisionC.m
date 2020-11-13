function flag=isCollisionC(qnew,obs)
flag = true; 

n = size(obs,1);
for k = 1:n %острова
    j=0;
    for i = 1:3
        if obs(k,i,1) < qnew(i) && obs(k,i,2) > qnew(i)
            j=j+1;
            if j~=3
                 flag = true;
            else flag = false;
            break
            end
        end
    end
       if flag == false
       break
    end
end
            