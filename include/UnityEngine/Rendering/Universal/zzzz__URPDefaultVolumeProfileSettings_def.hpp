#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPDefaultVolumeProfileSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPDefaultVolumeProfileSettings_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(URPDefaultVolumeProfileSettings)
namespace GlobalNamespace {
struct URPDefaultVolumeProfileSettings_Version;
}
namespace UnityEngine::Rendering {
class IDefaultVolumeProfileSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class URPDefaultVolumeProfileSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*, "UnityEngine.Rendering.Universal", "URPDefaultVolumeProfileSettings");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "Volume", Order = 0)]
// Dependencies System.Object, UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPDefaultVolumeProfileSettings
class CORDL_TYPE URPDefaultVolumeProfileSettings : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::URPDefaultVolumeProfileSettings_Version;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::URPDefaultVolumeProfileSettings_Version  m_Version;

/// @brief Field m_VolumeProfile, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VolumeProfile, put=__cordl_internal_set_m_VolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  m_VolumeProfile;

 __declspec(property(get=get_version)) int32_t  version;

 __declspec(property(get=get_volumeProfile, put=set_volumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  volumeProfile;

/// @brief Convert operator to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr operator  ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings* New_ctor() ;

constexpr ::GlobalNamespace::URPDefaultVolumeProfileSettings_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::URPDefaultVolumeProfileSettings_Version& __cordl_internal_get_m_Version() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_VolumeProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_VolumeProfile() ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::URPDefaultVolumeProfileSettings_Version  value) ;

constexpr void __cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

/// @brief Method .ctor, addr 0xb29ae50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_version, addr 0xb29adcc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Method get_volumeProfile, addr 0xb29add4, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_volumeProfile() ;

/// @brief Convert to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr ::UnityEngine::Rendering::IDefaultVolumeProfileSettings* i___UnityEngine__Rendering__IDefaultVolumeProfileSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_volumeProfile, addr 0xb29addc, size 0x74, virtual true, abstract: false, final true
inline void set_volumeProfile(::UnityEngine::Rendering::VolumeProfile*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr URPDefaultVolumeProfileSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "URPDefaultVolumeProfileSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
URPDefaultVolumeProfileSettings(URPDefaultVolumeProfileSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "URPDefaultVolumeProfileSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
URPDefaultVolumeProfileSettings(URPDefaultVolumeProfileSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18606};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::URPDefaultVolumeProfileSettings_Version  ___m_Version;

/// [SerializeField]
/// @brief Field m_VolumeProfile, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ___m_VolumeProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings, ___m_VolumeProfile) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
