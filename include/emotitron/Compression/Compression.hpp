#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "emotitron/Compression/ArrayPackBitsExt.hpp"
#include "emotitron/Compression/ArrayPackBytesExt.hpp"
#include "emotitron/Compression/ArraySegmentExt.hpp"
#include "emotitron/Compression/ArraySerializeExt.hpp"
#include "emotitron/Compression/ArraySerializeUnsafe.hpp"
#include "emotitron/Compression/BitCounter.hpp"
#include "emotitron/Compression/LiteCrusher.hpp"
#include "emotitron/Compression/LiteCrusher_1.hpp"
#include "emotitron/Compression/LiteFloatCompressType.hpp"
#include "emotitron/Compression/LiteFloatCrusher.hpp"
#include "emotitron/Compression/LiteIntCompressType.hpp"
#include "emotitron/Compression/LiteIntCrusher.hpp"
#include "emotitron/Compression/PackedBitsSize.hpp"
#include "emotitron/Compression/PackedBytesSize.hpp"
#include "emotitron/Compression/PrimitivePackBitsExt.hpp"
#include "emotitron/Compression/PrimitivePackBytesExt.hpp"
#include "emotitron/Compression/PrimitiveSerializeExt.hpp"
#include "emotitron/Compression/ZigZagExt.hpp"
#ifdef __cpp_modules
                    export module Compression;
                    #endif
                
