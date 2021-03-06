//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGFundsBaseViewController.h"

#import "AUDialogDelegate.h"
#import "PKStatusBarDelegate.h"
#import "SGFMBaseCellDelegate.h"
#import "SGFMListPanelDelegate.h"
#import "SafePayDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APBarButtonItem, APSegmentedControl, APToastView, NSIndexPath, NSString, PKStatusBar, SGFMDataModel, SGFMListBlankView, SGFMListPanel, SGFMListSectionView, SGFMListViewCell, SGFMRecordItem, SGFundBillManager, SGFundMaskView, SGFundsActionController, SGFundsManageHeaderView, UIRefreshControl, UIScrollView, UITableView, UIView;

@interface SGFundsManageViewController : SGFundsBaseViewController <UITableViewDataSource, UITableViewDelegate, SGFMBaseCellDelegate, UIActionSheetDelegate, SafePayDelegate, PKStatusBarDelegate, SGFMListPanelDelegate, AUDialogDelegate>
{
    _Bool _hasTransferOwner;
    _Bool _shouldAutoRefreshInList;
    _Bool _shouldAutoRefreshOutList;
    _Bool _offline;
    int _currentType;
    NSString *_batchId;
    UIView *_contentView;
    SGFundsManageHeaderView *_balanceHeaderView;
    SGFundsActionController *_actionController;
    APSegmentedControl *_fundsSegmentControl;
    UIRefreshControl *_refreshControl;
    UITableView *_tableView;
    SGFMListBlankView *_blankView;
    APToastView *_toast;
    SGFMListPanel *_listPanel;
    NSIndexPath *_panelRelatedIndexPath;
    SGFundMaskView *_maskView;
    long long _expandBatchIndex;
    SGFundBillManager *_billManager;
    SGFMDataModel *_dataModel;
    SGFMRecordItem *_payingRecord;
    PKStatusBar *_statusBar;
    id <SPSafePayService> _safePayService;
    SGFMRecordItem *_currentPayrecordItem;
    SGFMListViewCell *_currentPayCell;
    SGFMListSectionView *_sectionView;
    UIView *_segmentBGView;
    APBarButtonItem *_rightBarButton;
    SGFMRecordItem *_currentProcessItem;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SGFMRecordItem *currentProcessItem; // @synthesize currentProcessItem=_currentProcessItem;
@property(retain, nonatomic) APBarButtonItem *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) UIView *segmentBGView; // @synthesize segmentBGView=_segmentBGView;
@property(retain, nonatomic) SGFMListSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) SGFMListViewCell *currentPayCell; // @synthesize currentPayCell=_currentPayCell;
@property(retain, nonatomic) SGFMRecordItem *currentPayrecordItem; // @synthesize currentPayrecordItem=_currentPayrecordItem;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) __weak id <SPSafePayService> safePayService; // @synthesize safePayService=_safePayService;
@property(retain, nonatomic) PKStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) SGFMRecordItem *payingRecord; // @synthesize payingRecord=_payingRecord;
@property(retain, nonatomic) SGFMDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) SGFundBillManager *billManager; // @synthesize billManager=_billManager;
@property(nonatomic) long long expandBatchIndex; // @synthesize expandBatchIndex=_expandBatchIndex;
@property(retain, nonatomic) SGFundMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSIndexPath *panelRelatedIndexPath; // @synthesize panelRelatedIndexPath=_panelRelatedIndexPath;
@property(retain, nonatomic) SGFMListPanel *listPanel; // @synthesize listPanel=_listPanel;
@property(retain, nonatomic) APToastView *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) SGFMListBlankView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) APSegmentedControl *fundsSegmentControl; // @synthesize fundsSegmentControl=_fundsSegmentControl;
@property(retain, nonatomic) SGFundsActionController *actionController; // @synthesize actionController=_actionController;
@property(retain, nonatomic) SGFundsManageHeaderView *balanceHeaderView; // @synthesize balanceHeaderView=_balanceHeaderView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool shouldAutoRefreshOutList; // @synthesize shouldAutoRefreshOutList=_shouldAutoRefreshOutList;
@property(nonatomic) _Bool shouldAutoRefreshInList; // @synthesize shouldAutoRefreshInList=_shouldAutoRefreshInList;
@property(nonatomic) int currentType; // @synthesize currentType=_currentType;
@property(nonatomic) _Bool hasTransferOwner; // @synthesize hasTransferOwner=_hasTransferOwner;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (void).cxx_destruct;
- (void)buttonTapedWithAction:(id)arg1;
- (void)PKStatusBarTaped:(id)arg1;
- (void)PKStatusBarSubIconTaped:(id)arg1;
- (void)PKStatusBarAlertMessageTaped:(id)arg1;
- (void)PKStatusBarDismissed:(id)arg1;
- (void)updateItemStateWhenOffline;
- (void)_enterChangeConditionVC;
- (void)_enterTransferAdminVC;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ToastView:(id)arg1;
- (void)deleteRecordFinished:(id)arg1;
- (void)cellWillRemove:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)segmentValueDidChange:(id)arg1;
- (void)updateLeftWhenPaySuccess;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (void)payRecord:(id)arg1 transferNo:(id)arg2;
- (void)createTradePaymentWithRecordItem:(id)arg1;
- (void)collapseBatchGroup;
- (void)expandBatchGroupAtIndex:(long long)arg1 sectionView:(id)arg2 taped:(_Bool)arg3;
- (void)hideListPanelAnimated:(_Bool)arg1;
- (void)showListPanelAtCell:(id)arg1 recordItem:(id)arg2 animated:(_Bool)arg3;
- (void)moreActionButtonClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showStatusBarWithMessage:(id)arg1;
- (void)refreshedByPullingTable:(id)arg1;
- (void)initActionController;
- (void)initScrollViewTableView;
- (void)initSegmentControl;
- (void)back;
- (void)buildBackBarItem;
- (void)viewDidLoad;
- (id)init;
- (void)_confirmUserPaymentWithAction:(id)arg1 recordImte:(id)arg2;
- (void)_applyOwnerUIState;
- (void)_applyOwnerTransfer;
- (void)_pullRefreshControlToRefresh;
- (void)_autoRefreshDataIfNeeded;
- (void)_firstRefreshRecordData;
- (void)delayQuestBatchGroupItem;
- (void)_applyListRecordDataAndQuestBatchGroupItem:(_Bool)arg1;
- (void)_removeNoRecordHintView;
- (void)_applyNoRecordHintView;
- (id)_listPanel;
- (void)_setupRightBarItem;
- (void)_initDataModel;
- (void)_applyDataStateWithSegmentIndex;
- (int)_actionTypeForDataListType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

