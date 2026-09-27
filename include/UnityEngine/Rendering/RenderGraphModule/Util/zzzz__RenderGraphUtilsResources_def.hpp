#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtilsResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtilsResources_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtilsResources)
namespace GlobalNamespace {
struct RenderGraphUtilsResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtilsResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtilsResources");
// [HideInInspector]
// [Category("Resources/Render Graph Helper Function Resources")]
// [SupportedOnRenderPipeline(new[] {  })]
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources::Version
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources
class CORDL_TYPE RenderGraphUtilsResources : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::RenderGraphUtilsResources_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

 __declspec(property(get=get_coreCopyPS, put=set_coreCopyPS)) ::UnityW<::UnityEngine::Shader>  coreCopyPS;

/// @brief Field m_CoreCopyPS, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CoreCopyPS, put=__cordl_internal_set_m_CoreCopyPS)) ::UnityW<::UnityEngine::Shader>  m_CoreCopyPS;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::RenderGraphUtilsResources_Version  m_Version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0xb1c66a4, size 0x8, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_CoreCopyPS() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_CoreCopyPS() ;

constexpr ::GlobalNamespace::RenderGraphUtilsResources_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::RenderGraphUtilsResources_Version& __cordl_internal_get_m_Version() ;

constexpr void __cordl_internal_set_m_CoreCopyPS(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::RenderGraphUtilsResources_Version  value) ;

/// @brief Method .ctor, addr 0xb1c6728, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_coreCopyPS, addr 0xb1c66ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_coreCopyPS() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

/// @brief Method set_coreCopyPS, addr 0xb1c66b4, size 0x74, virtual false, abstract: false, final false
inline void set_coreCopyPS(::UnityEngine::Shader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphUtilsResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtilsResources", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderGraphUtilsResources(RenderGraphUtilsResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtilsResources", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderGraphUtilsResources(RenderGraphUtilsResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17218};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RenderGraphUtilsResources_Version  ___m_Version;

/// [SerializeField]
/// [ResourcePath("Shaders/CoreCopy.shader", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_CoreCopyPS, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_CoreCopyPS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources, ___m_CoreCopyPS) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::RenderGraphModule::Util
