#pragma once
// IWYU pragma private; include "Pathfinding/EndingConditionDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PathEndingCondition_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndingConditionDistance)
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class EndingConditionDistance;
}
// Write type traits
MARK_REF_T(::Pathfinding::EndingConditionDistance*);
DEFINE_IL2CPP_CLASS(::Pathfinding::EndingConditionDistance*, "Pathfinding", "EndingConditionDistance");
// Dependencies Pathfinding.PathEndingCondition
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EndingConditionDistance
class CORDL_TYPE EndingConditionDistance : public ::Pathfinding::PathEndingCondition {
public:
// Declarations
/// @brief Field maxGScore, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxGScore, put=__cordl_internal_set_maxGScore)) int32_t  maxGScore;

static inline ::Pathfinding::EndingConditionDistance* New_ctor(::Pathfinding::Path*  p, int32_t  maxGScore) ;

/// @brief Method TargetFound, addr 0x5eae064, size 0x20, virtual true, abstract: false, final false
inline bool TargetFound(::Pathfinding::PathNode*  node) ;

constexpr int32_t const& __cordl_internal_get_maxGScore() const;

constexpr int32_t& __cordl_internal_get_maxGScore() ;

constexpr void __cordl_internal_set_maxGScore(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ead838, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Path*  p, int32_t  maxGScore) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndingConditionDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndingConditionDistance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EndingConditionDistance(EndingConditionDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndingConditionDistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndingConditionDistance(EndingConditionDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21391};

/// @brief Field maxGScore, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maxGScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EndingConditionDistance, ___maxGScore) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EndingConditionDistance) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
