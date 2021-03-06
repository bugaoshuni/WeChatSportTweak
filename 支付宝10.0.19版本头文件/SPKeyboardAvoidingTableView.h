//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface SPKeyboardAvoidingTableView : UITableView
{
    struct UIEdgeInsets _priorInset;
    _Bool _priorInsetSaved;
    _Bool _keyboardVisible;
    struct CGRect _keyboardRect;
}

- (struct CGRect)keyboardRect;
- (double)idealOffsetForView:(id)arg1 withSpace:(double)arg2;
- (struct UIEdgeInsets)contentInsetForKeyboard;
- (id)findFirstResponderBeneathView:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

@end

