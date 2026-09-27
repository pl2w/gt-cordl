#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderStrippingSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderStrippingSetting_Version_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderStrippingSetting)
namespace GlobalNamespace {
struct ShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
struct ShaderVariantLogLevel;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ShaderStrippingSetting;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ShaderStrippingSetting*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShaderStrippingSetting*, "UnityEngine.Rendering", "ShaderStrippingSetting");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "Additional Shader Stripping Settings", Order = 40)]
// [ElementInfo(Order = 0)]
// Dependencies System.Object, UnityEngine.Rendering.ShaderStrippingSetting::Version, UnityEngine.Rendering.ShaderVariantLogLevel
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderStrippingSetting
class CORDL_TYPE ShaderStrippingSetting : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::ShaderStrippingSetting_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

 __declspec(property(get=get_exportShaderVariants, put=set_exportShaderVariants)) bool  exportShaderVariants;

/// @brief Field m_ExportShaderVariants, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ExportShaderVariants, put=__cordl_internal_set_m_ExportShaderVariants)) bool  m_ExportShaderVariants;

/// @brief Field m_ShaderVariantLogLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ShaderVariantLogLevel, put=__cordl_internal_set_m_ShaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel  m_ShaderVariantLogLevel;

/// @brief Field m_StripRuntimeDebugShaders, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StripRuntimeDebugShaders, put=__cordl_internal_set_m_StripRuntimeDebugShaders)) bool  m_StripRuntimeDebugShaders;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::ShaderStrippingSetting_Version  m_Version;

 __declspec(property(get=get_shaderVariantLogLevel, put=set_shaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel  shaderVariantLogLevel;

 __declspec(property(get=get_stripRuntimeDebugShaders, put=set_stripRuntimeDebugShaders)) bool  stripRuntimeDebugShaders;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::ShaderStrippingSetting* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0xb173cf4, size 0x8, virtual true, abstract: false, final true
inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() ;

constexpr bool const& __cordl_internal_get_m_ExportShaderVariants() const;

constexpr bool& __cordl_internal_get_m_ExportShaderVariants() ;

constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel const& __cordl_internal_get_m_ShaderVariantLogLevel() const;

constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel& __cordl_internal_get_m_ShaderVariantLogLevel() ;

constexpr bool const& __cordl_internal_get_m_StripRuntimeDebugShaders() const;

constexpr bool& __cordl_internal_get_m_StripRuntimeDebugShaders() ;

constexpr ::GlobalNamespace::ShaderStrippingSetting_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::ShaderStrippingSetting_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_ExportShaderVariants(bool  value) ;

constexpr void __cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel  value) ;

constexpr void __cordl_internal_set_m_StripRuntimeDebugShaders(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::ShaderStrippingSetting_Version  value) ;

/// @brief Method .ctor, addr 0xb173e70, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_exportShaderVariants, addr 0xb173cfc, size 0x8, virtual false, abstract: false, final false
inline bool get_exportShaderVariants() ;

/// @brief Method get_shaderVariantLogLevel, addr 0xb173d78, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShaderVariantLogLevel get_shaderVariantLogLevel() ;

/// @brief Method get_stripRuntimeDebugShaders, addr 0xb173df4, size 0x8, virtual false, abstract: false, final false
inline bool get_stripRuntimeDebugShaders() ;

/// @brief Method get_version, addr 0xb173cec, size 0x8, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_exportShaderVariants, addr 0xb173d04, size 0x74, virtual false, abstract: false, final false
inline void set_exportShaderVariants(bool  value) ;

/// @brief Method set_shaderVariantLogLevel, addr 0xb173d80, size 0x74, virtual false, abstract: false, final false
inline void set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel  value) ;

/// @brief Method set_stripRuntimeDebugShaders, addr 0xb173dfc, size 0x74, virtual false, abstract: false, final false
inline void set_stripRuntimeDebugShaders(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderStrippingSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderStrippingSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderStrippingSetting(ShaderStrippingSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderStrippingSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderStrippingSetting(ShaderStrippingSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16921};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ShaderStrippingSetting_Version  ___m_Version;

/// [SerializeField]
/// [Tooltip("Controls whether to output shader variant information to a file.")]
/// @brief Field m_ExportShaderVariants, offset: 0x14, size: 0x1, def value: None
 bool  ___m_ExportShaderVariants;

/// [SerializeField]
/// [Tooltip("Controls the level of logging of shader variant information outputted during the build process. Information appears in the Unity Console when the build finishes.")]
/// @brief Field m_ShaderVariantLogLevel, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderVariantLogLevel  ___m_ShaderVariantLogLevel;

/// [SerializeField]
/// [Tooltip("When enabled, all debug display shader variants are removed when you build for the Unity Player. This decreases build time, but prevents the use of most Rendering Debugger features in Player builds.")]
/// @brief Field m_StripRuntimeDebugShaders, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_StripRuntimeDebugShaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_ExportShaderVariants) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_ShaderVariantLogLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_StripRuntimeDebugShaders) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShaderStrippingSetting) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
