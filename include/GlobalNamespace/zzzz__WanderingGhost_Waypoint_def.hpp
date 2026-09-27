#pragma once
// IWYU pragma private; include "GlobalNamespace/WanderingGhost_Waypoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(WanderingGhost_Waypoint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct WanderingGhost_Waypoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WanderingGhost_Waypoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WanderingGhost_Waypoint, "", "WanderingGhost/Waypoint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WanderingGhost/Waypoint
struct CORDL_TYPE WanderingGhost_Waypoint {
public:
// Declarations
/// @brief Method .ctor, addr 0x5a121f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  visible, ::UnityEngine::Transform*  tr) ;

// Ctor Parameters []
// @brief default ctor
constexpr WanderingGhost_Waypoint() ;

// Ctor Parameters [CppParam { name: "_visible", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr WanderingGhost_Waypoint(bool  _visible, ::UnityW<::UnityEngine::Transform>  _transform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("The ghost will be visible when its reached to this waypoint")]
/// @brief Field _visible, offset: 0x0, size: 0x1, def value: None
 bool  _visible;

/// @brief Field _transform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WanderingGhost_Waypoint, _visible) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost_Waypoint, _transform) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WanderingGhost_Waypoint) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
