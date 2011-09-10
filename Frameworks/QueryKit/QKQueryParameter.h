//
//  $Id$
//
//  QKQueryParameter.h
//  sequel-pro
//
//  Created by Stuart Connolly (stuconnolly.com) on September 4, 2011
//  Copyright (c) 2011 Stuart Connolly. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <http://code.google.com/p/sequel-pro/>

#import "QKQueryOperators.h"

@interface QKQueryParameter : NSObject 
{
	NSString *_field;
	
	QKQueryOperator _operator;
	
	id _value;
}

/**
 *
 */
@property (readwrite, retain, getter=field, setter=setField:) NSString *_field;

/**
 *
 */
@property (readwrite, assign, getter=operator, setter=setOperator:) QKQueryOperator _operator;

/**
 *
 */
@property (readwrite, retain, getter=value, setter=setValue:) id _value;

+ (QKQueryParameter *)queryParamWithField:(NSString *)field operator:(QKQueryOperator)op value:(id)value;

- (id)initParamWithField:(NSString *)field operator:(QKQueryOperator)op value:(id)value;

@end