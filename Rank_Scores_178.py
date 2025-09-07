import pandas as pd

def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    list1=[]
    for score in scores.score:
        list1.append(float(score))
    list1.sort(reverse=True)
    rank=[1]
    k=1
    if(len(scores.score)==0):
        data={
        'score':[],
        'rank':[]
        }
        df=pd.DataFrame(data)
        return df
    for i in range(0,len(list1)):
        if(i!=0 and list1[i]!=list1[i-1]):
            k+=1
            rank.append(k)
        elif(i!=0 and list1[i]==list1[i-1]):
            rank.append(k)
    data={
        'score':list1,
        'rank':rank
    }
    df=pd.DataFrame(data)
    return df
