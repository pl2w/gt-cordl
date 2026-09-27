#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/DeflateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__DeflateFlavor_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateManager)
namespace Pathfinding::Ionic::Zlib {
struct BlockState;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
struct DeflateFlavor;
}
namespace Pathfinding::Ionic::Zlib {
class DeflateManager_CompressFunc;
}
namespace Pathfinding::Ionic::Zlib {
class DeflateManager_Config;
}
namespace Pathfinding::Ionic::Zlib {
struct FlushType;
}
namespace Pathfinding::Ionic::Zlib {
class Tree;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class DeflateManager;
}
namespace Pathfinding::Ionic::Zlib {
class DeflateManager_CompressFunc;
}
namespace Pathfinding::Ionic::Zlib {
class DeflateManager_Config;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::DeflateManager*);
MARK_REF_T(::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*);
MARK_REF_T(::Pathfinding::Ionic::Zlib::DeflateManager_Config*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::DeflateManager*, "Pathfinding.Ionic.Zlib", "DeflateManager");
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*, "Pathfinding.Ionic.Zlib", "DeflateManager/CompressFunc");
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::DeflateManager_Config*, "Pathfinding.Ionic.Zlib", "DeflateManager/Config");
// Dependencies Pathfinding.Ionic.Zlib.CompressionLevel, Pathfinding.Ionic.Zlib.CompressionStrategy, System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.DeflateManager
class CORDL_TYPE DeflateManager : public ::System::Object {
public:
// Declarations
using CompressFunc = ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc;

using Config = ::Pathfinding::Ionic::Zlib::DeflateManager_Config;

/// @brief Field BUSY_STATE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BUSY_STATE, put=setStaticF_BUSY_STATE)) int32_t  BUSY_STATE;

/// @brief Field Buf_size, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Buf_size, put=setStaticF_Buf_size)) int32_t  Buf_size;

/// @brief Field DYN_TREES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DYN_TREES, put=setStaticF_DYN_TREES)) int32_t  DYN_TREES;

/// @brief Field DeflateFunction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeflateFunction, put=__cordl_internal_set_DeflateFunction)) ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*  DeflateFunction;

/// @brief Field END_BLOCK, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_END_BLOCK, put=setStaticF_END_BLOCK)) int32_t  END_BLOCK;

/// @brief Field FINISH_STATE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FINISH_STATE, put=setStaticF_FINISH_STATE)) int32_t  FINISH_STATE;

/// @brief Field HEAP_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HEAP_SIZE, put=setStaticF_HEAP_SIZE)) int32_t  HEAP_SIZE;

/// @brief Field INIT_STATE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_INIT_STATE, put=setStaticF_INIT_STATE)) int32_t  INIT_STATE;

/// @brief Field MAX_MATCH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_MATCH, put=setStaticF_MAX_MATCH)) int32_t  MAX_MATCH;

/// @brief Field MEM_LEVEL_DEFAULT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MEM_LEVEL_DEFAULT, put=setStaticF_MEM_LEVEL_DEFAULT)) int32_t  MEM_LEVEL_DEFAULT;

/// @brief Field MEM_LEVEL_MAX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MEM_LEVEL_MAX, put=setStaticF_MEM_LEVEL_MAX)) int32_t  MEM_LEVEL_MAX;

/// @brief Field MIN_LOOKAHEAD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MIN_LOOKAHEAD, put=setStaticF_MIN_LOOKAHEAD)) int32_t  MIN_LOOKAHEAD;

/// @brief Field MIN_MATCH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MIN_MATCH, put=setStaticF_MIN_MATCH)) int32_t  MIN_MATCH;

/// @brief Field PRESET_DICT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PRESET_DICT, put=setStaticF_PRESET_DICT)) int32_t  PRESET_DICT;

/// @brief Field Rfc1950BytesEmitted, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_Rfc1950BytesEmitted, put=__cordl_internal_set_Rfc1950BytesEmitted)) bool  Rfc1950BytesEmitted;

/// @brief Field STATIC_TREES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_STATIC_TREES, put=setStaticF_STATIC_TREES)) int32_t  STATIC_TREES;

/// @brief Field STORED_BLOCK, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_STORED_BLOCK, put=setStaticF_STORED_BLOCK)) int32_t  STORED_BLOCK;

 __declspec(property(get=get_WantRfc1950HeaderBytes, put=set_WantRfc1950HeaderBytes)) bool  WantRfc1950HeaderBytes;

/// @brief Field Z_ASCII, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Z_ASCII, put=setStaticF_Z_ASCII)) int32_t  Z_ASCII;

/// @brief Field Z_BINARY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Z_BINARY, put=setStaticF_Z_BINARY)) int32_t  Z_BINARY;

/// @brief Field Z_DEFLATED, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Z_DEFLATED, put=setStaticF_Z_DEFLATED)) int32_t  Z_DEFLATED;

/// @brief Field Z_UNKNOWN, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Z_UNKNOWN, put=setStaticF_Z_UNKNOWN)) int32_t  Z_UNKNOWN;

/// @brief Field _ErrorMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ErrorMessage, put=setStaticF__ErrorMessage)) ::ArrayW<::StringW>  _ErrorMessage;

/// @brief Field _WantRfc1950HeaderBytes, offset 0x131, size 0x1 
 __declspec(property(get=__cordl_internal_get__WantRfc1950HeaderBytes, put=__cordl_internal_set__WantRfc1950HeaderBytes)) bool  _WantRfc1950HeaderBytes;

/// @brief Field _codec, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__codec, put=__cordl_internal_set__codec)) ::Pathfinding::Ionic::Zlib::ZlibCodec*  _codec;

/// @brief Field _distanceOffset, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceOffset, put=__cordl_internal_set__distanceOffset)) int32_t  _distanceOffset;

/// @brief Field _lengthOffset, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__lengthOffset, put=__cordl_internal_set__lengthOffset)) int32_t  _lengthOffset;

/// @brief Field bi_buf, offset 0x128, size 0x2 
 __declspec(property(get=__cordl_internal_get_bi_buf, put=__cordl_internal_set_bi_buf)) int16_t  bi_buf;

/// @brief Field bi_valid, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bi_valid, put=__cordl_internal_set_bi_valid)) int32_t  bi_valid;

/// @brief Field bl_count, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bl_count, put=__cordl_internal_set_bl_count)) ::ArrayW<int16_t>  bl_count;

/// @brief Field bl_tree, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bl_tree, put=__cordl_internal_set_bl_tree)) ::ArrayW<int16_t>  bl_tree;

/// @brief Field block_start, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_block_start, put=__cordl_internal_set_block_start)) int32_t  block_start;

/// @brief Field compressionLevel, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressionLevel, put=__cordl_internal_set_compressionLevel)) ::Pathfinding::Ionic::Zlib::CompressionLevel  compressionLevel;

/// @brief Field compressionStrategy, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressionStrategy, put=__cordl_internal_set_compressionStrategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  compressionStrategy;

/// @brief Field config, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::Pathfinding::Ionic::Zlib::DeflateManager_Config*  config;

/// @brief Field data_type, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_data_type, put=__cordl_internal_set_data_type)) int8_t  data_type;

/// @brief Field depth, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) ::ArrayW<int8_t>  depth;

/// @brief Field dyn_dtree, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dyn_dtree, put=__cordl_internal_set_dyn_dtree)) ::ArrayW<int16_t>  dyn_dtree;

/// @brief Field dyn_ltree, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dyn_ltree, put=__cordl_internal_set_dyn_ltree)) ::ArrayW<int16_t>  dyn_ltree;

/// @brief Field hash_bits, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash_bits, put=__cordl_internal_set_hash_bits)) int32_t  hash_bits;

/// @brief Field hash_mask, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash_mask, put=__cordl_internal_set_hash_mask)) int32_t  hash_mask;

/// @brief Field hash_shift, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash_shift, put=__cordl_internal_set_hash_shift)) int32_t  hash_shift;

/// @brief Field hash_size, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_hash_size, put=__cordl_internal_set_hash_size)) int32_t  hash_size;

/// @brief Field head, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::ArrayW<int16_t>  head;

/// @brief Field heap, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_heap, put=__cordl_internal_set_heap)) ::ArrayW<int32_t>  heap;

/// @brief Field heap_len, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_heap_len, put=__cordl_internal_set_heap_len)) int32_t  heap_len;

/// @brief Field heap_max, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_heap_max, put=__cordl_internal_set_heap_max)) int32_t  heap_max;

/// @brief Field ins_h, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_ins_h, put=__cordl_internal_set_ins_h)) int32_t  ins_h;

/// @brief Field last_eob_len, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_last_eob_len, put=__cordl_internal_set_last_eob_len)) int32_t  last_eob_len;

/// @brief Field last_flush, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_last_flush, put=__cordl_internal_set_last_flush)) int32_t  last_flush;

/// @brief Field last_lit, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_last_lit, put=__cordl_internal_set_last_lit)) int32_t  last_lit;

/// @brief Field lit_bufsize, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lit_bufsize, put=__cordl_internal_set_lit_bufsize)) int32_t  lit_bufsize;

/// @brief Field lookahead, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookahead, put=__cordl_internal_set_lookahead)) int32_t  lookahead;

/// @brief Field match_available, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_match_available, put=__cordl_internal_set_match_available)) int32_t  match_available;

/// @brief Field match_length, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_match_length, put=__cordl_internal_set_match_length)) int32_t  match_length;

/// @brief Field match_start, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_match_start, put=__cordl_internal_set_match_start)) int32_t  match_start;

/// @brief Field matches, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_matches, put=__cordl_internal_set_matches)) int32_t  matches;

/// @brief Field nextPending, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPending, put=__cordl_internal_set_nextPending)) int32_t  nextPending;

/// @brief Field opt_len, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_opt_len, put=__cordl_internal_set_opt_len)) int32_t  opt_len;

/// @brief Field pending, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pending, put=__cordl_internal_set_pending)) ::ArrayW<uint8_t>  pending;

/// @brief Field pendingCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingCount, put=__cordl_internal_set_pendingCount)) int32_t  pendingCount;

/// @brief Field prev, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::ArrayW<int16_t>  prev;

/// @brief Field prev_length, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_prev_length, put=__cordl_internal_set_prev_length)) int32_t  prev_length;

/// @brief Field prev_match, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_prev_match, put=__cordl_internal_set_prev_match)) int32_t  prev_match;

/// @brief Field static_len, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_static_len, put=__cordl_internal_set_static_len)) int32_t  static_len;

/// @brief Field status, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) int32_t  status;

/// @brief Field strstart, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_strstart, put=__cordl_internal_set_strstart)) int32_t  strstart;

/// @brief Field treeBitLengths, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeBitLengths, put=__cordl_internal_set_treeBitLengths)) ::Pathfinding::Ionic::Zlib::Tree*  treeBitLengths;

/// @brief Field treeDistances, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeDistances, put=__cordl_internal_set_treeDistances)) ::Pathfinding::Ionic::Zlib::Tree*  treeDistances;

/// @brief Field treeLiterals, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeLiterals, put=__cordl_internal_set_treeLiterals)) ::Pathfinding::Ionic::Zlib::Tree*  treeLiterals;

/// @brief Field w_bits, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_w_bits, put=__cordl_internal_set_w_bits)) int32_t  w_bits;

/// @brief Field w_mask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_w_mask, put=__cordl_internal_set_w_mask)) int32_t  w_mask;

/// @brief Field w_size, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_w_size, put=__cordl_internal_set_w_size)) int32_t  w_size;

/// @brief Field window, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_window, put=__cordl_internal_set_window)) ::ArrayW<uint8_t>  window;

/// @brief Field window_size, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_window_size, put=__cordl_internal_set_window_size)) int32_t  window_size;

/// @brief Method Deflate, addr 0xa6a481c, size 0x7c0, virtual false, abstract: false, final false
inline int32_t Deflate(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

/// @brief Method DeflateFast, addr 0xa6a3438, size 0x474, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::BlockState DeflateFast(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

/// @brief Method DeflateNone, addr 0xa6a2fb4, size 0x17c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::BlockState DeflateNone(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

/// @brief Method DeflateSlow, addr 0xa6a3d6c, size 0x57c, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::BlockState DeflateSlow(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

/// @brief Method Initialize, addr 0xa6a42f8, size 0x98, virtual false, abstract: false, final false
inline int32_t Initialize(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, int32_t  bits, ::Pathfinding::Ionic::Zlib::CompressionStrategy  compressionStrategy) ;

/// @brief Method Initialize, addr 0xa6a4390, size 0x2e8, virtual false, abstract: false, final false
inline int32_t Initialize(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, int32_t  windowBits, int32_t  memLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy) ;

static inline ::Pathfinding::Ionic::Zlib::DeflateManager* New_ctor() ;

/// @brief Method Reset, addr 0xa6a4678, size 0x104, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDeflater, addr 0xa6a1360, size 0xf8, virtual false, abstract: false, final false
inline void SetDeflater() ;

/// @brief Method _InitializeBlocks, addr 0xa6a1554, size 0x1d0, virtual false, abstract: false, final false
inline void _InitializeBlocks() ;

/// @brief Method _InitializeLazyMatch, addr 0xa6a1200, size 0xe4, virtual false, abstract: false, final false
inline void _InitializeLazyMatch() ;

/// @brief Method _InitializeTreeData, addr 0xa6a1458, size 0xfc, virtual false, abstract: false, final false
inline void _InitializeTreeData() ;

/// @brief Method _IsSmaller, addr 0xa6a18cc, size 0x8c, virtual false, abstract: false, final false
static inline bool _IsSmaller(::ArrayW<int16_t>  tree, int32_t  n, int32_t  m, ::ArrayW<int8_t>  depth) ;

constexpr ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc* const& __cordl_internal_get_DeflateFunction() const;

constexpr ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*& __cordl_internal_get_DeflateFunction() ;

constexpr bool const& __cordl_internal_get_Rfc1950BytesEmitted() const;

constexpr bool& __cordl_internal_get_Rfc1950BytesEmitted() ;

constexpr bool const& __cordl_internal_get__WantRfc1950HeaderBytes() const;

constexpr bool& __cordl_internal_get__WantRfc1950HeaderBytes() ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& __cordl_internal_get__codec() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& __cordl_internal_get__codec() ;

constexpr int32_t const& __cordl_internal_get__distanceOffset() const;

constexpr int32_t& __cordl_internal_get__distanceOffset() ;

constexpr int32_t const& __cordl_internal_get__lengthOffset() const;

constexpr int32_t& __cordl_internal_get__lengthOffset() ;

constexpr int16_t const& __cordl_internal_get_bi_buf() const;

constexpr int16_t& __cordl_internal_get_bi_buf() ;

constexpr int32_t const& __cordl_internal_get_bi_valid() const;

constexpr int32_t& __cordl_internal_get_bi_valid() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_bl_count() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_bl_count() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_bl_tree() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_bl_tree() ;

constexpr int32_t const& __cordl_internal_get_block_start() const;

constexpr int32_t& __cordl_internal_get_block_start() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& __cordl_internal_get_compressionLevel() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& __cordl_internal_get_compressionLevel() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get_compressionStrategy() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& __cordl_internal_get_compressionStrategy() ;

constexpr ::Pathfinding::Ionic::Zlib::DeflateManager_Config* const& __cordl_internal_get_config() const;

constexpr ::Pathfinding::Ionic::Zlib::DeflateManager_Config*& __cordl_internal_get_config() ;

constexpr int8_t const& __cordl_internal_get_data_type() const;

constexpr int8_t& __cordl_internal_get_data_type() ;

constexpr ::ArrayW<int8_t> const& __cordl_internal_get_depth() const;

constexpr ::ArrayW<int8_t>& __cordl_internal_get_depth() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_dyn_dtree() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_dyn_dtree() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_dyn_ltree() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_dyn_ltree() ;

constexpr int32_t const& __cordl_internal_get_hash_bits() const;

constexpr int32_t& __cordl_internal_get_hash_bits() ;

constexpr int32_t const& __cordl_internal_get_hash_mask() const;

constexpr int32_t& __cordl_internal_get_hash_mask() ;

constexpr int32_t const& __cordl_internal_get_hash_shift() const;

constexpr int32_t& __cordl_internal_get_hash_shift() ;

constexpr int32_t const& __cordl_internal_get_hash_size() const;

constexpr int32_t& __cordl_internal_get_hash_size() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_head() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_head() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_heap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_heap() ;

constexpr int32_t const& __cordl_internal_get_heap_len() const;

constexpr int32_t& __cordl_internal_get_heap_len() ;

constexpr int32_t const& __cordl_internal_get_heap_max() const;

constexpr int32_t& __cordl_internal_get_heap_max() ;

constexpr int32_t const& __cordl_internal_get_ins_h() const;

constexpr int32_t& __cordl_internal_get_ins_h() ;

constexpr int32_t const& __cordl_internal_get_last_eob_len() const;

constexpr int32_t& __cordl_internal_get_last_eob_len() ;

constexpr int32_t const& __cordl_internal_get_last_flush() const;

constexpr int32_t& __cordl_internal_get_last_flush() ;

constexpr int32_t const& __cordl_internal_get_last_lit() const;

constexpr int32_t& __cordl_internal_get_last_lit() ;

constexpr int32_t const& __cordl_internal_get_lit_bufsize() const;

constexpr int32_t& __cordl_internal_get_lit_bufsize() ;

constexpr int32_t const& __cordl_internal_get_lookahead() const;

constexpr int32_t& __cordl_internal_get_lookahead() ;

constexpr int32_t const& __cordl_internal_get_match_available() const;

constexpr int32_t& __cordl_internal_get_match_available() ;

constexpr int32_t const& __cordl_internal_get_match_length() const;

constexpr int32_t& __cordl_internal_get_match_length() ;

constexpr int32_t const& __cordl_internal_get_match_start() const;

constexpr int32_t& __cordl_internal_get_match_start() ;

constexpr int32_t const& __cordl_internal_get_matches() const;

constexpr int32_t& __cordl_internal_get_matches() ;

constexpr int32_t const& __cordl_internal_get_nextPending() const;

constexpr int32_t& __cordl_internal_get_nextPending() ;

constexpr int32_t const& __cordl_internal_get_opt_len() const;

constexpr int32_t& __cordl_internal_get_opt_len() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_pending() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_pending() ;

constexpr int32_t const& __cordl_internal_get_pendingCount() const;

constexpr int32_t& __cordl_internal_get_pendingCount() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_prev() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_prev() ;

constexpr int32_t const& __cordl_internal_get_prev_length() const;

constexpr int32_t& __cordl_internal_get_prev_length() ;

constexpr int32_t const& __cordl_internal_get_prev_match() const;

constexpr int32_t& __cordl_internal_get_prev_match() ;

constexpr int32_t const& __cordl_internal_get_static_len() const;

constexpr int32_t& __cordl_internal_get_static_len() ;

constexpr int32_t const& __cordl_internal_get_status() const;

constexpr int32_t& __cordl_internal_get_status() ;

constexpr int32_t const& __cordl_internal_get_strstart() const;

constexpr int32_t& __cordl_internal_get_strstart() ;

constexpr ::Pathfinding::Ionic::Zlib::Tree* const& __cordl_internal_get_treeBitLengths() const;

constexpr ::Pathfinding::Ionic::Zlib::Tree*& __cordl_internal_get_treeBitLengths() ;

constexpr ::Pathfinding::Ionic::Zlib::Tree* const& __cordl_internal_get_treeDistances() const;

constexpr ::Pathfinding::Ionic::Zlib::Tree*& __cordl_internal_get_treeDistances() ;

constexpr ::Pathfinding::Ionic::Zlib::Tree* const& __cordl_internal_get_treeLiterals() const;

constexpr ::Pathfinding::Ionic::Zlib::Tree*& __cordl_internal_get_treeLiterals() ;

constexpr int32_t const& __cordl_internal_get_w_bits() const;

constexpr int32_t& __cordl_internal_get_w_bits() ;

constexpr int32_t const& __cordl_internal_get_w_mask() const;

constexpr int32_t& __cordl_internal_get_w_mask() ;

constexpr int32_t const& __cordl_internal_get_w_size() const;

constexpr int32_t& __cordl_internal_get_w_size() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_window() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_window() ;

constexpr int32_t const& __cordl_internal_get_window_size() const;

constexpr int32_t& __cordl_internal_get_window_size() ;

constexpr void __cordl_internal_set_DeflateFunction(::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*  value) ;

constexpr void __cordl_internal_set_Rfc1950BytesEmitted(bool  value) ;

constexpr void __cordl_internal_set__WantRfc1950HeaderBytes(bool  value) ;

constexpr void __cordl_internal_set__codec(::Pathfinding::Ionic::Zlib::ZlibCodec*  value) ;

constexpr void __cordl_internal_set__distanceOffset(int32_t  value) ;

constexpr void __cordl_internal_set__lengthOffset(int32_t  value) ;

constexpr void __cordl_internal_set_bi_buf(int16_t  value) ;

constexpr void __cordl_internal_set_bi_valid(int32_t  value) ;

constexpr void __cordl_internal_set_bl_count(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_bl_tree(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_block_start(int32_t  value) ;

constexpr void __cordl_internal_set_compressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set_compressionStrategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set_config(::Pathfinding::Ionic::Zlib::DeflateManager_Config*  value) ;

constexpr void __cordl_internal_set_data_type(int8_t  value) ;

constexpr void __cordl_internal_set_depth(::ArrayW<int8_t>  value) ;

constexpr void __cordl_internal_set_dyn_dtree(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_dyn_ltree(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_hash_bits(int32_t  value) ;

constexpr void __cordl_internal_set_hash_mask(int32_t  value) ;

constexpr void __cordl_internal_set_hash_shift(int32_t  value) ;

constexpr void __cordl_internal_set_hash_size(int32_t  value) ;

constexpr void __cordl_internal_set_head(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_heap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_heap_len(int32_t  value) ;

constexpr void __cordl_internal_set_heap_max(int32_t  value) ;

constexpr void __cordl_internal_set_ins_h(int32_t  value) ;

constexpr void __cordl_internal_set_last_eob_len(int32_t  value) ;

constexpr void __cordl_internal_set_last_flush(int32_t  value) ;

constexpr void __cordl_internal_set_last_lit(int32_t  value) ;

constexpr void __cordl_internal_set_lit_bufsize(int32_t  value) ;

constexpr void __cordl_internal_set_lookahead(int32_t  value) ;

constexpr void __cordl_internal_set_match_available(int32_t  value) ;

constexpr void __cordl_internal_set_match_length(int32_t  value) ;

constexpr void __cordl_internal_set_match_start(int32_t  value) ;

constexpr void __cordl_internal_set_matches(int32_t  value) ;

constexpr void __cordl_internal_set_nextPending(int32_t  value) ;

constexpr void __cordl_internal_set_opt_len(int32_t  value) ;

constexpr void __cordl_internal_set_pending(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_pendingCount(int32_t  value) ;

constexpr void __cordl_internal_set_prev(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_prev_length(int32_t  value) ;

constexpr void __cordl_internal_set_prev_match(int32_t  value) ;

constexpr void __cordl_internal_set_static_len(int32_t  value) ;

constexpr void __cordl_internal_set_status(int32_t  value) ;

constexpr void __cordl_internal_set_strstart(int32_t  value) ;

constexpr void __cordl_internal_set_treeBitLengths(::Pathfinding::Ionic::Zlib::Tree*  value) ;

constexpr void __cordl_internal_set_treeDistances(::Pathfinding::Ionic::Zlib::Tree*  value) ;

constexpr void __cordl_internal_set_treeLiterals(::Pathfinding::Ionic::Zlib::Tree*  value) ;

constexpr void __cordl_internal_set_w_bits(int32_t  value) ;

constexpr void __cordl_internal_set_w_mask(int32_t  value) ;

constexpr void __cordl_internal_set_w_size(int32_t  value) ;

constexpr void __cordl_internal_set_window(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_window_size(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6a0ca4, size 0x24c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _fillWindow, addr 0xa6a3130, size 0x264, virtual false, abstract: false, final false
inline void _fillWindow() ;

/// @brief Method _tr_align, addr 0xa6a21e8, size 0x14c, virtual false, abstract: false, final false
inline void _tr_align() ;

/// @brief Method _tr_flush_block, addr 0xa6a2d98, size 0x21c, virtual false, abstract: false, final false
inline void _tr_flush_block(int32_t  buf, int32_t  stored_len, bool  eof) ;

/// @brief Method _tr_stored_block, addr 0xa6a3394, size 0xa4, virtual false, abstract: false, final false
inline void _tr_stored_block(int32_t  buf, int32_t  stored_len, bool  eof) ;

/// @brief Method _tr_tally, addr 0xa6a2400, size 0x310, virtual false, abstract: false, final false
inline bool _tr_tally(int32_t  dist, int32_t  lc) ;

/// @brief Method bi_flush, addr 0xa6a2334, size 0xcc, virtual false, abstract: false, final false
inline void bi_flush() ;

/// @brief Method bi_windup, addr 0xa6a2b8c, size 0xb0, virtual false, abstract: false, final false
inline void bi_windup() ;

/// @brief Method build_bl_tree, addr 0xa6a1b84, size 0x160, virtual false, abstract: false, final false
inline int32_t build_bl_tree() ;

/// @brief Method copy_block, addr 0xa6a2c3c, size 0x118, virtual false, abstract: false, final false
inline void copy_block(int32_t  buf, int32_t  len, bool  header) ;

/// @brief Method flush_block_only, addr 0xa6a2d54, size 0x44, virtual false, abstract: false, final false
inline void flush_block_only(bool  eof) ;

static inline int32_t getStaticF_BUSY_STATE() ;

static inline int32_t getStaticF_Buf_size() ;

static inline int32_t getStaticF_DYN_TREES() ;

static inline int32_t getStaticF_END_BLOCK() ;

static inline int32_t getStaticF_FINISH_STATE() ;

static inline int32_t getStaticF_HEAP_SIZE() ;

static inline int32_t getStaticF_INIT_STATE() ;

static inline int32_t getStaticF_MAX_MATCH() ;

static inline int32_t getStaticF_MEM_LEVEL_DEFAULT() ;

static inline int32_t getStaticF_MEM_LEVEL_MAX() ;

static inline int32_t getStaticF_MIN_LOOKAHEAD() ;

static inline int32_t getStaticF_MIN_MATCH() ;

static inline int32_t getStaticF_PRESET_DICT() ;

static inline int32_t getStaticF_STATIC_TREES() ;

static inline int32_t getStaticF_STORED_BLOCK() ;

static inline int32_t getStaticF_Z_ASCII() ;

static inline int32_t getStaticF_Z_BINARY() ;

static inline int32_t getStaticF_Z_DEFLATED() ;

static inline int32_t getStaticF_Z_UNKNOWN() ;

static inline ::ArrayW<::StringW> getStaticF__ErrorMessage() ;

/// @brief Method get_WantRfc1950HeaderBytes, addr 0xa6a42e8, size 0x8, virtual false, abstract: false, final false
inline bool get_WantRfc1950HeaderBytes() ;

/// @brief Method longest_match, addr 0xa6a38ac, size 0x4c0, virtual false, abstract: false, final false
inline int32_t longest_match(int32_t  cur_match) ;

/// @brief Method pqdownheap, addr 0xa6a1724, size 0x1a8, virtual false, abstract: false, final false
inline void pqdownheap(::ArrayW<int16_t>  tree, int32_t  k) ;

/// @brief Method put_bytes, addr 0xa6a21a0, size 0x48, virtual false, abstract: false, final false
inline void put_bytes(::ArrayW<uint8_t>  p, int32_t  start, int32_t  len) ;

/// @brief Method scan_tree, addr 0xa6a1958, size 0x22c, virtual false, abstract: false, final false
inline void scan_tree(::ArrayW<int16_t>  tree, int32_t  max_code) ;

/// @brief Method send_all_trees, addr 0xa6a1ce4, size 0x13c, virtual false, abstract: false, final false
inline void send_all_trees(int32_t  lcodes, int32_t  dcodes, int32_t  blcodes) ;

/// @brief Method send_bits, addr 0xa6a1e20, size 0x12c, virtual false, abstract: false, final false
inline void send_bits(int32_t  value, int32_t  length) ;

/// @brief Method send_code, addr 0xa6a215c, size 0x44, virtual false, abstract: false, final false
inline void send_code(int32_t  c, ::ArrayW<int16_t>  tree) ;

/// @brief Method send_compressed_block, addr 0xa6a2710, size 0x2fc, virtual false, abstract: false, final false
inline void send_compressed_block(::ArrayW<int16_t>  ltree, ::ArrayW<int16_t>  dtree) ;

/// @brief Method send_tree, addr 0xa6a1f4c, size 0x210, virtual false, abstract: false, final false
inline void send_tree(::ArrayW<int16_t>  tree, int32_t  max_code) ;

static inline void setStaticF_BUSY_STATE(int32_t  value) ;

static inline void setStaticF_Buf_size(int32_t  value) ;

static inline void setStaticF_DYN_TREES(int32_t  value) ;

static inline void setStaticF_END_BLOCK(int32_t  value) ;

static inline void setStaticF_FINISH_STATE(int32_t  value) ;

static inline void setStaticF_HEAP_SIZE(int32_t  value) ;

static inline void setStaticF_INIT_STATE(int32_t  value) ;

static inline void setStaticF_MAX_MATCH(int32_t  value) ;

static inline void setStaticF_MEM_LEVEL_DEFAULT(int32_t  value) ;

static inline void setStaticF_MEM_LEVEL_MAX(int32_t  value) ;

static inline void setStaticF_MIN_LOOKAHEAD(int32_t  value) ;

static inline void setStaticF_MIN_MATCH(int32_t  value) ;

static inline void setStaticF_PRESET_DICT(int32_t  value) ;

static inline void setStaticF_STATIC_TREES(int32_t  value) ;

static inline void setStaticF_STORED_BLOCK(int32_t  value) ;

static inline void setStaticF_Z_ASCII(int32_t  value) ;

static inline void setStaticF_Z_BINARY(int32_t  value) ;

static inline void setStaticF_Z_DEFLATED(int32_t  value) ;

static inline void setStaticF_Z_UNKNOWN(int32_t  value) ;

static inline void setStaticF__ErrorMessage(::ArrayW<::StringW>  value) ;

/// @brief Method set_WantRfc1950HeaderBytes, addr 0xa6a42f0, size 0x8, virtual false, abstract: false, final false
inline void set_WantRfc1950HeaderBytes(bool  value) ;

/// @brief Method set_data_type, addr 0xa6a2a0c, size 0x180, virtual false, abstract: false, final false
inline void set_data_type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateManager(DeflateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateManager(DeflateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28180};

/// @brief Field DeflateFunction, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc*  ___DeflateFunction;

/// @brief Field _codec, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibCodec*  ____codec;

/// @brief Field status, offset: 0x20, size: 0x4, def value: None
 int32_t  ___status;

/// @brief Field pending, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___pending;

/// @brief Field nextPending, offset: 0x30, size: 0x4, def value: None
 int32_t  ___nextPending;

/// @brief Field pendingCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___pendingCount;

/// @brief Field data_type, offset: 0x38, size: 0x1, def value: None
 int8_t  ___data_type;

/// @brief Field last_flush, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___last_flush;

/// @brief Field w_size, offset: 0x40, size: 0x4, def value: None
 int32_t  ___w_size;

/// @brief Field w_bits, offset: 0x44, size: 0x4, def value: None
 int32_t  ___w_bits;

/// @brief Field w_mask, offset: 0x48, size: 0x4, def value: None
 int32_t  ___w_mask;

/// @brief Field window, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___window;

/// @brief Field window_size, offset: 0x58, size: 0x4, def value: None
 int32_t  ___window_size;

/// @brief Field prev, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___prev;

/// @brief Field head, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___head;

/// @brief Field ins_h, offset: 0x70, size: 0x4, def value: None
 int32_t  ___ins_h;

/// @brief Field hash_size, offset: 0x74, size: 0x4, def value: None
 int32_t  ___hash_size;

/// @brief Field hash_bits, offset: 0x78, size: 0x4, def value: None
 int32_t  ___hash_bits;

/// @brief Field hash_mask, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___hash_mask;

/// @brief Field hash_shift, offset: 0x80, size: 0x4, def value: None
 int32_t  ___hash_shift;

/// @brief Field block_start, offset: 0x84, size: 0x4, def value: None
 int32_t  ___block_start;

/// @brief Field config, offset: 0x88, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::DeflateManager_Config*  ___config;

/// @brief Field match_length, offset: 0x90, size: 0x4, def value: None
 int32_t  ___match_length;

/// @brief Field prev_match, offset: 0x94, size: 0x4, def value: None
 int32_t  ___prev_match;

/// @brief Field match_available, offset: 0x98, size: 0x4, def value: None
 int32_t  ___match_available;

/// @brief Field strstart, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___strstart;

/// @brief Field match_start, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___match_start;

/// @brief Field lookahead, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___lookahead;

/// @brief Field prev_length, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___prev_length;

/// @brief Field compressionLevel, offset: 0xac, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionLevel  ___compressionLevel;

/// @brief Field compressionStrategy, offset: 0xb0, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionStrategy  ___compressionStrategy;

/// @brief Field dyn_ltree, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___dyn_ltree;

/// @brief Field dyn_dtree, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___dyn_dtree;

/// @brief Field bl_tree, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___bl_tree;

/// @brief Field treeLiterals, offset: 0xd0, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::Tree*  ___treeLiterals;

/// @brief Field treeDistances, offset: 0xd8, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::Tree*  ___treeDistances;

/// @brief Field treeBitLengths, offset: 0xe0, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::Tree*  ___treeBitLengths;

/// @brief Field bl_count, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___bl_count;

/// @brief Field heap, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___heap;

/// @brief Field heap_len, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___heap_len;

/// @brief Field heap_max, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___heap_max;

/// @brief Field depth, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<int8_t>  ___depth;

/// @brief Field _lengthOffset, offset: 0x108, size: 0x4, def value: None
 int32_t  ____lengthOffset;

/// @brief Field lit_bufsize, offset: 0x10c, size: 0x4, def value: None
 int32_t  ___lit_bufsize;

/// @brief Field last_lit, offset: 0x110, size: 0x4, def value: None
 int32_t  ___last_lit;

/// @brief Field _distanceOffset, offset: 0x114, size: 0x4, def value: None
 int32_t  ____distanceOffset;

/// @brief Field opt_len, offset: 0x118, size: 0x4, def value: None
 int32_t  ___opt_len;

/// @brief Field static_len, offset: 0x11c, size: 0x4, def value: None
 int32_t  ___static_len;

/// @brief Field matches, offset: 0x120, size: 0x4, def value: None
 int32_t  ___matches;

/// @brief Field last_eob_len, offset: 0x124, size: 0x4, def value: None
 int32_t  ___last_eob_len;

/// @brief Field bi_buf, offset: 0x128, size: 0x2, def value: None
 int16_t  ___bi_buf;

/// @brief Field bi_valid, offset: 0x12c, size: 0x4, def value: None
 int32_t  ___bi_valid;

/// @brief Field Rfc1950BytesEmitted, offset: 0x130, size: 0x1, def value: None
 bool  ___Rfc1950BytesEmitted;

/// @brief Field _WantRfc1950HeaderBytes, offset: 0x131, size: 0x1, def value: None
 bool  ____WantRfc1950HeaderBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___DeflateFunction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ____codec) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___status) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___pending) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___nextPending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___pendingCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___data_type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___last_flush) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___w_size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___w_bits) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___w_mask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___window) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___window_size) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___prev) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___head) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___ins_h) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___hash_size) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___hash_bits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___hash_mask) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___hash_shift) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___block_start) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___config) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___match_length) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___prev_match) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___match_available) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___strstart) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___match_start) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___lookahead) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___prev_length) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___compressionLevel) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___compressionStrategy) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___dyn_ltree) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___dyn_dtree) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___bl_tree) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___treeLiterals) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___treeDistances) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___treeBitLengths) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___bl_count) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___heap) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___heap_len) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___heap_max) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___depth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ____lengthOffset) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___lit_bufsize) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___last_lit) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ____distanceOffset) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___opt_len) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___static_len) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___matches) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___last_eob_len) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___bi_buf) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___bi_valid) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ___Rfc1950BytesEmitted) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager, ____WantRfc1950HeaderBytes) == 0x131, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::DeflateManager) == 0x138, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
// Dependencies Pathfinding.Ionic.Zlib.DeflateFlavor, System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.DeflateManager/Config
class CORDL_TYPE DeflateManager_Config : public ::System::Object {
public:
// Declarations
/// @brief Field Flavor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flavor, put=__cordl_internal_set_Flavor)) ::Pathfinding::Ionic::Zlib::DeflateFlavor  Flavor;

/// @brief Field GoodLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_GoodLength, put=__cordl_internal_set_GoodLength)) int32_t  GoodLength;

/// @brief Field MaxChainLength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxChainLength, put=__cordl_internal_set_MaxChainLength)) int32_t  MaxChainLength;

/// @brief Field MaxLazy, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxLazy, put=__cordl_internal_set_MaxLazy)) int32_t  MaxLazy;

/// @brief Field NiceLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NiceLength, put=__cordl_internal_set_NiceLength)) int32_t  NiceLength;

/// @brief Field Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Table, put=setStaticF_Table)) ::ArrayW<::Pathfinding::Ionic::Zlib::DeflateManager_Config*>  Table;

/// @brief Method Lookup, addr 0xa6a12e4, size 0x7c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zlib::DeflateManager_Config* Lookup(::Pathfinding::Ionic::Zlib::CompressionLevel  level) ;

static inline ::Pathfinding::Ionic::Zlib::DeflateManager_Config* New_ctor(int32_t  goodLength, int32_t  maxLazy, int32_t  niceLength, int32_t  maxChainLength, ::Pathfinding::Ionic::Zlib::DeflateFlavor  flavor) ;

constexpr ::Pathfinding::Ionic::Zlib::DeflateFlavor const& __cordl_internal_get_Flavor() const;

constexpr ::Pathfinding::Ionic::Zlib::DeflateFlavor& __cordl_internal_get_Flavor() ;

constexpr int32_t const& __cordl_internal_get_GoodLength() const;

constexpr int32_t& __cordl_internal_get_GoodLength() ;

constexpr int32_t const& __cordl_internal_get_MaxChainLength() const;

constexpr int32_t& __cordl_internal_get_MaxChainLength() ;

constexpr int32_t const& __cordl_internal_get_MaxLazy() const;

constexpr int32_t& __cordl_internal_get_MaxLazy() ;

constexpr int32_t const& __cordl_internal_get_NiceLength() const;

constexpr int32_t& __cordl_internal_get_NiceLength() ;

constexpr void __cordl_internal_set_Flavor(::Pathfinding::Ionic::Zlib::DeflateFlavor  value) ;

constexpr void __cordl_internal_set_GoodLength(int32_t  value) ;

constexpr void __cordl_internal_set_MaxChainLength(int32_t  value) ;

constexpr void __cordl_internal_set_MaxLazy(int32_t  value) ;

constexpr void __cordl_internal_set_NiceLength(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6a4ff0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  goodLength, int32_t  maxLazy, int32_t  niceLength, int32_t  maxChainLength, ::Pathfinding::Ionic::Zlib::DeflateFlavor  flavor) ;

static inline ::ArrayW<::Pathfinding::Ionic::Zlib::DeflateManager_Config*> getStaticF_Table() ;

static inline void setStaticF_Table(::ArrayW<::Pathfinding::Ionic::Zlib::DeflateManager_Config*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateManager_Config() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager_Config", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateManager_Config(DeflateManager_Config && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager_Config", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateManager_Config(DeflateManager_Config const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28179};

/// @brief Field GoodLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ___GoodLength;

/// @brief Field MaxLazy, offset: 0x14, size: 0x4, def value: None
 int32_t  ___MaxLazy;

/// @brief Field NiceLength, offset: 0x18, size: 0x4, def value: None
 int32_t  ___NiceLength;

/// @brief Field MaxChainLength, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___MaxChainLength;

/// @brief Field Flavor, offset: 0x20, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::DeflateFlavor  ___Flavor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager_Config, ___GoodLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager_Config, ___MaxLazy) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager_Config, ___NiceLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager_Config, ___MaxChainLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::DeflateManager_Config, ___Flavor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::DeflateManager_Config) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
// Dependencies System.MulticastDelegate
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
class CORDL_TYPE DeflateManager_CompressFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa6a4fdc, size 0x14, virtual true, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::BlockState Invoke(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

static inline ::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6a477c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateManager_CompressFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager_CompressFunc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateManager_CompressFunc(DeflateManager_CompressFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateManager_CompressFunc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateManager_CompressFunc(DeflateManager_CompressFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zlib::DeflateManager_CompressFunc) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
