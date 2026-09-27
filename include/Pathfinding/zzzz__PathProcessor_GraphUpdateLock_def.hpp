#pragma once
// IWYU pragma private; include "Pathfinding/PathProcessor_GraphUpdateLock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathProcessor_GraphUpdateLock)
namespace Pathfinding {
class PathProcessor;
}
// Forward declare root types
namespace GlobalNamespace {
struct PathProcessor_GraphUpdateLock;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PathProcessor_GraphUpdateLock);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PathProcessor_GraphUpdateLock, "Pathfinding", "PathProcessor/GraphUpdateLock");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.PathProcessor/GraphUpdateLock
struct CORDL_TYPE PathProcessor_GraphUpdateLock {
public:
// Declarations
 __declspec(property(get=get_Held)) bool  Held;

/// @brief Method Release, addr 0x5e65d30, size 0x1c, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method .ctor, addr 0x5e6450c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::PathProcessor*  pathProcessor, bool  block) ;

/// @brief Method get_Held, addr 0x5e65cc4, size 0x6c, virtual false, abstract: false, final false
inline bool get_Held() ;

// Ctor Parameters []
// @brief default ctor
constexpr PathProcessor_GraphUpdateLock() ;

// Ctor Parameters [CppParam { name: "pathProcessor", ty: "::Pathfinding::PathProcessor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PathProcessor_GraphUpdateLock(::Pathfinding::PathProcessor*  pathProcessor, int32_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pathProcessor, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::PathProcessor*  pathProcessor;

/// @brief Field id, offset: 0x8, size: 0x4, def value: None
 int32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PathProcessor_GraphUpdateLock, pathProcessor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PathProcessor_GraphUpdateLock, id) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PathProcessor_GraphUpdateLock) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
