//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTGrowingTextView, NSString;

@protocol CTGrowingTextViewDelegate <NSObject>

@optional
- (_Bool)growingTextViewShouldReturn:(CTGrowingTextView *)arg1;
- (void)growingTextViewDidChangeSelection:(CTGrowingTextView *)arg1;
- (void)growingTextView:(CTGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(CTGrowingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(CTGrowingTextView *)arg1;
- (_Bool)growingTextView:(CTGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidEndEditing:(CTGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(CTGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldEndEditing:(CTGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(CTGrowingTextView *)arg1;
@end

