﻿/* 
   Copyright 2013 KLab Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#ifndef _KLB_FILE_DELETE_
#define _KLB_FILE_DELETE_

#include <dirent.h>

#include "CPFInterface.h"

bool deleteFiles(const char* path);
const char* getFullNativePath(const char* path);
void removeTmpFileNative(const char* filePath);

#endif
