//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class WCPayTransferMessageViewModel;

@interface WCPayTransferMessageCellView : WCPayBaseMessageCellView
{
}

- (void)OnRetrySendMsg;
- (id)operationMenuItems;
- (void)updateBgImageView;
- (void)updateStatus;
- (void)initTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WCPayTransferMessageViewModel *viewModel; // @dynamic viewModel;

@end

