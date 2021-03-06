//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MVCinemaUserMCardStatus : NSObject
{
    _Bool _mcardNoUseLimit;
    _Bool _canRecharge;
    NSString *_mcardId;
    NSString *_extMcardId;
    NSString *_mcardName;
    NSString *_mcardType;
    long long _status;
    long long _mcardBalance;
    long long _mcardTodayBalance;
    NSString *_mcardDetailUrl;
}

@property(nonatomic) _Bool canRecharge; // @synthesize canRecharge=_canRecharge;
@property(nonatomic) _Bool mcardNoUseLimit; // @synthesize mcardNoUseLimit=_mcardNoUseLimit;
@property(copy, nonatomic) NSString *mcardDetailUrl; // @synthesize mcardDetailUrl=_mcardDetailUrl;
@property(nonatomic) long long mcardTodayBalance; // @synthesize mcardTodayBalance=_mcardTodayBalance;
@property(nonatomic) long long mcardBalance; // @synthesize mcardBalance=_mcardBalance;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *mcardType; // @synthesize mcardType=_mcardType;
@property(copy, nonatomic) NSString *mcardName; // @synthesize mcardName=_mcardName;
@property(copy, nonatomic) NSString *extMcardId; // @synthesize extMcardId=_extMcardId;
@property(copy, nonatomic) NSString *mcardId; // @synthesize mcardId=_mcardId;
- (void).cxx_destruct;
- (id)mcardWarningMessage;
- (_Bool)isMcardAvailable;
- (_Bool)isMcardExist;

@end

