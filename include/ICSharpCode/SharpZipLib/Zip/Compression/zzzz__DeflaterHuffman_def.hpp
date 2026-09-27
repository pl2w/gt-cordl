#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterHuffman.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflaterHuffman)
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterHuffman_Tree;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterPending;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterHuffman;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterHuffman_Tree;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*, "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterHuffman");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*, "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterHuffman/Tree");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
class CORDL_TYPE DeflaterHuffman : public ::System::Object {
public:
// Declarations
using Tree = ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree;

/// @brief Field BL_ORDER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BL_ORDER, put=setStaticF_BL_ORDER)) ::ArrayW<int32_t>  BL_ORDER;

/// @brief Field bit4Reverse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bit4Reverse, put=setStaticF_bit4Reverse)) ::ArrayW<uint8_t>  bit4Reverse;

/// @brief Field blTree, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blTree, put=__cordl_internal_set_blTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  blTree;

/// @brief Field d_buf, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_d_buf, put=__cordl_internal_set_d_buf)) ::ArrayW<int16_t>  d_buf;

/// @brief Field distTree, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_distTree, put=__cordl_internal_set_distTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  distTree;

/// @brief Field extra_bits, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_extra_bits, put=__cordl_internal_set_extra_bits)) int32_t  extra_bits;

/// @brief Field l_buf, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_l_buf, put=__cordl_internal_set_l_buf)) ::ArrayW<uint8_t>  l_buf;

/// @brief Field last_lit, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_last_lit, put=__cordl_internal_set_last_lit)) int32_t  last_lit;

/// @brief Field literalTree, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_literalTree, put=__cordl_internal_set_literalTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  literalTree;

/// @brief Field pending, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pending, put=__cordl_internal_set_pending)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending;

/// @brief Field staticDCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticDCodes, put=setStaticF_staticDCodes)) ::ArrayW<int16_t>  staticDCodes;

/// @brief Field staticDLength, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticDLength, put=setStaticF_staticDLength)) ::ArrayW<uint8_t>  staticDLength;

/// @brief Field staticLCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticLCodes, put=setStaticF_staticLCodes)) ::ArrayW<int16_t>  staticLCodes;

/// @brief Field staticLLength, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticLLength, put=setStaticF_staticLLength)) ::ArrayW<uint8_t>  staticLLength;

/// @brief Method BitReverse, addr 0x9fd4bfc, size 0xc8, virtual false, abstract: false, final false
static inline int16_t BitReverse(int32_t  toReverse) ;

/// @brief Method CompressBlock, addr 0x9fd5348, size 0x1ec, virtual false, abstract: false, final false
inline void CompressBlock() ;

/// @brief Method Dcode, addr 0x9fd55d0, size 0x34, virtual false, abstract: false, final false
static inline int32_t Dcode(int32_t  distance) ;

/// @brief Method FlushBlock, addr 0x9fd37f4, size 0x388, virtual false, abstract: false, final false
inline void FlushBlock(::ArrayW<uint8_t>  stored, int32_t  storedOffset, int32_t  storedLength, bool  lastBlock) ;

/// @brief Method FlushStoredBlock, addr 0x9fd3750, size 0xa4, virtual false, abstract: false, final false
inline void FlushStoredBlock(::ArrayW<uint8_t>  stored, int32_t  storedOffset, int32_t  storedLength, bool  lastBlock) ;

/// @brief Method IsFull, addr 0x9fd4810, size 0x10, virtual false, abstract: false, final false
inline bool IsFull() ;

/// @brief Method Lcode, addr 0x9fd5534, size 0x3c, virtual false, abstract: false, final false
static inline int32_t Lcode(int32_t  length) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending) ;

/// @brief Method Reset, addr 0x9fd3700, size 0x38, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SendAllTrees, addr 0x9fd4e00, size 0x178, virtual false, abstract: false, final false
inline void SendAllTrees(int32_t  blTreeCodes) ;

/// @brief Method TallyDist, addr 0x9fd4648, size 0x1c8, virtual false, abstract: false, final false
inline bool TallyDist(int32_t  distance, int32_t  length) ;

/// @brief Method TallyLit, addr 0x9fd3b7c, size 0x90, virtual false, abstract: false, final false
inline bool TallyLit(int32_t  literal) ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* const& __cordl_internal_get_blTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*& __cordl_internal_get_blTree() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_d_buf() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_d_buf() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* const& __cordl_internal_get_distTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*& __cordl_internal_get_distTree() ;

constexpr int32_t const& __cordl_internal_get_extra_bits() const;

constexpr int32_t& __cordl_internal_get_extra_bits() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_l_buf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_l_buf() ;

constexpr int32_t const& __cordl_internal_get_last_lit() const;

constexpr int32_t& __cordl_internal_get_last_lit() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* const& __cordl_internal_get_literalTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*& __cordl_internal_get_literalTree() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* const& __cordl_internal_get_pending() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*& __cordl_internal_get_pending() ;

constexpr void __cordl_internal_set_blTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  value) ;

constexpr void __cordl_internal_set_d_buf(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_distTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  value) ;

constexpr void __cordl_internal_set_extra_bits(int32_t  value) ;

constexpr void __cordl_internal_set_l_buf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_last_lit(int32_t  value) ;

constexpr void __cordl_internal_set_literalTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  value) ;

constexpr void __cordl_internal_set_pending(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  value) ;

/// @brief Method .ctor, addr 0x9fd2d74, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending) ;

static inline ::ArrayW<int32_t> getStaticF_BL_ORDER() ;

static inline ::ArrayW<uint8_t> getStaticF_bit4Reverse() ;

static inline ::ArrayW<int16_t> getStaticF_staticDCodes() ;

static inline ::ArrayW<uint8_t> getStaticF_staticDLength() ;

static inline ::ArrayW<int16_t> getStaticF_staticLCodes() ;

static inline ::ArrayW<uint8_t> getStaticF_staticLLength() ;

static inline void setStaticF_BL_ORDER(::ArrayW<int32_t>  value) ;

static inline void setStaticF_bit4Reverse(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_staticDCodes(::ArrayW<int16_t>  value) ;

static inline void setStaticF_staticDLength(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_staticLCodes(::ArrayW<int16_t>  value) ;

static inline void setStaticF_staticLLength(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterHuffman() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterHuffman", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterHuffman(DeflaterHuffman && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterHuffman", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterHuffman(DeflaterHuffman const& ) = delete;

/// @brief Field BITLEN_NUM offset 0xffffffff size 0x4
static constexpr int32_t  BITLEN_NUM{static_cast<int32_t>(0x13)};

/// @brief Field BUFSIZE offset 0xffffffff size 0x4
static constexpr int32_t  BUFSIZE{static_cast<int32_t>(0x4000)};

/// @brief Field DIST_NUM offset 0xffffffff size 0x4
static constexpr int32_t  DIST_NUM{static_cast<int32_t>(0x1e)};

/// @brief Field EOF_SYMBOL offset 0xffffffff size 0x4
static constexpr int32_t  EOF_SYMBOL{static_cast<int32_t>(0x100)};

/// @brief Field LITERAL_NUM offset 0xffffffff size 0x4
static constexpr int32_t  LITERAL_NUM{static_cast<int32_t>(0x11e)};

/// @brief Field REP_11_138 offset 0xffffffff size 0x4
static constexpr int32_t  REP_11_138{static_cast<int32_t>(0x12)};

/// @brief Field REP_3_10 offset 0xffffffff size 0x4
static constexpr int32_t  REP_3_10{static_cast<int32_t>(0x11)};

/// @brief Field REP_3_6 offset 0xffffffff size 0x4
static constexpr int32_t  REP_3_6{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17376};

/// @brief Field pending, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  ___pending;

/// @brief Field literalTree, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  ___literalTree;

/// @brief Field distTree, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  ___distTree;

/// @brief Field blTree, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  ___blTree;

/// @brief Field d_buf, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___d_buf;

/// @brief Field l_buf, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___l_buf;

/// @brief Field last_lit, offset: 0x40, size: 0x4, def value: None
 int32_t  ___last_lit;

/// @brief Field extra_bits, offset: 0x44, size: 0x4, def value: None
 int32_t  ___extra_bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___pending) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___literalTree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___distTree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___blTree) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___d_buf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___l_buf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___last_lit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman, ___extra_bits) == 0x44, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman) == 0x48, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
class CORDL_TYPE DeflaterHuffman_Tree : public ::System::Object {
public:
// Declarations
/// @brief Field bl_counts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bl_counts, put=__cordl_internal_set_bl_counts)) ::ArrayW<int32_t>  bl_counts;

/// @brief Field codes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_codes, put=__cordl_internal_set_codes)) ::ArrayW<int16_t>  codes;

/// @brief Field dh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dh, put=__cordl_internal_set_dh)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  dh;

/// @brief Field freqs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_freqs, put=__cordl_internal_set_freqs)) ::ArrayW<int16_t>  freqs;

/// @brief Field length, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) ::ArrayW<uint8_t>  length;

/// @brief Field maxLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLength, put=__cordl_internal_set_maxLength)) int32_t  maxLength;

/// @brief Field minNumCodes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minNumCodes, put=__cordl_internal_set_minNumCodes)) int32_t  minNumCodes;

/// @brief Field numCodes, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_numCodes, put=__cordl_internal_set_numCodes)) int32_t  numCodes;

/// @brief Method BuildCodes, addr 0x9fd4f78, size 0x1f8, virtual false, abstract: false, final false
inline void BuildCodes() ;

/// @brief Method BuildLength, addr 0x9fd604c, size 0x3a0, virtual false, abstract: false, final false
inline void BuildLength(::ArrayW<int32_t>  childs) ;

/// @brief Method BuildTree, addr 0x9fd56b4, size 0x698, virtual false, abstract: false, final false
inline void BuildTree() ;

/// @brief Method CalcBLFreq, addr 0x9fd5d4c, size 0x1ac, virtual false, abstract: false, final false
inline void CalcBLFreq(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  blTree) ;

/// @brief Method CheckEmpty, addr 0x9fd5fa8, size 0xa4, virtual false, abstract: false, final false
inline void CheckEmpty() ;

/// @brief Method GetEncodedLength, addr 0x9fd5ef8, size 0x80, virtual false, abstract: false, final false
inline int32_t GetEncodedLength() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  dh, int32_t  elems, int32_t  minCodes, int32_t  maxLength) ;

/// @brief Method Reset, addr 0x9fd4d98, size 0x68, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetStaticCodes, addr 0x9fd5f78, size 0x30, virtual false, abstract: false, final false
inline void SetStaticCodes(::ArrayW<int16_t>  staticCodes, ::ArrayW<uint8_t>  staticLengths) ;

/// @brief Method WriteSymbol, addr 0x9fd5570, size 0x60, virtual false, abstract: false, final false
inline void WriteSymbol(int32_t  code) ;

/// @brief Method WriteTree, addr 0x9fd5170, size 0x1d8, virtual false, abstract: false, final false
inline void WriteTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*  blTree) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_bl_counts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_bl_counts() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_codes() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_codes() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* const& __cordl_internal_get_dh() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*& __cordl_internal_get_dh() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_freqs() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_freqs() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_length() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_length() ;

constexpr int32_t const& __cordl_internal_get_maxLength() const;

constexpr int32_t& __cordl_internal_get_maxLength() ;

constexpr int32_t const& __cordl_internal_get_minNumCodes() const;

constexpr int32_t& __cordl_internal_get_minNumCodes() ;

constexpr int32_t const& __cordl_internal_get_numCodes() const;

constexpr int32_t& __cordl_internal_get_numCodes() ;

constexpr void __cordl_internal_set_bl_counts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_codes(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_dh(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  value) ;

constexpr void __cordl_internal_set_freqs(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_length(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_maxLength(int32_t  value) ;

constexpr void __cordl_internal_set_minNumCodes(int32_t  value) ;

constexpr void __cordl_internal_set_numCodes(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fd4cc4, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  dh, int32_t  elems, int32_t  minCodes, int32_t  maxLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterHuffman_Tree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterHuffman_Tree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterHuffman_Tree(DeflaterHuffman_Tree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterHuffman_Tree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterHuffman_Tree(DeflaterHuffman_Tree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17375};

/// @brief Field freqs, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___freqs;

/// @brief Field length, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___length;

/// @brief Field minNumCodes, offset: 0x20, size: 0x4, def value: None
 int32_t  ___minNumCodes;

/// @brief Field numCodes, offset: 0x24, size: 0x4, def value: None
 int32_t  ___numCodes;

/// @brief Field codes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___codes;

/// @brief Field bl_counts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___bl_counts;

/// @brief Field maxLength, offset: 0x38, size: 0x4, def value: None
 int32_t  ___maxLength;

/// @brief Field dh, offset: 0x40, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  ___dh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___freqs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___minNumCodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___numCodes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___codes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___bl_counts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___maxLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree, ___dh) == 0x40, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree) == 0x48, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
