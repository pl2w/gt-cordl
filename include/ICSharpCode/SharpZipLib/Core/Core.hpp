#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "ICSharpCode/SharpZipLib/Core/CompletedFileHandler.hpp"
#include "ICSharpCode/SharpZipLib/Core/DirectoryEventArgs.hpp"
#include "ICSharpCode/SharpZipLib/Core/DirectoryFailureHandler.hpp"
#include "ICSharpCode/SharpZipLib/Core/Empty.hpp"
#include "ICSharpCode/SharpZipLib/Core/ExtendedPathFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/FileFailureHandler.hpp"
#include "ICSharpCode/SharpZipLib/Core/FileSystemScanner.hpp"
#include "ICSharpCode/SharpZipLib/Core/INameTransform.hpp"
#include "ICSharpCode/SharpZipLib/Core/IScanFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/InvalidNameException.hpp"
#include "ICSharpCode/SharpZipLib/Core/NameAndSizeFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/NameFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/PathFilter.hpp"
#include "ICSharpCode/SharpZipLib/Core/PathUtils.hpp"
#include "ICSharpCode/SharpZipLib/Core/ProcessFileHandler.hpp"
#include "ICSharpCode/SharpZipLib/Core/ProgressEventArgs.hpp"
#include "ICSharpCode/SharpZipLib/Core/ProgressHandler.hpp"
#include "ICSharpCode/SharpZipLib/Core/ScanEventArgs.hpp"
#include "ICSharpCode/SharpZipLib/Core/ScanFailureEventArgs.hpp"
#include "ICSharpCode/SharpZipLib/Core/StreamUtils.hpp"
#ifdef __cpp_modules
                    export module Core;
                    #endif
                
