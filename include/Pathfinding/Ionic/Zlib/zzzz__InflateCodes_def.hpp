#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateCodes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflateCodes)
namespace Pathfinding::Ionic::Zlib {
class InflateBlocks;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class InflateCodes;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::InflateCodes*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::InflateCodes*, "Pathfinding.Ionic.Zlib", "InflateCodes");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.InflateCodes
class CORDL_TYPE InflateCodes : public ::System::Object {
public:
// Declarations
/// @brief Field bitsToGet, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitsToGet, put=__cordl_internal_set_bitsToGet)) int32_t  bitsToGet;

/// @brief Field dbits, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_dbits, put=__cordl_internal_set_dbits)) uint8_t  dbits;

/// @brief Field dist, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_dist, put=__cordl_internal_set_dist)) int32_t  dist;

/// @brief Field dtree, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtree, put=__cordl_internal_set_dtree)) ::ArrayW<int32_t>  dtree;

/// @brief Field dtree_index, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtree_index, put=__cordl_internal_set_dtree_index)) int32_t  dtree_index;

/// @brief Field lbits, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_lbits, put=__cordl_internal_set_lbits)) uint8_t  lbits;

/// @brief Field len, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

/// @brief Field lit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lit, put=__cordl_internal_set_lit)) int32_t  lit;

/// @brief Field ltree, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ltree, put=__cordl_internal_set_ltree)) ::ArrayW<int32_t>  ltree;

/// @brief Field ltree_index, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ltree_index, put=__cordl_internal_set_ltree_index)) int32_t  ltree_index;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) int32_t  mode;

/// @brief Field need, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_need, put=__cordl_internal_set_need)) int32_t  need;

/// @brief Field tree, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tree, put=__cordl_internal_set_tree)) ::ArrayW<int32_t>  tree;

/// @brief Field tree_index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tree_index, put=__cordl_internal_set_tree_index)) int32_t  tree_index;

/// @brief Method InflateFast, addr 0xa6a95a0, size 0x954, virtual false, abstract: false, final false
inline int32_t InflateFast(int32_t  bl, int32_t  bd, ::ArrayW<int32_t>  tl, int32_t  tl_index, ::ArrayW<int32_t>  td, int32_t  td_index, ::Pathfinding::Ionic::Zlib::InflateBlocks*  s, ::Pathfinding::Ionic::Zlib::ZlibCodec*  z) ;

/// @brief Method Init, addr 0xa6a89dc, size 0x68, virtual false, abstract: false, final false
inline void Init(int32_t  bl, int32_t  bd, ::ArrayW<int32_t>  tl, int32_t  tl_index, ::ArrayW<int32_t>  td, int32_t  td_index) ;

static inline ::Pathfinding::Ionic::Zlib::InflateCodes* New_ctor() ;

/// @brief Method Process, addr 0xa6a8a44, size 0xa8c, virtual false, abstract: false, final false
inline int32_t Process(::Pathfinding::Ionic::Zlib::InflateBlocks*  blocks, int32_t  r) ;

constexpr int32_t const& __cordl_internal_get_bitsToGet() const;

constexpr int32_t& __cordl_internal_get_bitsToGet() ;

constexpr uint8_t const& __cordl_internal_get_dbits() const;

constexpr uint8_t& __cordl_internal_get_dbits() ;

constexpr int32_t const& __cordl_internal_get_dist() const;

constexpr int32_t& __cordl_internal_get_dist() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_dtree() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_dtree() ;

constexpr int32_t const& __cordl_internal_get_dtree_index() const;

constexpr int32_t& __cordl_internal_get_dtree_index() ;

constexpr uint8_t const& __cordl_internal_get_lbits() const;

constexpr uint8_t& __cordl_internal_get_lbits() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr int32_t const& __cordl_internal_get_lit() const;

constexpr int32_t& __cordl_internal_get_lit() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_ltree() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_ltree() ;

constexpr int32_t const& __cordl_internal_get_ltree_index() const;

constexpr int32_t& __cordl_internal_get_ltree_index() ;

constexpr int32_t const& __cordl_internal_get_mode() const;

constexpr int32_t& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_need() const;

constexpr int32_t& __cordl_internal_get_need() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tree() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tree() ;

constexpr int32_t const& __cordl_internal_get_tree_index() const;

constexpr int32_t& __cordl_internal_get_tree_index() ;

constexpr void __cordl_internal_set_bitsToGet(int32_t  value) ;

constexpr void __cordl_internal_set_dbits(uint8_t  value) ;

constexpr void __cordl_internal_set_dist(int32_t  value) ;

constexpr void __cordl_internal_set_dtree(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_dtree_index(int32_t  value) ;

constexpr void __cordl_internal_set_lbits(uint8_t  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

constexpr void __cordl_internal_set_lit(int32_t  value) ;

constexpr void __cordl_internal_set_ltree(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_ltree_index(int32_t  value) ;

constexpr void __cordl_internal_set_mode(int32_t  value) ;

constexpr void __cordl_internal_set_need(int32_t  value) ;

constexpr void __cordl_internal_set_tree(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_tree_index(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6a7778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflateCodes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflateCodes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflateCodes(InflateCodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflateCodes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflateCodes(InflateCodes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28187};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___mode;

/// @brief Field len, offset: 0x14, size: 0x4, def value: None
 int32_t  ___len;

/// @brief Field tree, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tree;

/// @brief Field tree_index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___tree_index;

/// @brief Field need, offset: 0x24, size: 0x4, def value: None
 int32_t  ___need;

/// @brief Field lit, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lit;

/// @brief Field bitsToGet, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___bitsToGet;

/// @brief Field dist, offset: 0x30, size: 0x4, def value: None
 int32_t  ___dist;

/// @brief Field lbits, offset: 0x34, size: 0x1, def value: None
 uint8_t  ___lbits;

/// @brief Field dbits, offset: 0x35, size: 0x1, def value: None
 uint8_t  ___dbits;

/// @brief Field ltree, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___ltree;

/// @brief Field ltree_index, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ltree_index;

/// @brief Field dtree, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___dtree;

/// @brief Field dtree_index, offset: 0x50, size: 0x4, def value: None
 int32_t  ___dtree_index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___len) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___tree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___tree_index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___need) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___lit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___bitsToGet) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___dist) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___lbits) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___dbits) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___ltree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___ltree_index) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___dtree) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateCodes, ___dtree_index) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::InflateCodes) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
