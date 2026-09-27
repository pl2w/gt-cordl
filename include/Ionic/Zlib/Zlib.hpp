#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Ionic/Zlib/Adler.hpp"
#include "Ionic/Zlib/BlockState.hpp"
#include "Ionic/Zlib/CompressionLevel.hpp"
#include "Ionic/Zlib/CompressionMode.hpp"
#include "Ionic/Zlib/CompressionStrategy.hpp"
#include "Ionic/Zlib/DeflateFlavor.hpp"
#include "Ionic/Zlib/DeflateManager.hpp"
#include "Ionic/Zlib/DeflateStream.hpp"
#include "Ionic/Zlib/FlushType.hpp"
#include "Ionic/Zlib/GZipStream.hpp"
#include "Ionic/Zlib/InfTree.hpp"
#include "Ionic/Zlib/InflateBlocks.hpp"
#include "Ionic/Zlib/InflateBlocks_InflateBlockMode.hpp"
#include "Ionic/Zlib/InflateCodes.hpp"
#include "Ionic/Zlib/InflateManager.hpp"
#include "Ionic/Zlib/InflateManager_InflateManagerMode.hpp"
#include "Ionic/Zlib/InternalConstants.hpp"
#include "Ionic/Zlib/InternalInflateConstants.hpp"
#include "Ionic/Zlib/ParallelDeflateOutputStream.hpp"
#include "Ionic/Zlib/ParallelDeflateOutputStream_TraceBits.hpp"
#include "Ionic/Zlib/SharedUtils.hpp"
#include "Ionic/Zlib/StaticTree.hpp"
#include "Ionic/Zlib/WorkItem.hpp"
#include "Ionic/Zlib/ZTree.hpp"
#include "Ionic/Zlib/ZlibBaseStream.hpp"
#include "Ionic/Zlib/ZlibBaseStream_StreamMode.hpp"
#include "Ionic/Zlib/ZlibCodec.hpp"
#include "Ionic/Zlib/ZlibConstants.hpp"
#include "Ionic/Zlib/ZlibException.hpp"
#include "Ionic/Zlib/ZlibStream.hpp"
#include "Ionic/Zlib/ZlibStreamFlavor.hpp"
#ifdef __cpp_modules
                    export module Zlib;
                    #endif
                
