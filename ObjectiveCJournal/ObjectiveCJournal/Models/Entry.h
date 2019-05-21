//
//  Entry.h
//  ObjectiveCJournal
//
//  Created by Austin West on 5/20/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Entry : NSObject

@property (nonatomic, copy)NSString* title;
@property (nonatomic, copy)NSString* bodyText;
@property (nonatomic, copy)NSDate* timestamp;

@end

NS_ASSUME_NONNULL_END
