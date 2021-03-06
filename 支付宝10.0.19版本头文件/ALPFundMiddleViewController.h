//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEDataController.h"

#import "H5ServiceDelegate.h"

@class DTMicroApplication, NSString;

@interface ALPFundMiddleViewController : BEEDataController <H5ServiceDelegate>
{
    _Bool _needExitAppForH5HomePage;
    DTMicroApplication *_nativeApp;
}

@property(nonatomic) __weak DTMicroApplication *nativeApp; // @synthesize nativeApp=_nativeApp;
@property(nonatomic) _Bool needExitAppForH5HomePage; // @synthesize needExitAppForH5HomePage=_needExitAppForH5HomePage;
- (void).cxx_destruct;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)gotoYebOpenAccount;
- (id)emptyText;
- (void)loadSuccess:(id)arg1;
- (id)loadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

