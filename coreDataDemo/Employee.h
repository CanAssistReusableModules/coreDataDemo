//
//  Employee.h
//  coreDataDemo
//
//  Created by Peter on 13-03-25.
//  Copyright (c) 2013 CanAssist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Employee : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * id;

@end
