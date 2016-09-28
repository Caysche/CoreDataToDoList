//
//  ToDoTask+CoreDataProperties.m
//  CoreDataToDoList
//
//  Created by Cay Cornelius on 28/09/16.
//  Copyright © 2016 Cornelius.Media. All rights reserved.
//

#import "ToDoTask+CoreDataProperties.h"

@implementation ToDoTask (CoreDataProperties)

+ (NSFetchRequest<ToDoTask *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"ToDoTask"];
}

@dynamic title;
@dynamic toDoDescription;

@end
