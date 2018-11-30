//
//  MyInstallerPane.m
//  qq
//
//  Created by Mac on 2018/11/30.
//  Copyright © 2018 Mac. All rights reserved.
//

#import "MyInstallerPane.h"

@implementation MyInstallerPane

- (NSString *)title
{
    return [[NSBundle bundleForClass:[self class]] localizedStringForKey:@"PaneTitle" value:nil table:nil];
}

@end
