//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SGRecommendReportCache : NSObject
{
    unsigned int _strategyId;
    unsigned int _exposeTime;
    NSString *_localSearchId;
    NSString *_title;
    NSMutableArray *_arrWAUsrname;
}

@property(retain, nonatomic) NSMutableArray *arrWAUsrname; // @synthesize arrWAUsrname=_arrWAUsrname;
@property(nonatomic) unsigned int exposeTime; // @synthesize exposeTime=_exposeTime;
@property(nonatomic) unsigned int strategyId; // @synthesize strategyId=_strategyId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
- (void).cxx_destruct;
- (id)tryGetAppIdListStringBy:(id)arg1;

@end

