//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEPagingTableController.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AWSNoticeListViewController : BEEPagingTableController
{
    unsigned long long _lastPageSize;
    NSMutableArray *_dataArrayByDate;
    NSMutableDictionary *_sectionHeaderViewDict;
    NSString *_lastDate;
}

@property(retain, nonatomic) NSString *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaderViewDict; // @synthesize sectionHeaderViewDict=_sectionHeaderViewDict;
@property(retain, nonatomic) NSMutableArray *dataArrayByDate; // @synthesize dataArrayByDate=_dataArrayByDate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)appendElement:(id)arg1;
- (void)loadInMode:(long long)arg1;
- (_Bool)hasNextPage;
- (id)emptyText;
- (id)loadData;
- (void)changeRefreshControl;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

