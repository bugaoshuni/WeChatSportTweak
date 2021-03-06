//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UILabel;

@interface APTagView : UIButton
{
    UIColor *_borderColor;
    UIColor *_fontColor;
    NSString *_text;
    UIColor *_bgColor;
    UIColor *_bgColorHighlighted;
    UILabel *_labelView;
}

@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) UIColor *bgColorHighlighted; // @synthesize bgColorHighlighted=_bgColorHighlighted;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)sizeToFit;
- (id)init;

@end

