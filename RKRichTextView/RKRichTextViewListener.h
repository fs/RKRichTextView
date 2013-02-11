//
//  RKRichTextView.h
//
//
//  Created by Renat Kurbanov on 2/1/13.
//

#import <Foundation/Foundation.h>
#import "RKRichTextView.h"
@class RKRichTextView;
@interface RKRichTextViewListener : NSObject <UIWebViewDelegate>
@property (nonatomic, assign) RKRichTextView* richTextView;
@end
