//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UILabel;

@interface O2OLifeCircleAddAnswerShopsView : UIView
{
    UILabel *_recommendLabel;
    NSMutableArray *_shopViews;
    long long _currentIndex;
    NSArray *_shops;
    CDUnknownBlockType _menuPressed;
}

@property(copy, nonatomic) CDUnknownBlockType menuPressed; // @synthesize menuPressed=_menuPressed;
@property(retain, nonatomic) NSArray *shops; // @synthesize shops=_shops;
- (void).cxx_destruct;
- (void)deleteMenuClicked:(id)arg1;
- (void)didTapItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

