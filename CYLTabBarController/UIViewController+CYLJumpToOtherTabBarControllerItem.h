//
//  UIViewController+CYLJumpToOtherTabBarControllerItem.h
//  CYLTabBarController
//
//  Created by 微博@iOS程序犭袁 ( http://weibo.com/luohanchenyilong/ ) on 16/2/26.
//  Copyright © 2016年 https://github.com/ChenYilong .All rights reserved.
//

@import UIKit;

@interface UIViewController (CYLJumpToOtherTabBarControllerItem)

/*!
 * This will invoke: `-[ClassTypeOject selector:arguments]`.
 */
- (void)cyl_jumpToOtherTabBarControllerItem:(Class)ClassType
                            performSelector:(SEL)selector
                                  arguments:(NSArray *)arguments;
/*!
 * This will invoke: `-[ClassTypeOject selector:arguments]`.
 */
- (void)cyl_jumpToOtherTabBarControllerItem:(Class)ClassType
                            performSelector:(SEL)selector
                                  arguments:(NSArray *)arguments
                                returnValue:(void *)returnValue;
/*!
 * This will invoke: `-[target selector:arguments]`.
 */
- (void)cyl_jumpToOtherTabBarControllerItem:(Class)ClassType
                                     target:(id)target
                            performSelector:(SEL)selector
                                  arguments:(NSArray *)arguments
                                returnValue:(void *)returnValue;
@end
