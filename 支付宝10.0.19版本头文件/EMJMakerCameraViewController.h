//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTBaseViewController.h"

#import "AUDialogDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class EMJCameraMaskView, EMJEditorView, NSArray, NSString, TGCamera, UIActivityIndicatorView, UIButton, UICollectionView, UIView;

@interface EMJMakerCameraViewController : DTBaseViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UICollectionViewDelegate, UIAlertViewDelegate, UICollectionViewDataSource, AUDialogDelegate>
{
    NSArray *_shapeItemArray;
    _Bool _wasLoaded;
    id <EMJMakerCameraViewControllerDelegate> _makerDelegate;
    UIView *_topView;
    UIView *_captureView;
    UIView *_actionView;
    UIView *_bottomView;
    UICollectionView *_faceShapeCollectionView;
    TGCamera *_camera;
    UIActivityIndicatorView *_activityView;
    UIButton *_closeButton;
    UIButton *_toggleButton;
    UIButton *_shotButton;
    UIButton *_albumButton;
    UIButton *_historyButton;
    EMJEditorView *_photoEditorView;
    EMJCameraMaskView *_cameraMaskView;
}

@property(retain, nonatomic) EMJCameraMaskView *cameraMaskView; // @synthesize cameraMaskView=_cameraMaskView;
@property(retain, nonatomic) EMJEditorView *photoEditorView; // @synthesize photoEditorView=_photoEditorView;
@property(retain, nonatomic) UIButton *historyButton; // @synthesize historyButton=_historyButton;
@property(retain, nonatomic) UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIButton *shotButton; // @synthesize shotButton=_shotButton;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) TGCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) UICollectionView *faceShapeCollectionView; // @synthesize faceShapeCollectionView=_faceShapeCollectionView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) __weak UIView *captureView; // @synthesize captureView=_captureView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property __weak id <EMJMakerCameraViewControllerDelegate> makerDelegate; // @synthesize makerDelegate=_makerDelegate;
- (void).cxx_destruct;
- (long long)videoOrientationForDeviceOrientation:(long long)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)_normalizeImageIfNeeds:(id)arg1;
- (void)albumTapped;
- (void)shotTapped:(id)arg1;
- (id)_maskedFaceWithImage:(id)arg1;
- (void)_pushMainControllerWithEditor:(_Bool)arg1 photoImage:(id)arg2;
- (void)switchCameraTapped;
- (void)closeTapped;
- (void)toggleEditMode:(_Bool)arg1 photoImage:(id)arg2;
- (_Bool)isInEditMode;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_refreshMaskView;
- (id)selectedShapeItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)resetCloseButtonForceUseBack:(_Bool)arg1;
- (_Bool)isControllerPresenting;
- (_Bool)prefersStatusBarHidden;
- (_Bool)autohideNavigationBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

