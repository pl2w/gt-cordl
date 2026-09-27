#pragma once
// IWYU pragma private; include "Pathfinding/BinaryHeap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__BinaryHeap_Tuple_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryHeap)
namespace GlobalNamespace {
struct BinaryHeap_Tuple;
}
namespace Pathfinding {
class PathNode;
}
// Forward declare root types
namespace Pathfinding {
class BinaryHeap;
}
// Write type traits
MARK_REF_T(::Pathfinding::BinaryHeap*);
DEFINE_IL2CPP_CLASS(::Pathfinding::BinaryHeap*, "Pathfinding", "BinaryHeap");
// Dependencies Pathfinding.BinaryHeap::Tuple, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BinaryHeap
class CORDL_TYPE BinaryHeap : public ::System::Object {
public:
// Declarations
using Tuple = ::GlobalNamespace::BinaryHeap_Tuple;

/// @brief Field growthFactor, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_growthFactor, put=__cordl_internal_set_growthFactor)) float_t  growthFactor;

/// @brief Field heap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_heap, put=__cordl_internal_set_heap)) ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>  heap;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Field numberOfItems, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_numberOfItems, put=__cordl_internal_set_numberOfItems)) int32_t  numberOfItems;

/// @brief Method Add, addr 0x5e56b98, size 0x10c, virtual false, abstract: false, final false
inline void Add(::Pathfinding::PathNode*  node) ;

/// @brief Method Clear, addr 0x5e568f8, size 0x58, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DecreaseKey, addr 0x5e56ca4, size 0x14c, virtual false, abstract: false, final false
inline void DecreaseKey(::GlobalNamespace::BinaryHeap_Tuple  node, uint16_t  index) ;

/// @brief Method Expand, addr 0x5e569b0, size 0x1e8, virtual false, abstract: false, final false
inline void Expand() ;

/// @brief Method GetNode, addr 0x5e56950, size 0x30, virtual false, abstract: false, final false
inline ::Pathfinding::PathNode* GetNode(int32_t  i) ;

static inline ::Pathfinding::BinaryHeap* New_ctor(int32_t  capacity) ;

/// @brief Method Rebuild, addr 0x5e57358, size 0x148, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method Remove, addr 0x5e56df0, size 0x2d4, virtual false, abstract: false, final false
inline ::Pathfinding::PathNode* Remove() ;

/// @brief Method RoundUpToNextMultipleMod1, addr 0x5e56828, size 0x2c, virtual false, abstract: false, final false
static inline int32_t RoundUpToNextMultipleMod1(int32_t  v) ;

/// @brief Method SetF, addr 0x5e56980, size 0x30, virtual false, abstract: false, final false
inline void SetF(int32_t  i, uint32_t  f) ;

/// @brief Method Validate, addr 0x5e570c4, size 0x294, virtual false, abstract: false, final false
inline void Validate() ;

constexpr float_t const& __cordl_internal_get_growthFactor() const;

constexpr float_t& __cordl_internal_get_growthFactor() ;

constexpr ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple> const& __cordl_internal_get_heap() const;

constexpr ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>& __cordl_internal_get_heap() ;

constexpr int32_t const& __cordl_internal_get_numberOfItems() const;

constexpr int32_t& __cordl_internal_get_numberOfItems() ;

constexpr void __cordl_internal_set_growthFactor(float_t  value) ;

constexpr void __cordl_internal_set_heap(::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>  value) ;

constexpr void __cordl_internal_set_numberOfItems(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e56854, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_isEmpty, addr 0x5e56818, size 0x10, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryHeap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryHeap(BinaryHeap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryHeap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryHeap(BinaryHeap const& ) = delete;

/// @brief Field D offset 0xffffffff size 0x4
static constexpr int32_t  D{static_cast<int32_t>(0x4)};

/// @brief Field NotInHeap offset 0xffffffff size 0x2
static constexpr uint16_t  NotInHeap{static_cast<uint16_t>(0xffffu)};

/// @brief Field SortGScores offset 0xffffffff size 0x1
static constexpr bool  SortGScores{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21242};

/// @brief Field numberOfItems, offset: 0x10, size: 0x4, def value: None
 int32_t  ___numberOfItems;

/// @brief Field growthFactor, offset: 0x14, size: 0x4, def value: None
 float_t  ___growthFactor;

/// @brief Field heap, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>  ___heap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BinaryHeap, ___numberOfItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BinaryHeap, ___growthFactor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BinaryHeap, ___heap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BinaryHeap) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
