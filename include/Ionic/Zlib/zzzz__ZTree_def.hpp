#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZTree)
namespace Ionic::Zlib {
class DeflateManager;
}
namespace Ionic::Zlib {
class StaticTree;
}
// Forward declare root types
namespace Ionic::Zlib {
class ZTree;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZTree*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZTree*, "Ionic.Zlib", "ZTree");
// Dependencies System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZTree
class CORDL_TYPE ZTree : public ::System::Object {
public:
// Declarations
/// @brief Field DistanceBase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DistanceBase, put=setStaticF_DistanceBase)) ::ArrayW<int32_t>  DistanceBase;

/// @brief Field ExtraDistanceBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExtraDistanceBits, put=setStaticF_ExtraDistanceBits)) ::ArrayW<int32_t>  ExtraDistanceBits;

/// @brief Field ExtraLengthBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExtraLengthBits, put=setStaticF_ExtraLengthBits)) ::ArrayW<int32_t>  ExtraLengthBits;

/// @brief Field HEAP_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HEAP_SIZE, put=setStaticF_HEAP_SIZE)) int32_t  HEAP_SIZE;

/// @brief Field LengthBase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LengthBase, put=setStaticF_LengthBase)) ::ArrayW<int32_t>  LengthBase;

/// @brief Field LengthCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LengthCode, put=setStaticF_LengthCode)) ::ArrayW<int8_t>  LengthCode;

/// @brief Field _dist_code, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__dist_code, put=setStaticF__dist_code)) ::ArrayW<int8_t>  _dist_code;

/// @brief Field bl_order, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bl_order, put=setStaticF_bl_order)) ::ArrayW<int8_t>  bl_order;

/// @brief Field dyn_tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dyn_tree, put=__cordl_internal_set_dyn_tree)) ::ArrayW<int16_t>  dyn_tree;

/// @brief Field extra_blbits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_extra_blbits, put=setStaticF_extra_blbits)) ::ArrayW<int32_t>  extra_blbits;

/// @brief Field max_code, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_max_code, put=__cordl_internal_set_max_code)) int32_t  max_code;

/// @brief Field staticTree, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticTree, put=__cordl_internal_set_staticTree)) ::Ionic::Zlib::StaticTree*  staticTree;

/// @brief Method DistanceCode, addr 0xa79edf8, size 0xbc, virtual false, abstract: false, final false
static inline int32_t DistanceCode(int32_t  dist) ;

static inline ::Ionic::Zlib::ZTree* New_ctor() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_dyn_tree() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_dyn_tree() ;

constexpr int32_t const& __cordl_internal_get_max_code() const;

constexpr int32_t& __cordl_internal_get_max_code() ;

constexpr ::Ionic::Zlib::StaticTree* const& __cordl_internal_get_staticTree() const;

constexpr ::Ionic::Zlib::StaticTree*& __cordl_internal_get_staticTree() ;

constexpr void __cordl_internal_set_dyn_tree(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_max_code(int32_t  value) ;

constexpr void __cordl_internal_set_staticTree(::Ionic::Zlib::StaticTree*  value) ;

/// @brief Method .ctor, addr 0xa79f8ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method bi_reverse, addr 0xa79f884, size 0x28, virtual false, abstract: false, final false
static inline int32_t bi_reverse(int32_t  code, int32_t  len) ;

/// @brief Method build_tree, addr 0xa79f220, size 0x48c, virtual false, abstract: false, final false
inline void build_tree(::Ionic::Zlib::DeflateManager*  s) ;

/// @brief Method gen_bitlen, addr 0xa79eeb4, size 0x36c, virtual false, abstract: false, final false
inline void gen_bitlen(::Ionic::Zlib::DeflateManager*  s) ;

/// @brief Method gen_codes, addr 0xa79f6ac, size 0x1d8, virtual false, abstract: false, final false
static inline void gen_codes(::ArrayW<int16_t>  tree, int32_t  max_code, ::ArrayW<int16_t>  bl_count) ;

static inline ::ArrayW<int32_t> getStaticF_DistanceBase() ;

static inline ::ArrayW<int32_t> getStaticF_ExtraDistanceBits() ;

static inline ::ArrayW<int32_t> getStaticF_ExtraLengthBits() ;

static inline int32_t getStaticF_HEAP_SIZE() ;

static inline ::ArrayW<int32_t> getStaticF_LengthBase() ;

static inline ::ArrayW<int8_t> getStaticF_LengthCode() ;

static inline ::ArrayW<int8_t> getStaticF__dist_code() ;

static inline ::ArrayW<int8_t> getStaticF_bl_order() ;

static inline ::ArrayW<int32_t> getStaticF_extra_blbits() ;

static inline void setStaticF_DistanceBase(::ArrayW<int32_t>  value) ;

static inline void setStaticF_ExtraDistanceBits(::ArrayW<int32_t>  value) ;

static inline void setStaticF_ExtraLengthBits(::ArrayW<int32_t>  value) ;

static inline void setStaticF_HEAP_SIZE(int32_t  value) ;

static inline void setStaticF_LengthBase(::ArrayW<int32_t>  value) ;

static inline void setStaticF_LengthCode(::ArrayW<int8_t>  value) ;

static inline void setStaticF__dist_code(::ArrayW<int8_t>  value) ;

static inline void setStaticF_bl_order(::ArrayW<int8_t>  value) ;

static inline void setStaticF_extra_blbits(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZTree(ZTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZTree(ZTree const& ) = delete;

/// @brief Field Buf_size offset 0xffffffff size 0x4
static constexpr int32_t  Buf_size{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19481};

/// @brief Field dyn_tree, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___dyn_tree;

/// @brief Field max_code, offset: 0x18, size: 0x4, def value: None
 int32_t  ___max_code;

/// @brief Field staticTree, offset: 0x20, size: 0x8, def value: None
 ::Ionic::Zlib::StaticTree*  ___staticTree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ZTree, ___dyn_tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZTree, ___max_code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZTree, ___staticTree) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ZTree) == 0x28, "Size mismatch!");

} // namespace end def Ionic::Zlib
