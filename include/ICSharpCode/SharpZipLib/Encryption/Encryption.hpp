#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "ICSharpCode/SharpZipLib/Encryption/PkzipClassic.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicCryptoBase.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicDecryptCryptoTransform.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicEncryptCryptoTransform.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicManaged.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/ZipAESStream.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/ZipAESTransform.hpp"
#ifdef __cpp_modules
                    export module Encryption;
                    #endif
                
