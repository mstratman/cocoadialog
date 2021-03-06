// CDTextView.h
// cocoadialog
//
// Copyright (c) 2004-2017 Mark A. Stratman <mark@sporkstorms.org>, Mark Carver <mark.carver@me.com>.
// All rights reserved.
// Licensed under GPL-2.

@class CDTextField;

#import "CDMarkdown.h"

@interface CDTextField : NSTextField <NSTextFieldDelegate>

@property (strong)      CDMarkdown              *markdown;

@end

