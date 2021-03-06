//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface SPGTFormViewModel : NSObject
{
    NSObject<OS_dispatch_semaphore> *_contact_sem;
    NSMutableArray *_lotMembers;
    NSMutableArray *_lotContactMembers;
    long long _lotMemberLimit;
    double _maxPerInput;
    NSString *_bizContext;
    DTRpcAsyncCaller *_createLotCaller;
    DTRpcAsyncCaller *_queryLotCaller;
    DTRpcAsyncCaller *_createLotBillCaller;
    DTRpcAsyncCaller *_closeLotCaller;
    DTRpcAsyncCaller *_closeLotBillCaller;
    DTRpcAsyncCaller *_getLotBillRetCaller;
}

+ (long long)MemberRowCount;
+ (_Bool)buildGroupTransfer;
+ (void)configLaunch;
+ (_Bool)showIndicator;
@property(retain, nonatomic) DTRpcAsyncCaller *getLotBillRetCaller; // @synthesize getLotBillRetCaller=_getLotBillRetCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *closeLotBillCaller; // @synthesize closeLotBillCaller=_closeLotBillCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *closeLotCaller; // @synthesize closeLotCaller=_closeLotCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *createLotBillCaller; // @synthesize createLotBillCaller=_createLotBillCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *queryLotCaller; // @synthesize queryLotCaller=_queryLotCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *createLotCaller; // @synthesize createLotCaller=_createLotCaller;
@property(retain, nonatomic) NSString *bizContext; // @synthesize bizContext=_bizContext;
@property(nonatomic) double maxPerInput; // @synthesize maxPerInput=_maxPerInput;
@property(nonatomic) long long lotMemberLimit; // @synthesize lotMemberLimit=_lotMemberLimit;
@property(retain, nonatomic) NSMutableArray *lotContactMembers; // @synthesize lotContactMembers=_lotContactMembers;
@property(retain, nonatomic) NSMutableArray *lotMembers; // @synthesize lotMembers=_lotMembers;
- (void).cxx_destruct;
- (void)deleteContactOnForm:(id)arg1;
- (void)appendSelectedContactsOnForm:(id)arg1;
- (void)clear;
- (id)getRowMembers:(long long)arg1;
- (long long)numberOfRows;
- (void)deleTransferGroupMemberContactsWithContactUserIds:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)addTransferGroupMemberContactsWithContactUserIds:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)loadContactMembersFromContactWithFinishBlock:(CDUnknownBlockType)arg1 lotResp:(id)arg2;
- (void)refreshLotPayMembersWithFnishBlock:(CDUnknownBlockType)arg1;
- (void)loadLotPayMembersWithFnishBlock:(CDUnknownBlockType)arg1;
- (id)buildLotBillReq:(id)arg1 selectedContacts:(id)arg2;
- (void)loadLotPayResultWithMergedOrderNo:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)closeLotPayBillWithBillNo:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)closeLotPayWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)createLotPayBillWithPerAmount:(id)arg1 assignedChannel:(id)arg2 freeContinue:(_Bool)arg3 selectedContacts:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)createLotPay:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)reloadLotMembers:(id)arg1;
- (id)init;

@end

