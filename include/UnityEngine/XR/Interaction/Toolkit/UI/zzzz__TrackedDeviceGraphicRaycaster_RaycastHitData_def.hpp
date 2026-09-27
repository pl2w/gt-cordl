#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceGraphicRaycaster_RaycastHitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceGraphicRaycaster_RaycastHitData)
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
struct TrackedDeviceGraphicRaycaster_RaycastHitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceGraphicRaycaster/RaycastHitData");
// [IsReadOnly]
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitData
struct CORDL_TYPE TrackedDeviceGraphicRaycaster_RaycastHitData {
public:
// Declarations
 __declspec(property(get=get_displayIndex)) int32_t  displayIndex;

 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_graphic)) ::UnityW<::UnityEngine::UI::Graphic>  graphic;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_worldHitPosition)) ::UnityEngine::Vector3  worldHitPosition;

/// @brief Method .ctor, addr 0xb437c28, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::Vector3  worldHitPosition, ::UnityEngine::Vector2  screenPosition, float_t  distance, int32_t  displayIndex) ;

/// [CompilerGenerated]
/// @brief Method get_displayIndex, addr 0xb438aa8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_displayIndex() ;

/// [CompilerGenerated]
/// @brief Method get_distance, addr 0xb438aa0, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// [CompilerGenerated]
/// @brief Method get_graphic, addr 0xb438a84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic() ;

/// [CompilerGenerated]
/// @brief Method get_screenPosition, addr 0xb438a98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// [CompilerGenerated]
/// @brief Method get_worldHitPosition, addr 0xb438a8c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_worldHitPosition() ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackedDeviceGraphicRaycaster_RaycastHitData() ;

// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_worldHitPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_displayIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackedDeviceGraphicRaycaster_RaycastHitData(::UnityW<::UnityEngine::UI::Graphic>  _graphic_k__BackingField, ::UnityEngine::Vector3  _worldHitPosition_k__BackingField, ::UnityEngine::Vector2  _screenPosition_k__BackingField, float_t  _distance_k__BackingField, int32_t  _displayIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

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

/// [CompilerGenerated]
/// @brief Field <displayIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  _displayIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, _graphic_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, _worldHitPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, _screenPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData, _displayIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedDeviceGraphicRaycaster_RaycastHitData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
