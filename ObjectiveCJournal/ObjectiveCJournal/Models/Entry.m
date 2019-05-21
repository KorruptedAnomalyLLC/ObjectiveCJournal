//
//  Entry.m
//  ObjectiveCJournal
//
//  Created by Austin West on 5/20/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import "Entry.h"

@implementation Entry
- (instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timestamp:(NSDate *)timestamp
{
    self = [super init];
    if (self) {
        _title = title;
        _bodyText = bodyText;
        _timestamp = [NSDate date];
    }
    return self;
}



@end
