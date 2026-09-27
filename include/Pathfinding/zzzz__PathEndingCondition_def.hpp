#pragma once
// IWYU pragma private; include "Pathfinding/PathEndingCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PathEndingCondition)
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class PathEndingCondition;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathEndingCondition*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathEndingCondition*, "Pathfinding", "PathEndingCondition");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathEndingCondition
class CORDL_TYPE PathEndingCondition : public ::System::Object {
public:
// Declarations
/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

static inline ::Pathfinding::PathEndingCondition* New_ctor() ;

static inline ::Pathfinding::PathEndingCondition* New_ctor(::Pathfinding::Path*  p) ;

/// @brief Method TargetFound, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TargetFound(::Pathfinding::PathNode*  node) ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

/// @brief Method .ctor, addr 0x5eb24c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5eadfe8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Path*  p) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathEndingCondition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathEndingCondition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathEndingCondition(PathEndingCondition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathEndingCondition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathEndingCondition(PathEndingCondition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21400};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathEndingCondition, ___path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathEndingCondition) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
