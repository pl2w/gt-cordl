#pragma once
// IWYU pragma private; include "Pathfinding/NNConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NNConstraint)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class NavGraph;
}
// Forward declare root types
namespace Pathfinding {
class NNConstraint;
}
// Write type traits
MARK_REF_T(::Pathfinding::NNConstraint*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NNConstraint*, "Pathfinding", "NNConstraint");
// Dependencies Pathfinding.GraphMask, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NNConstraint
class CORDL_TYPE NNConstraint : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) int32_t  area;

/// @brief Field constrainArea, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_constrainArea, put=__cordl_internal_set_constrainArea)) bool  constrainArea;

/// @brief Field constrainDistance, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_constrainDistance, put=__cordl_internal_set_constrainDistance)) bool  constrainDistance;

/// @brief Field constrainTags, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_constrainTags, put=__cordl_internal_set_constrainTags)) bool  constrainTags;

/// @brief Field constrainWalkability, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_constrainWalkability, put=__cordl_internal_set_constrainWalkability)) bool  constrainWalkability;

/// @brief Field distanceXZ, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_distanceXZ, put=__cordl_internal_set_distanceXZ)) bool  distanceXZ;

/// @brief Field graphMask, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphMask, put=__cordl_internal_set_graphMask)) ::Pathfinding::GraphMask  graphMask;

/// @brief Field tags, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tags, put=__cordl_internal_set_tags)) int32_t  tags;

/// @brief Field walkable, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_walkable, put=__cordl_internal_set_walkable)) bool  walkable;

static inline ::Pathfinding::NNConstraint* New_ctor() ;

/// @brief Method Suitable, addr 0x5e48060, size 0xa8, virtual true, abstract: false, final false
inline bool Suitable(::Pathfinding::GraphNode*  node) ;

/// @brief Method SuitableGraph, addr 0x5e48040, size 0x10, virtual true, abstract: false, final false
inline bool SuitableGraph(int32_t  graphIndex, ::Pathfinding::NavGraph*  graph) ;

constexpr int32_t const& __cordl_internal_get_area() const;

constexpr int32_t& __cordl_internal_get_area() ;

constexpr bool const& __cordl_internal_get_constrainArea() const;

constexpr bool& __cordl_internal_get_constrainArea() ;

constexpr bool const& __cordl_internal_get_constrainDistance() const;

constexpr bool& __cordl_internal_get_constrainDistance() ;

constexpr bool const& __cordl_internal_get_constrainTags() const;

constexpr bool& __cordl_internal_get_constrainTags() ;

constexpr bool const& __cordl_internal_get_constrainWalkability() const;

constexpr bool& __cordl_internal_get_constrainWalkability() ;

constexpr bool const& __cordl_internal_get_distanceXZ() const;

constexpr bool& __cordl_internal_get_distanceXZ() ;

constexpr ::Pathfinding::GraphMask const& __cordl_internal_get_graphMask() const;

constexpr ::Pathfinding::GraphMask& __cordl_internal_get_graphMask() ;

constexpr int32_t const& __cordl_internal_get_tags() const;

constexpr int32_t& __cordl_internal_get_tags() ;

constexpr bool const& __cordl_internal_get_walkable() const;

constexpr bool& __cordl_internal_get_walkable() ;

constexpr void __cordl_internal_set_area(int32_t  value) ;

constexpr void __cordl_internal_set_constrainArea(bool  value) ;

constexpr void __cordl_internal_set_constrainDistance(bool  value) ;

constexpr void __cordl_internal_set_constrainTags(bool  value) ;

constexpr void __cordl_internal_set_constrainWalkability(bool  value) ;

constexpr void __cordl_internal_set_distanceXZ(bool  value) ;

constexpr void __cordl_internal_set_graphMask(::Pathfinding::GraphMask  value) ;

constexpr void __cordl_internal_set_tags(int32_t  value) ;

constexpr void __cordl_internal_set_walkable(bool  value) ;

/// @brief Method .ctor, addr 0x5e48180, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Default, addr 0x5e48108, size 0x78, virtual false, abstract: false, final false
static inline ::Pathfinding::NNConstraint* get_Default() ;

/// @brief Method get_None, addr 0x5e481ac, size 0x8c, virtual false, abstract: false, final false
static inline ::Pathfinding::NNConstraint* get_None() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NNConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NNConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NNConstraint(NNConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NNConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NNConstraint(NNConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21191};

/// @brief Field graphMask, offset: 0x10, size: 0x4, def value: None
 ::Pathfinding::GraphMask  ___graphMask;

/// @brief Field constrainArea, offset: 0x14, size: 0x1, def value: None
 bool  ___constrainArea;

/// @brief Field area, offset: 0x18, size: 0x4, def value: None
 int32_t  ___area;

/// @brief Field constrainWalkability, offset: 0x1c, size: 0x1, def value: None
 bool  ___constrainWalkability;

/// @brief Field walkable, offset: 0x1d, size: 0x1, def value: None
 bool  ___walkable;

/// @brief Field distanceXZ, offset: 0x1e, size: 0x1, def value: None
 bool  ___distanceXZ;

/// @brief Field constrainTags, offset: 0x1f, size: 0x1, def value: None
 bool  ___constrainTags;

/// @brief Field tags, offset: 0x20, size: 0x4, def value: None
 int32_t  ___tags;

/// @brief Field constrainDistance, offset: 0x24, size: 0x1, def value: None
 bool  ___constrainDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NNConstraint, ___graphMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___constrainArea) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___area) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___constrainWalkability) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___walkable) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___distanceXZ) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___constrainTags) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___tags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNConstraint, ___constrainDistance) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NNConstraint) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
