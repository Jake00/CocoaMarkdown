//
//  CMDocument+HTMLAdditions.h
//  CocoaMarkdown
//
//  Created by Indragie on 1/20/15.
//  Copyright (c) 2015 Indragie Karunaratne. All rights reserved.
//

#import "CMDocument.h"
#import "CMHTMLRenderer.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMDocument (HTMLAdditions)

/**
 *  Creates an HTML representation of the receiver.
 *
 *  @return String containing the HTML representation of the receiver.
 */
- (NSString *)HTMLString;

@end

NS_ASSUME_NONNULL_END
