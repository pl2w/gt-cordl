#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Pathfinding/Ionic/Zlib/Adler.hpp"
#include "Pathfinding/Ionic/Zlib/BlockState.hpp"
#include "Pathfinding/Ionic/Zlib/CompressionLevel.hpp"
#include "Pathfinding/Ionic/Zlib/CompressionMode.hpp"
#include "Pathfinding/Ionic/Zlib/CompressionStrategy.hpp"
#include "Pathfinding/Ionic/Zlib/DeflateFlavor.hpp"
#include "Pathfinding/Ionic/Zlib/DeflateManager.hpp"
#include "Pathfinding/Ionic/Zlib/DeflateStream.hpp"
#include "Pathfinding/Ionic/Zlib/FlushType.hpp"
#include "Pathfinding/Ionic/Zlib/GZipStream.hpp"
#include "Pathfinding/Ionic/Zlib/InfTree.hpp"
#include "Pathfinding/Ionic/Zlib/InflateBlocks.hpp"
#include "Pathfinding/Ionic/Zlib/InflateBlocks_InflateBlockMode.hpp"
#include "Pathfinding/Ionic/Zlib/InflateCodes.hpp"
#include "Pathfinding/Ionic/Zlib/InflateManager.hpp"
#include "Pathfinding/Ionic/Zlib/InflateManager_InflateManagerMode.hpp"
#include "Pathfinding/Ionic/Zlib/InternalConstants.hpp"
#include "Pathfinding/Ionic/Zlib/InternalInflateConstants.hpp"
#include "Pathfinding/Ionic/Zlib/ParallelDeflateOutputStream.hpp"
#include "Pathfinding/Ionic/Zlib/ParallelDeflateOutputStream_TraceBits.hpp"
#include "Pathfinding/Ionic/Zlib/SharedUtils.hpp"
#include "Pathfinding/Ionic/Zlib/StaticTree.hpp"
#include "Pathfinding/Ionic/Zlib/Tree.hpp"
#include "Pathfinding/Ionic/Zlib/WorkItem.hpp"
#include "Pathfinding/Ionic/Zlib/ZlibBaseStream.hpp"
#include "Pathfinding/Ionic/Zlib/ZlibBaseStream_StreamMode.hpp"
#include "Pathfinding/Ionic/Zlib/ZlibCodec.hpp"
#include "Pathfinding/Ionic/Zlib/ZlibException.hpp"
#include "Pathfinding/Ionic/Zlib/ZlibStreamFlavor.hpp"
#ifdef __cpp_modules
                    export module Zlib;
                    #endif
                
