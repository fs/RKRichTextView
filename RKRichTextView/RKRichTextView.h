//
//  RKRichTextView.h
//  
//
//  Created by Renat Kurbanov on 2/1/13.
//

#import <UIKit/UIKit.h>
#import "RKRichTextViewListener.h"



@class RKRichTextView;
@protocol RKRichTextViewDelegate
@optional
-(void) prevNextControlTouched:(UISegmentedControl*)control;
-(void) richTextViewDidChange:(RKRichTextView *)richTextView;
-(void) richTextViewDidLoad:(RKRichTextView*)richTextView;
-(void) richTextViewDidReceiveFocus:(RKRichTextView*)richTextView;
-(void) richTextViewWillLooseFocus:(RKRichTextView*)richTextView;
@end

@interface RKRichTextView : UIWebView
@property (nonatomic, assign) id <RKRichTextViewDelegate> richDelegate;
@property (nonatomic, retain) UIView *toolbarView;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) UIToolbar *toolbariPhone;
@property (nonatomic, assign) UIView *modalView;
@property (nonatomic, retain) NSString *text; // HTML Text
-(int) contentSizeHeight;
-(BOOL) becomeFirstResponder;
-(BOOL)resignFirstResponder;
@end
