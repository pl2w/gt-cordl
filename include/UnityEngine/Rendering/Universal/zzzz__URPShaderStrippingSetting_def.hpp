#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPShaderStrippingSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPShaderStrippingSetting_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(URPShaderStrippingSetting)
namespace GlobalNamespace {
struct URPShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class URPShaderStrippingSetting;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*, "UnityEngine.Rendering.Universal", "URPShaderStrippingSetting");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "Additional Shader Stripping Settings", Order = 40)]
// [ElementInfo(Order = 10)]
// Dependencies System.Object, UnityEngine.Rendering.Universal.URPShaderStrippingSetting::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPShaderStrippingSetting
class CORDL_TYPE URPShaderStrippingSetting : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::URPShaderStrippingSetting_Version;

/// @brief Field m_StripScreenCoordOverrideVariants, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StripScreenCoordOverrideVariants, put=__cordl_internal_set_m_StripScreenCoordOverrideVariants)) bool  m_StripScreenCoordOverrideVariants;

/// @brief Field m_StripUnusedPostProcessingVariants, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StripUnusedPostProcessingVariants, put=__cordl_internal_set_m_StripUnusedPostProcessingVariants)) bool  m_StripUnusedPostProcessingVariants;

/// @brief Field m_StripUnusedVariants, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StripUnusedVariants, put=__cordl_internal_set_m_StripUnusedVariants)) bool  m_StripUnusedVariants;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::URPShaderStrippingSetting_Version  m_Version;

 __declspec(property(get=get_stripScreenCoordOverrideVariants, put=set_stripScreenCoordOverrideVariants)) bool  stripScreenCoordOverrideVariants;

 __declspec(property(get=get_stripUnusedPostProcessingVariants, put=set_stripUnusedPostProcessingVariants)) bool  stripUnusedPostProcessingVariants;

 __declspec(property(get=get_stripUnusedVariants, put=set_stripUnusedVariants)) bool  stripUnusedVariants;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_StripScreenCoordOverrideVariants() const;

constexpr bool& __cordl_internal_get_m_StripScreenCoordOverrideVariants() ;

constexpr bool const& __cordl_internal_get_m_StripUnusedPostProcessingVariants() const;

constexpr bool& __cordl_internal_get_m_StripUnusedPostProcessingVariants() ;

constexpr bool const& __cordl_internal_get_m_StripUnusedVariants() const;

constexpr bool& __cordl_internal_get_m_StripUnusedVariants() ;

constexpr ::GlobalNamespace::URPShaderStrippingSetting_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::URPShaderStrippingSetting_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_StripScreenCoordOverrideVariants(bool  value) ;

constexpr void __cordl_internal_set_m_StripUnusedPostProcessingVariants(bool  value) ;

constexpr void __cordl_internal_set_m_StripUnusedVariants(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::URPShaderStrippingSetting_Version  value) ;

/// @brief Method .ctor, addr 0xb29afd4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_stripScreenCoordOverrideVariants, addr 0xb29af58, size 0x8, virtual false, abstract: false, final false
inline bool get_stripScreenCoordOverrideVariants() ;

/// @brief Method get_stripUnusedPostProcessingVariants, addr 0xb29ae60, size 0x8, virtual false, abstract: false, final false
inline bool get_stripUnusedPostProcessingVariants() ;

/// @brief Method get_stripUnusedVariants, addr 0xb29aedc, size 0x8, virtual false, abstract: false, final false
inline bool get_stripUnusedVariants() ;

/// @brief Method get_version, addr 0xb29ae58, size 0x8, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_stripScreenCoordOverrideVariants, addr 0xb29af60, size 0x74, virtual false, abstract: false, final false
inline void set_stripScreenCoordOverrideVariants(bool  value) ;

/// @brief Method set_stripUnusedPostProcessingVariants, addr 0xb29ae68, size 0x74, virtual false, abstract: false, final false
inline void set_stripUnusedPostProcessingVariants(bool  value) ;

/// @brief Method set_stripUnusedVariants, addr 0xb29aee4, size 0x74, virtual false, abstract: false, final false
inline void set_stripUnusedVariants(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr URPShaderStrippingSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "URPShaderStrippingSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
URPShaderStrippingSetting(URPShaderStrippingSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "URPShaderStrippingSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
URPShaderStrippingSetting(URPShaderStrippingSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18608};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::URPShaderStrippingSetting_Version  ___m_Version;

/// [SerializeField]
/// [Tooltip("Controls whether to automatically strip post processing shader variants based on VolumeProfile components. Stripping is done based on VolumeProfiles in project, their usage in scenes is not considered.")]
/// @brief Field m_StripUnusedPostProcessingVariants, offset: 0x14, size: 0x1, def value: None
 bool  ___m_StripUnusedPostProcessingVariants;

/// [SerializeField]
/// [Tooltip("Controls whether to strip variants if the feature is disabled.")]
/// @brief Field m_StripUnusedVariants, offset: 0x15, size: 0x1, def value: None
 bool  ___m_StripUnusedVariants;

/// [SerializeField]
/// [Tooltip("Controls whether Screen Coordinates Override shader variants are automatically stripped.")]
/// @brief Field m_StripScreenCoordOverrideVariants, offset: 0x16, size: 0x1, def value: None
 bool  ___m_StripScreenCoordOverrideVariants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripUnusedPostProcessingVariants) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripUnusedVariants) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripScreenCoordOverrideVariants) == 0x16, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
