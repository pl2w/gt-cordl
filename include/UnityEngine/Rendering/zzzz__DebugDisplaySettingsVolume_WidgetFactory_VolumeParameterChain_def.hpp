#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DebugUI_Widget_NameAndTooltip_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain)
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class Volume;
}
// Forward declare root types
namespace GlobalNamespace {
struct WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/VolumeParameterChain");
// Dependencies UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/VolumeParameterChain
struct CORDL_TYPE WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain() ;

// Ctor Parameters [CppParam { name: "nameAndTooltip", ty: "::GlobalNamespace::Widget_DebugUI_NameAndTooltip", modifiers: "", def_value: None, comment: None }, CppParam { name: "volumeProfile", ty: "::UnityW<::UnityEngine::Rendering::VolumeProfile>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volumeComponent", ty: "::UnityW<::UnityEngine::Rendering::VolumeComponent>", modifiers: "", def_value: None, comment: None }, CppParam { name: "volume", ty: "::UnityW<::UnityEngine::Rendering::Volume>", modifiers: "", def_value: None, comment: None }]
constexpr WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain(::GlobalNamespace::Widget_DebugUI_NameAndTooltip  nameAndTooltip, ::UnityW<::UnityEngine::Rendering::VolumeProfile>  volumeProfile, ::UnityW<::UnityEngine::Rendering::VolumeComponent>  volumeComponent, ::UnityW<::UnityEngine::Rendering::Volume>  volume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field nameAndTooltip, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::Widget_DebugUI_NameAndTooltip  nameAndTooltip;

/// @brief Field volumeProfile, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  volumeProfile;

/// @brief Field volumeComponent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeComponent>  volumeComponent;

/// @brief Field volume, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, nameAndTooltip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volumeProfile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volumeComponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain, volume) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WidgetFactory_DebugDisplaySettingsVolume_VolumeParameterChain) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
