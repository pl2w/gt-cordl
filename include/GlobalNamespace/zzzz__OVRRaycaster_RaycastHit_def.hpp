#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRaycaster_RaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRRaycaster_RaycastHit)
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRRaycaster_RaycastHit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRRaycaster_RaycastHit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRRaycaster_RaycastHit, "", "OVRRaycaster/RaycastHit");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRRaycaster/RaycastHit
struct CORDL_TYPE OVRRaycaster_RaycastHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRRaycaster_RaycastHit() ;

// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRRaycaster_RaycastHit(::UnityW<::UnityEngine::UI::Graphic>  graphic, ::UnityEngine::Vector3  worldPos, bool  fromMouse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field graphic, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  graphic;

/// @brief Field worldPos, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  worldPos;

/// @brief Field fromMouse, offset: 0x14, size: 0x1, def value: None
 bool  fromMouse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, graphic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, worldPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRaycaster_RaycastHit, fromMouse) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRRaycaster_RaycastHit) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
