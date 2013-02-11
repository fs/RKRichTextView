//
//  ViewController.m
//  RichTextViewDemo
//
//  Created by ren6 on 2/11/13.
//  Copyright (c) 2013 ren6. All rights reserved.
//

#import "ViewController.h"
#import "RKRichTextView.h"
@interface ViewController ()<RKRichTextViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    RKRichTextView *richTextView = [[[RKRichTextView alloc] initWithFrame:CGRectMake(20, 100, self.view.frame.size.width-40, 200)] autorelease];
    [self.view addSubview:richTextView];
    richTextView.text = @"This is <strong><i>rich</i></strong> text!";
    richTextView.richDelegate = self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
