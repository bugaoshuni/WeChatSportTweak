//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSString;

@interface DBContactLocal : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int chatState;
    unsigned int needUpdate;
    unsigned int metaFlag;
    unsigned int lastUpdateTime;
    NSString *mobileIdentify;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(nonatomic) unsigned int metaFlag; // @synthesize metaFlag;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify;
@property(nonatomic) unsigned int needUpdate; // @synthesize needUpdate;
@property(nonatomic) unsigned int chatState; // @synthesize chatState;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
