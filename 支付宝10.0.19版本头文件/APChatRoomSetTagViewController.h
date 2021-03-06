//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface APChatRoomSetTagViewController : DTViewController
{
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _settedTagCallback;
    NSArray *_tags;
    UIView *_containerView;
    UILabel *_titleLabel;
    NSMutableArray *_tagViews;
    NSString *_roomId;
}

@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) CDUnknownBlockType settedTagCallback; // @synthesize settedTagCallback=_settedTagCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onClose;
- (void)onTagSelected:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)createSubviewsWithTags:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithTags:(id)arg1 roomId:(id)arg2;

@end

