#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/StaticTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticTree)
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class StaticTree;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::StaticTree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::StaticTree*, "Pathfinding.Ionic.Zlib", "StaticTree");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.StaticTree
class CORDL_TYPE StaticTree : public ::System::Object {
public:
// Declarations
/// @brief Field BitLengths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BitLengths, put=setStaticF_BitLengths)) ::Pathfinding::Ionic::Zlib::StaticTree*  BitLengths;

/// @brief Field Distances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Distances, put=setStaticF_Distances)) ::Pathfinding::Ionic::Zlib::StaticTree*  Distances;

/// @brief Field Literals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Literals, put=setStaticF_Literals)) ::Pathfinding::Ionic::Zlib::StaticTree*  Literals;

/// @brief Field distTreeCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_distTreeCodes, put=setStaticF_distTreeCodes)) ::ArrayW<int16_t>  distTreeCodes;

/// @brief Field elems, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_elems, put=__cordl_internal_set_elems)) int32_t  elems;

/// @brief Field extraBase, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraBase, put=__cordl_internal_set_extraBase)) int32_t  extraBase;

/// @brief Field extraBits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_extraBits, put=__cordl_internal_set_extraBits)) ::ArrayW<int32_t>  extraBits;

/// @brief Field lengthAndLiteralsTreeCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lengthAndLiteralsTreeCodes, put=setStaticF_lengthAndLiteralsTreeCodes)) ::ArrayW<int16_t>  lengthAndLiteralsTreeCodes;

/// @brief Field maxLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLength, put=__cordl_internal_set_maxLength)) int32_t  maxLength;

/// @brief Field treeCodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeCodes, put=__cordl_internal_set_treeCodes)) ::ArrayW<int16_t>  treeCodes;

static inline ::Pathfinding::Ionic::Zlib::StaticTree* New_ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength) ;

constexpr int32_t const& __cordl_internal_get_elems() const;

constexpr int32_t& __cordl_internal_get_elems() ;

constexpr int32_t const& __cordl_internal_get_extraBase() const;

constexpr int32_t& __cordl_internal_get_extraBase() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_extraBits() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_extraBits() ;

constexpr int32_t const& __cordl_internal_get_maxLength() const;

constexpr int32_t& __cordl_internal_get_maxLength() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_treeCodes() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_treeCodes() ;

constexpr void __cordl_internal_set_elems(int32_t  value) ;

constexpr void __cordl_internal_set_extraBase(int32_t  value) ;

constexpr void __cordl_internal_set_extraBits(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_maxLength(int32_t  value) ;

constexpr void __cordl_internal_set_treeCodes(::ArrayW<int16_t>  value) ;

/// @brief Method .ctor, addr 0xa6ad36c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int16_t>  treeCodes, ::ArrayW<int32_t>  extraBits, int32_t  extraBase, int32_t  elems, int32_t  maxLength) ;

static inline ::Pathfinding::Ionic::Zlib::StaticTree* getStaticF_BitLengths() ;

static inline ::Pathfinding::Ionic::Zlib::StaticTree* getStaticF_Distances() ;

static inline ::Pathfinding::Ionic::Zlib::StaticTree* getStaticF_Literals() ;

static inline ::ArrayW<int16_t> getStaticF_distTreeCodes() ;

static inline ::ArrayW<int16_t> getStaticF_lengthAndLiteralsTreeCodes() ;

static inline void setStaticF_BitLengths(::Pathfinding::Ionic::Zlib::StaticTree*  value) ;

static inline void setStaticF_Distances(::Pathfinding::Ionic::Zlib::StaticTree*  value) ;

static inline void setStaticF_Literals(::Pathfinding::Ionic::Zlib::StaticTree*  value) ;

static inline void setStaticF_distTreeCodes(::ArrayW<int16_t>  value) ;

static inline void setStaticF_lengthAndLiteralsTreeCodes(::ArrayW<int16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticTree(StaticTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticTree(StaticTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28201};

/// @brief Field treeCodes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___treeCodes;

/// @brief Field extraBits, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___extraBits;

/// @brief Field extraBase, offset: 0x20, size: 0x4, def value: None
 int32_t  ___extraBase;

/// @brief Field elems, offset: 0x24, size: 0x4, def value: None
 int32_t  ___elems;

/// @brief Field maxLength, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::StaticTree, ___treeCodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::StaticTree, ___extraBits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::StaticTree, ___extraBase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::StaticTree, ___elems) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::StaticTree, ___maxLength) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::StaticTree) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
