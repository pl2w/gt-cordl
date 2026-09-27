#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "ICSharpCode/SharpZipLib/Zip/Compression/DeflateStrategy.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterConstants.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterEngine.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterHuffman.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterPending.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater_CompressionLevel.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Inflater.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterDynHeader.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterHuffmanTree.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/PendingBuffer.hpp"
#ifdef __cpp_modules
                    export module Compression;
                    #endif
                
