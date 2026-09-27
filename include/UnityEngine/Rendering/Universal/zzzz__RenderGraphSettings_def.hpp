#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderGraphSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderGraphSettings_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphSettings)
namespace GlobalNamespace {
struct RenderGraphSettings_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderGraphSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::RenderGraphSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::RenderGraphSettings*, "UnityEngine.Rendering.Universal", "RenderGraphSettings");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "Render Graph", Order = 50)]
// [ElementInfo(Order = -10)]
// Dependencies System.Object, UnityEngine.Rendering.Universal.RenderGraphSettings::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderGraphSettings
class CORDL_TYPE RenderGraphSettings : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::RenderGraphSettings_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

 __declspec(property(get=get_enableRenderCompatibilityMode, put=set_enableRenderCompatibilityMode)) bool  enableRenderCompatibilityMode;

/// @brief Field m_EnableRenderCompatibilityMode, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableRenderCompatibilityMode, put=__cordl_internal_set_m_EnableRenderCompatibilityMode)) bool  m_EnableRenderCompatibilityMode;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::RenderGraphSettings_Version  m_Version;

 __declspec(property(get=get_version)) int32_t  version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::Universal::RenderGraphSettings* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0xb29ad48, size 0x8, virtual true, abstract: false, final true
inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() ;

constexpr bool const& __cordl_internal_get_m_EnableRenderCompatibilityMode() const;

constexpr bool& __cordl_internal_get_m_EnableRenderCompatibilityMode() ;

constexpr ::GlobalNamespace::RenderGraphSettings_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::RenderGraphSettings_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_EnableRenderCompatibilityMode(bool  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::RenderGraphSettings_Version  value) ;

/// @brief Method .ctor, addr 0xb29adc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableRenderCompatibilityMode, addr 0xb2970dc, size 0xa4, virtual false, abstract: false, final false
inline bool get_enableRenderCompatibilityMode() ;

/// @brief Method get_version, addr 0xb29ad40, size 0x8, virtual true, abstract: false, final true
inline int32_t get_version() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_enableRenderCompatibilityMode, addr 0xb29ad50, size 0x74, virtual false, abstract: false, final false
inline void set_enableRenderCompatibilityMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderGraphSettings(RenderGraphSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderGraphSettings(RenderGraphSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18604};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RenderGraphSettings_Version  ___m_Version;

/// [SerializeField]
/// [Tooltip("When enabled, URP does not use the Render Graph API to construct and execute the frame. Use this option only for compatibility purposes.")]
/// [RecreatePipelineOnChange]
/// @brief Field m_EnableRenderCompatibilityMode, offset: 0x14, size: 0x1, def value: None
 bool  ___m_EnableRenderCompatibilityMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphSettings, ___m_EnableRenderCompatibilityMode) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::RenderGraphSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
