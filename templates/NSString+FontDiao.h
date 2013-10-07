//
//  NSString+FontDiao.h
//  FontDiao
//
//  Created by Lex on 10/7/13.
//
//  The MIT License (MIT)
//  Copyright © 2013 Lex Tang, http://LexTang.com
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the “Software”), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>

static NSString *const kFontDiaoFamilyName = @"fontdiao";

typedef NS_ENUM(NSInteger, FDIcon) {<% @glyphs.each_with_index do |name, index| %>
    FDIcon<%= name.capitalize %><% if index == 0 %> = 0<% end %><% if index != @glyphs.length - 1 %>,<% end %><% end %>
};

@interface NSString (FontDiao)

+ (FDIcon)fontDiaoEnumForIconIdentifier:(NSString*)iconIndentifier;

+ (NSString*)fontDiaoIconStringForEnum:(FDIcon)enumValue;

+ (NSString*)fontDiaoIconStringForIconIdentifier:(NSString*)iconIdentifier;

@end
