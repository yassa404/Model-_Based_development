function out=Nested_Function(a,b)

    function out=sqr()
        out=a*a;
    end

    function out=Double()
        out=b*2;
    end
    
    out=sqr()+Double();
end