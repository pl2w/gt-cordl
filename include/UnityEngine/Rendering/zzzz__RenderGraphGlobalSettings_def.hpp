#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphGlobalSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderGraphGlobalSettings_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphGlobalSettings)
namespace GlobalNamespace {
struct RenderGraphGlobalSettings_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderGraphGlobalSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphGlobalSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphGlobalSettings*, "UnityEngine.Rendering", "RenderGraphGlobalSettings");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "Render Graph", Order = 50)]
// [ElementInfo(Order = 0)]
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphGlobalSettings::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphGlobalSettings
class CORDL_TYPE RenderGraphGlobalSettings : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::RenderGraphGlobalSettings_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

 __declspec(property(get=get_enableCompilationCaching, put=set_enableCompilationCaching)) bool  enableCompilationCaching;

 __declspec(property(get=get_enableValidityChecks, put=set_enableValidityChecks)) bool  enableValidityChecks;

/// @brief Field m_EnableCompilationCaching, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableCompilationCaching, put=__cordl_internal_set_m_EnableCompilationCaching)) bool  m_EnableCompilationCaching;

/// @brief Field m_EnableValidityChecks, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableValidityChecks, put=__cordl_internal_set_m_EnableValidityChecks)) bool  m_EnableValidityChecks;

/// @brief Field m_version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) ::GlobalNamespace::RenderGraphGlobalSettings_Version  m_version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

static inline ::UnityEngine::Rendering::RenderGraphGlobalSettings* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0xb1738f4, size 0x8, virtual true, abstract: false, final true
inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0xb1738fc, size 0x8, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr bool const& __cordl_internal_get_m_EnableCompilationCaching() const;

constexpr bool& __cordl_internal_get_m_EnableCompilationCaching() ;

constexpr bool const& __cordl_internal_get_m_EnableValidityChecks() const;

constexpr bool& __cordl_internal_get_m_EnableValidityChecks() ;

constexpr ::GlobalNamespace::RenderGraphGlobalSettings_Version const& __cordl_internal_get_m_version() const;

constexpr ::GlobalNamespace::RenderGraphGlobalSettings_Version& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_m_EnableCompilationCaching(bool  value) ;

constexpr void __cordl_internal_set_m_EnableValidityChecks(bool  value) ;

constexpr void __cordl_internal_set_m_version(::GlobalNamespace::RenderGraphGlobalSettings_Version  value) ;

/// @brief Method .ctor, addr 0xb1739fc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableCompilationCaching, addr 0xb173904, size 0x8, virtual false, abstract: false, final false
inline bool get_enableCompilationCaching() ;

/// @brief Method get_enableValidityChecks, addr 0xb173980, size 0x8, virtual false, abstract: false, final false
inline bool get_enableValidityChecks() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Method set_enableCompilationCaching, addr 0xb17390c, size 0x74, virtual false, abstract: false, final false
inline void set_enableCompilationCaching(bool  value) ;

/// @brief Method set_enableValidityChecks, addr 0xb173988, size 0x74, virtual false, abstract: false, final false
inline void set_enableValidityChecks(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphGlobalSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphGlobalSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderGraphGlobalSettings(RenderGraphGlobalSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphGlobalSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderGraphGlobalSettings(RenderGraphGlobalSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16905};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RenderGraphGlobalSettings_Version  ___m_version;

/// [RecreatePipelineOnChange]
/// [SerializeField]
/// [Tooltip("Enable caching of render graph compilation from one frame to another.")]
/// @brief Field m_EnableCompilationCaching, offset: 0x14, size: 0x1, def value: None
 bool  ___m_EnableCompilationCaching;

/// [RecreatePipelineOnChange]
/// [SerializeField]
/// [Tooltip("Enable validity checks of render graph in Editor and Development mode. Always disabled in Release build.")]
/// @brief Field m_EnableValidityChecks, offset: 0x15, size: 0x1, def value: None
 bool  ___m_EnableValidityChecks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_EnableCompilationCaching) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_EnableValidityChecks) == 0x15, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphGlobalSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
