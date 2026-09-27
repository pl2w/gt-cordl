#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InfTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfTree)
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class InfTree;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::InfTree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::InfTree*, "Pathfinding.Ionic.Zlib", "InfTree");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.InfTree
class CORDL_TYPE InfTree : public ::System::Object {
public:
// Declarations
/// @brief Field c, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_c, put=__cordl_internal_set_c)) ::ArrayW<int32_t>  c;

/// @brief Field cpdext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cpdext, put=setStaticF_cpdext)) ::ArrayW<int32_t>  cpdext;

/// @brief Field cpdist, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cpdist, put=setStaticF_cpdist)) ::ArrayW<int32_t>  cpdist;

/// @brief Field cplens, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cplens, put=setStaticF_cplens)) ::ArrayW<int32_t>  cplens;

/// @brief Field cplext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cplext, put=setStaticF_cplext)) ::ArrayW<int32_t>  cplext;

/// @brief Field fixed_td, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fixed_td, put=setStaticF_fixed_td)) ::ArrayW<int32_t>  fixed_td;

/// @brief Field fixed_tl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fixed_tl, put=setStaticF_fixed_tl)) ::ArrayW<int32_t>  fixed_tl;

/// @brief Field hn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hn, put=__cordl_internal_set_hn)) ::ArrayW<int32_t>  hn;

/// @brief Field r, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::ArrayW<int32_t>  r;

/// @brief Field u, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_u, put=__cordl_internal_set_u)) ::ArrayW<int32_t>  u;

/// @brief Field v, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_v, put=__cordl_internal_set_v)) ::ArrayW<int32_t>  v;

/// @brief Field x, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::ArrayW<int32_t>  x;

static inline ::Pathfinding::Ionic::Zlib::InfTree* New_ctor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_c() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_c() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_hn() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_hn() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_r() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_r() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_u() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_u() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_v() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_v() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_x() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_x() ;

constexpr void __cordl_internal_set_c(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_hn(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_r(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_u(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_v(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_x(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa6a661c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF_cpdext() ;

static inline ::ArrayW<int32_t> getStaticF_cpdist() ;

static inline ::ArrayW<int32_t> getStaticF_cplens() ;

static inline ::ArrayW<int32_t> getStaticF_cplext() ;

static inline ::ArrayW<int32_t> getStaticF_fixed_td() ;

static inline ::ArrayW<int32_t> getStaticF_fixed_tl() ;

/// @brief Method huft_build, addr 0xa6a6828, size 0x7a4, virtual false, abstract: false, final false
inline int32_t huft_build(::ArrayW<int32_t>  b, int32_t  bindex, int32_t  n, int32_t  s, ::ArrayW<int32_t>  d, ::ArrayW<int32_t>  e, ::ArrayW<int32_t>  t, ::ArrayW<int32_t>  m, ::ArrayW<int32_t>  hp, ::ArrayW<int32_t>  hn, ::ArrayW<int32_t>  v) ;

/// @brief Method inflate_trees_bits, addr 0xa6a6fcc, size 0x11c, virtual false, abstract: false, final false
inline int32_t inflate_trees_bits(::ArrayW<int32_t>  c, ::ArrayW<int32_t>  bb, ::ArrayW<int32_t>  tb, ::ArrayW<int32_t>  hp, ::Pathfinding::Ionic::Zlib::ZlibCodec*  z) ;

/// @brief Method inflate_trees_dynamic, addr 0xa6a72b0, size 0x258, virtual false, abstract: false, final false
inline int32_t inflate_trees_dynamic(int32_t  nl, int32_t  nd, ::ArrayW<int32_t>  c, ::ArrayW<int32_t>  bl, ::ArrayW<int32_t>  bd, ::ArrayW<int32_t>  tl, ::ArrayW<int32_t>  td, ::ArrayW<int32_t>  hp, ::Pathfinding::Ionic::Zlib::ZlibCodec*  z) ;

/// @brief Method inflate_trees_fixed, addr 0xa6a7508, size 0xe0, virtual false, abstract: false, final false
static inline int32_t inflate_trees_fixed(::ArrayW<int32_t>  bl, ::ArrayW<int32_t>  bd, ::ArrayW<::ArrayW<int32_t>>  tl, ::ArrayW<::ArrayW<int32_t>>  td, ::Pathfinding::Ionic::Zlib::ZlibCodec*  z) ;

/// @brief Method initWorkArea, addr 0xa6a70e8, size 0x1c8, virtual false, abstract: false, final false
inline void initWorkArea(int32_t  vsize) ;

static inline void setStaticF_cpdext(::ArrayW<int32_t>  value) ;

static inline void setStaticF_cpdist(::ArrayW<int32_t>  value) ;

static inline void setStaticF_cplens(::ArrayW<int32_t>  value) ;

static inline void setStaticF_cplext(::ArrayW<int32_t>  value) ;

static inline void setStaticF_fixed_td(::ArrayW<int32_t>  value) ;

static inline void setStaticF_fixed_tl(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InfTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InfTree(InfTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InfTree(InfTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28183};

/// @brief Field hn, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___hn;

/// @brief Field v, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___v;

/// @brief Field c, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___c;

/// @brief Field r, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___r;

/// @brief Field u, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___u;

/// @brief Field x, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___hn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___v) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___r) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___u) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InfTree, ___x) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::InfTree) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
