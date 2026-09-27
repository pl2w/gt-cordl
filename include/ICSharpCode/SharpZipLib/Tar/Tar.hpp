#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "ICSharpCode/SharpZipLib/Tar/InvalidHeaderException.hpp"
#include "ICSharpCode/SharpZipLib/Tar/ProgressMessageHandler.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarArchive.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarBuffer.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarEntry.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarException.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarExtendedHeaderReader.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarHeader.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarInputStream.hpp"
#include "ICSharpCode/SharpZipLib/Tar/TarOutputStream.hpp"
#ifdef __cpp_modules
                    export module Tar;
                    #endif
                
