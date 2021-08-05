for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) nCr[i][j]=1;
            else nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%M;
        }
    }
