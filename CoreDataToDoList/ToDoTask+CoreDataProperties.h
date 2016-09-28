//
//  ToDoTask+CoreDataProperties.h
//  CoreDataToDoList
//
//  Created by Cay Cornelius on 28/09/16.
//  Copyright © 2016 Cornelius.Media. All rights reserved.
//

#import "ToDoTask+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface ToDoTask (CoreDataProperties)

+ (NSFetchRequest<ToDoTask *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSString *toDoDescription;

@end

NS_ASSUME_NONNULL_END
