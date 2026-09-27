#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingDebuggerRuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderingDebuggerRuntimeResources_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingDebuggerRuntimeResources)
namespace GlobalNamespace {
struct RenderingDebuggerRuntimeResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderingDebuggerRuntimeResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*, "UnityEngine.Rendering", "RenderingDebuggerRuntimeResources");
// [HideInInspector]
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "R : Rendering Debugger Resources", Order = 100)]
// [ElementInfo(Order = 0)]
// Dependencies System.Object, UnityEngine.Rendering.RenderingDebuggerRuntimeResources::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderingDebuggerRuntimeResources
class CORDL_TYPE RenderingDebuggerRuntimeResources : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

/// @brief Field m_version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version  m_version;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

static inline ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0xb173cdc, size 0x8, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version const& __cordl_internal_get_m_version() const;

constexpr ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_m_version(::GlobalNamespace::RenderingDebuggerRuntimeResources_Version  value) ;

/// @brief Method .ctor, addr 0xb173ce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderingDebuggerRuntimeResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderingDebuggerRuntimeResources", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderingDebuggerRuntimeResources(RenderingDebuggerRuntimeResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderingDebuggerRuntimeResources", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderingDebuggerRuntimeResources(RenderingDebuggerRuntimeResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16918};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RenderingDebuggerRuntimeResources_Version  ___m_version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources, ___m_version) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
