//
//  EntryController.h
//  ObjectiveCJournal
//
//  Created by Austin West on 5/20/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entry.h"

NS_ASSUME_NONNULL_BEGIN

@interface EntryController : NSObject

@property (nonatomic, strong, readonly) NSArray* entries;

+ (EntryController *) sharedController;

//create
- (void) addEntry:(Entry*)entry;

//delete
- (void) removeEntry:(Entry*)entry;

//




@end

NS_ASSUME_NONNULL_END
