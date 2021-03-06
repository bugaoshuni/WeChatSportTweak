//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "WKFlyBirdCellProtocol.h"

@class FBDocument, NSString, UIImageView, UILabel, UIView, WKTableCellModel;

@interface APGSearchAboutViewCell : UITableViewCell <WKFlyBirdCellProtocol>
{
    UIImageView *_leftIcon;
    UIImageView *_rightIcon;
    UILabel *_titleLabel;
    UIView *_bottomLine;
    UIView *_topLine;
}

+ (double)cellHeight:(id)arg1 viewBuilder:(id)arg2;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
- (void).cxx_destruct;
- (void)layoutAboutSubViews:(id)arg1;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) WKTableCellModel *cellModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBDocument *document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

