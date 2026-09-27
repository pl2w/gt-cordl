#pragma once
// IWYU pragma private; include "Pathfinding/EndingConditionProximity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ABPathEndingCondition_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EndingConditionProximity)
namespace Pathfinding {
class ABPath;
}
namespace Pathfinding {
class PathNode;
}
// Forward declare root types
namespace Pathfinding {
class EndingConditionProximity;
}
// Write type traits
MARK_REF_T(::Pathfinding::EndingConditionProximity*);
DEFINE_IL2CPP_CLASS(::Pathfinding::EndingConditionProximity*, "Pathfinding", "EndingConditionProximity");
// Dependencies Pathfinding.ABPathEndingCondition
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EndingConditionProximity
class CORDL_TYPE EndingConditionProximity : public ::Pathfinding::ABPathEndingCondition {
public:
// Declarations
/// @brief Field maxDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

static inline ::Pathfinding::EndingConditionProximity* New_ctor(::Pathfinding::ABPath*  p, float_t  maxDistance) ;

/// @brief Method TargetFound, addr 0x5eb2520, size 0x70, virtual true, abstract: false, final false
inline bool TargetFound(::Pathfinding::PathNode*  node) ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5eb24f4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::ABPath*  p, float_t  maxDistance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndingConditionProximity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndingConditionProximity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EndingConditionProximity(EndingConditionProximity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndingConditionProximity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndingConditionProximity(EndingConditionProximity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21402};

/// @brief Field maxDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EndingConditionProximity, ___maxDistance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EndingConditionProximity) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
