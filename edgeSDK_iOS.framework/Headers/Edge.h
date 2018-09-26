//
//  Edge.h
//  Edge
//
//  Created by mimik on 2018-03-02.
//  Copyright © 2018 mimik technology inc. All rights reserved.
//

//#include <string>
//#include <map>

#import "Foundation/Foundation.h"

@interface Edge : NSObject

- (void)startWith:(int)port
           nodeId:(NSString *)nodeId
         nodeName:(NSString *)name
    licenseString:(NSString *)license
 workingDirectory:(NSString *)workingDirectory;
- (void)stop;

@end
