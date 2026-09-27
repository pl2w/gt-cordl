#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingProcessSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBakingProcessSettings_SettingsVersion_def.hpp"
#include "UnityEngine/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeBakingProcessSettings)
namespace GlobalNamespace {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
namespace UnityEngine::Rendering {
struct ProbeDilationSettings;
}
namespace UnityEngine::Rendering {
struct VirtualOffsetSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, "UnityEngine.Rendering", "ProbeVolumeBakingProcessSettings");
// Dependencies UnityEngine.Rendering.ProbeDilationSettings, UnityEngine.Rendering.ProbeVolumeBakingProcessSettings::SettingsVersion, UnityEngine.Rendering.VirtualOffsetSettings
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingProcessSettings
struct CORDL_TYPE ProbeVolumeBakingProcessSettings {
public:
// Declarations
using SettingsVersion = ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion;

/// @brief Method SetDefaults, addr 0xb161d10, size 0x50, virtual false, abstract: false, final false
inline void SetDefaults() ;

/// @brief Method Upgrade, addr 0xb161d8c, size 0x48, virtual false, abstract: false, final false
inline void Upgrade() ;

/// @brief Method .ctor, addr 0xb161d60, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::ProbeDilationSettings  dilationSettings, ::UnityEngine::Rendering::VirtualOffsetSettings  virtualOffsetSettings) ;

/// @brief Method get_Default, addr 0xb161cb4, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingProcessSettings() ;

// Ctor Parameters [CppParam { name: "m_Version", ty: "::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion", modifiers: "", def_value: None, comment: None }, CppParam { name: "dilationSettings", ty: "::UnityEngine::Rendering::ProbeDilationSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "virtualOffsetSettings", ty: "::UnityEngine::Rendering::VirtualOffsetSettings", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingProcessSettings(::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion  m_Version, ::UnityEngine::Rendering::ProbeDilationSettings  dilationSettings, ::UnityEngine::Rendering::VirtualOffsetSettings  virtualOffsetSettings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [SerializeField]
/// @brief Field m_Version, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion  m_Version;

/// @brief Field dilationSettings, offset: 0x4, size: 0x14, def value: None
 ::UnityEngine::Rendering::ProbeDilationSettings  dilationSettings;

/// @brief Field virtualOffsetSettings, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::VirtualOffsetSettings  virtualOffsetSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, m_Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, dilationSettings) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, virtualOffsetSettings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
