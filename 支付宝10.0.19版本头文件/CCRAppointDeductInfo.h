//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseModel.h"

#import "NSCoding.h"

@class NSString;

@interface CCRAppointDeductInfo : CCRBaseModel <NSCoding>
{
    _Bool _canDeduct;
    NSString *_deductId;
    NSString *_deductSignedDate;
    NSString *_recommendedAppointDeductDateDesc;
    NSString *_recommendedAppointDeductDate;
    NSString *_acauthUUID;
    NSString *_deductWarn;
    NSString *_deductRemindDesc;
}

@property(retain, nonatomic) NSString *deductRemindDesc; // @synthesize deductRemindDesc=_deductRemindDesc;
@property(retain, nonatomic) NSString *deductWarn; // @synthesize deductWarn=_deductWarn;
@property(retain, nonatomic) NSString *acauthUUID; // @synthesize acauthUUID=_acauthUUID;
@property(retain, nonatomic) NSString *recommendedAppointDeductDate; // @synthesize recommendedAppointDeductDate=_recommendedAppointDeductDate;
@property(retain, nonatomic) NSString *recommendedAppointDeductDateDesc; // @synthesize recommendedAppointDeductDateDesc=_recommendedAppointDeductDateDesc;
@property(retain, nonatomic) NSString *deductSignedDate; // @synthesize deductSignedDate=_deductSignedDate;
@property(nonatomic) _Bool canDeduct; // @synthesize canDeduct=_canDeduct;
@property(retain, nonatomic) NSString *deductId; // @synthesize deductId=_deductId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

