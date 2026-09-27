#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster_RaycastHitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TrackedDeviceRaycaster_RaycastHitData)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrackedDeviceRaycaster_RaycastHitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData");
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct CORDL_TYPE TrackedDeviceRaycaster_RaycastHitData {
public:
// Declarations
 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_graphic)) ::UnityW<::UnityEngine::UI::Graphic>  graphic;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_worldHitPosition)) ::UnityEngine::Vector3  worldHitPosition;

/// @brief Method .ctor, addr 0xafda61c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::Vector3  worldHitPosition, ::UnityEngine::Vector2  screenPosition, float_t  distance) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_distance, addr 0xafda7ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_graphic, addr 0xafda790, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_screenPosition, addr 0xafda7a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_worldHitPosition, addr 0xafda798, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_worldHitPosition() ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceRaycaster_RaycastHitData() ;

// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_worldHitPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackedDeviceRaycaster_RaycastHitData(::UnityW<::UnityEngine::UI::Graphic>  _graphic_k__BackingField, ::UnityEngine::Vector3  _worldHitPosition_k__BackingField, ::UnityEngine::Vector2  _screenPosition_k__BackingField, float_t  _distance_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// @brief Field <graphic>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  _graphic_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <worldHitPosition>k__BackingField, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  _worldHitPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <screenPosition>k__BackingField, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  _screenPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _distance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData, _graphic_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData, _worldHitPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData, _screenPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedDeviceRaycaster_RaycastHitData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
