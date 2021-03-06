//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FavBizDataManagerProtocol.h"

@class FavCommonDataManager, NSObject<OS_dispatch_queue>, NSString;

@interface FavBizCommonDataManager : NSObject <FavBizDataManagerProtocol>
{
    unsigned long long _syncState;
    id <FavBizDataManagerDelegate> _delegate;
    FavCommonDataManager *_dataManager;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) FavCommonDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak id <FavBizDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long syncState; // @synthesize syncState=_syncState;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *emptyTip;
- (void)syncLocalDataToServer;
- (void)mergeData:(id)arg1 withServerVersion:(long long)arg2;
- (void)syncData;
- (id)queryFavItems;
- (id)queryFavItemsFilterType:(id)arg1;
- (id)deleteFavItemObjIds:(id)arg1;
- (id)queryFavItemObjIds:(id)arg1;
- (id)queryFavItemObjId:(id)arg1;
- (void)addFavItems:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)updateFavItems:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

