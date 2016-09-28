//
//  DetailViewController.h
//  CoreDataToDoList
//
//  Created by Cay Cornelius on 28/09/16.
//  Copyright © 2016 Cornelius.Media. All rights reserved.
//

#import <UIKit/UIKit.h>
// #import "CoreDataToDoList+CoreDataModel.h"
#import "ToDoTask+CoreDataProperties.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDoTask *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

