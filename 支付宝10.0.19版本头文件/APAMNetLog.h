//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMLogDelegate.h"

@class NSString;

@interface APAMNetLog : NSObject <AMLogDelegate>
{
}

- (void)logwithFootprintLogParam1:(id)arg1 param2:(id)arg2 param3:(id)arg3 paramKVMap:(id)arg4;
- (void)MTBIZ_Report:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
- (void)writeLocalLogSubType:(id)arg1 extraParams:(id)arg2;
- (void)logwithSubType:(id)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

