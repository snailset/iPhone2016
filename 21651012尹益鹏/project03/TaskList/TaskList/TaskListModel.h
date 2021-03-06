//
//  TaskListModel.h
//  TaskList
//
//  Created by yinyipeng on 16/11/10.
//  Copyright © 2016年 snailset. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ListModel <NSObject>

- (NSInteger)count;
- (id)objectAtIndex:(NSInteger)index;
- (void)insertObject:(id)object AtIndex:(NSInteger)index;
- (void)removeObjectAtIndex:(NSInteger)index;

@end

@interface TaskListModel : NSObject <ListModel>

//- (instancetype)initWithArray:(NSArray *)array;
- (void)saveTaskList;
- (void)loadTaskList;

@end
