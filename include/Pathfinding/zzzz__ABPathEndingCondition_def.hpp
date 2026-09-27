#pragma once
// IWYU pragma private; include "Pathfinding/ABPathEndingCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PathEndingCondition_def.hpp"
CORDL_MODULE_EXPORT(ABPathEndingCondition)
namespace Pathfinding {
class ABPath;
}
namespace Pathfinding {
class PathNode;
}
// Forward declare root types
namespace Pathfinding {
class ABPathEndingCondition;
}
// Write type traits
MARK_REF_T(::Pathfinding::ABPathEndingCondition*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ABPathEndingCondition*, "Pathfinding", "ABPathEndingCondition");
// Dependencies Pathfinding.PathEndingCondition
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ABPathEndingCondition
class CORDL_TYPE ABPathEndingCondition : public ::Pathfinding::PathEndingCondition {
public:
// Declarations
/// @brief Field abPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_abPath, put=__cordl_internal_set_abPath)) ::Pathfinding::ABPath*  abPath;

static inline ::Pathfinding::ABPathEndingCondition* New_ctor(::Pathfinding::ABPath*  p) ;

/// @brief Method TargetFound, addr 0x5eb24c8, size 0x2c, virtual true, abstract: false, final false
inline bool TargetFound(::Pathfinding::PathNode*  node) ;

constexpr ::Pathfinding::ABPath* const& __cordl_internal_get_abPath() const;

constexpr ::Pathfinding::ABPath*& __cordl_internal_get_abPath() ;

constexpr void __cordl_internal_set_abPath(::Pathfinding::ABPath*  value) ;

/// @brief Method .ctor, addr 0x5eb20bc, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::ABPath*  p) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ABPathEndingCondition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ABPathEndingCondition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ABPathEndingCondition(ABPathEndingCondition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ABPathEndingCondition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ABPathEndingCondition(ABPathEndingCondition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21401};

/// @brief Field abPath, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::ABPath*  ___abPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ABPathEndingCondition, ___abPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ABPathEndingCondition) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
