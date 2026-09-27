#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerResources_Version_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawerResources)
namespace GlobalNamespace {
struct GPUResidentDrawerResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerResources*, "UnityEngine.Rendering", "GPUResidentDrawerResources");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "R: GPU Resident Drawers", Order = 1000)]
// [HideInInspector]
// Dependencies System.Object, UnityEngine.Rendering.GPUResidentDrawerResources::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerResources
class CORDL_TYPE GPUResidentDrawerResources : public ::System::Object {
public:
// Declarations
using Version = ::GlobalNamespace::GPUResidentDrawerResources_Version;

 __declspec(property(get=UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t  UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

 __declspec(property(get=get_debugOccluderPS)) ::UnityW<::UnityEngine::Shader>  debugOccluderPS;

 __declspec(property(get=get_debugOcclusionTestPS)) ::UnityW<::UnityEngine::Shader>  debugOcclusionTestPS;

 __declspec(property(get=get_instanceDataBufferCopyKernels)) ::UnityW<::UnityEngine::ComputeShader>  instanceDataBufferCopyKernels;

 __declspec(property(get=get_instanceDataBufferUploadKernels)) ::UnityW<::UnityEngine::ComputeShader>  instanceDataBufferUploadKernels;

 __declspec(property(get=get_instanceOcclusionCullingKernels)) ::UnityW<::UnityEngine::ComputeShader>  instanceOcclusionCullingKernels;

/// @brief Field m_DebugOccluderPS, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOccluderPS, put=__cordl_internal_set_m_DebugOccluderPS)) ::UnityW<::UnityEngine::Shader>  m_DebugOccluderPS;

/// @brief Field m_DebugOcclusionTestPS, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOcclusionTestPS, put=__cordl_internal_set_m_DebugOcclusionTestPS)) ::UnityW<::UnityEngine::Shader>  m_DebugOcclusionTestPS;

/// @brief Field m_InstanceDataBufferCopyKernels, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceDataBufferCopyKernels, put=__cordl_internal_set_m_InstanceDataBufferCopyKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_InstanceDataBufferCopyKernels;

/// @brief Field m_InstanceDataBufferUploadKernels, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceDataBufferUploadKernels, put=__cordl_internal_set_m_InstanceDataBufferUploadKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_InstanceDataBufferUploadKernels;

/// @brief Field m_InstanceOcclusionCullingKernels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceOcclusionCullingKernels, put=__cordl_internal_set_m_InstanceOcclusionCullingKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_InstanceOcclusionCullingKernels;

/// @brief Field m_OccluderDepthPyramidKernels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OccluderDepthPyramidKernels, put=__cordl_internal_set_m_OccluderDepthPyramidKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_OccluderDepthPyramidKernels;

/// @brief Field m_OcclusionCullingDebugKernels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionCullingDebugKernels, put=__cordl_internal_set_m_OcclusionCullingDebugKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_OcclusionCullingDebugKernels;

/// @brief Field m_TransformUpdaterKernels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformUpdaterKernels, put=__cordl_internal_set_m_TransformUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_TransformUpdaterKernels;

/// @brief Field m_Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::GPUResidentDrawerResources_Version  m_Version;

/// @brief Field m_WindDataUpdaterKernels, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WindDataUpdaterKernels, put=__cordl_internal_set_m_WindDataUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader>  m_WindDataUpdaterKernels;

 __declspec(property(get=get_occluderDepthPyramidKernels)) ::UnityW<::UnityEngine::ComputeShader>  occluderDepthPyramidKernels;

 __declspec(property(get=get_occlusionCullingDebugKernels)) ::UnityW<::UnityEngine::ComputeShader>  occlusionCullingDebugKernels;

 __declspec(property(get=get_transformUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader>  transformUpdaterKernels;

 __declspec(property(get=get_windDataUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader>  windDataUpdaterKernels;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr operator  ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

static inline ::UnityEngine::Rendering::GPUResidentDrawerResources* New_ctor() ;

/// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0xb1ef9d8, size 0x8, virtual true, abstract: false, final true
inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOccluderPS() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOccluderPS() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOcclusionTestPS() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOcclusionTestPS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceDataBufferCopyKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceDataBufferCopyKernels() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceDataBufferUploadKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceDataBufferUploadKernels() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceOcclusionCullingKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceOcclusionCullingKernels() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OccluderDepthPyramidKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OccluderDepthPyramidKernels() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OcclusionCullingDebugKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OcclusionCullingDebugKernels() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_TransformUpdaterKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_TransformUpdaterKernels() ;

constexpr ::GlobalNamespace::GPUResidentDrawerResources_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::GPUResidentDrawerResources_Version& __cordl_internal_get_m_Version() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_WindDataUpdaterKernels() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_WindDataUpdaterKernels() ;

constexpr void __cordl_internal_set_m_DebugOccluderPS(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_DebugOcclusionTestPS(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_InstanceDataBufferCopyKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_InstanceDataBufferUploadKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_InstanceOcclusionCullingKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_OccluderDepthPyramidKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_OcclusionCullingDebugKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_TransformUpdaterKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::GPUResidentDrawerResources_Version  value) ;

constexpr void __cordl_internal_set_m_WindDataUpdaterKernels(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0xb1efa28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_debugOccluderPS, addr 0xb1efa20, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_debugOccluderPS() ;

/// @brief Method get_debugOcclusionTestPS, addr 0xb1efa18, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_debugOcclusionTestPS() ;

/// @brief Method get_instanceDataBufferCopyKernels, addr 0xb1ef9e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_instanceDataBufferCopyKernels() ;

/// @brief Method get_instanceDataBufferUploadKernels, addr 0xb1ef9e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_instanceDataBufferUploadKernels() ;

/// @brief Method get_instanceOcclusionCullingKernels, addr 0xb1efa08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_instanceOcclusionCullingKernels() ;

/// @brief Method get_occluderDepthPyramidKernels, addr 0xb1efa00, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_occluderDepthPyramidKernels() ;

/// @brief Method get_occlusionCullingDebugKernels, addr 0xb1efa10, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_occlusionCullingDebugKernels() ;

/// @brief Method get_transformUpdaterKernels, addr 0xb1ef9f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_transformUpdaterKernels() ;

/// @brief Method get_windDataUpdaterKernels, addr 0xb1ef9f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_windDataUpdaterKernels() ;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerResources", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerResources(GPUResidentDrawerResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerResources", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerResources(GPUResidentDrawerResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26549};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GPUResidentDrawerResources_Version  ___m_Version;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceDataBufferCopyKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_InstanceDataBufferCopyKernels, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_InstanceDataBufferCopyKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceDataBufferUploadKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_InstanceDataBufferUploadKernels, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_InstanceDataBufferUploadKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceTransformUpdateKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_TransformUpdaterKernels, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_TransformUpdaterKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceWindDataUpdateKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_WindDataUpdaterKernels, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_WindDataUpdaterKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/OccluderDepthPyramidKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_OccluderDepthPyramidKernels, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_OccluderDepthPyramidKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceOcclusionCullingKernels.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_InstanceOcclusionCullingKernels, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_InstanceOcclusionCullingKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/OcclusionCullingDebug.compute", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_OcclusionCullingDebugKernels, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_OcclusionCullingDebugKernels;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/DebugOcclusionTest.shader", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_DebugOcclusionTestPS, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_DebugOcclusionTestPS;

/// [SerializeField]
/// [ResourcePath("Runtime/RenderPipelineResources/GPUDriven/DebugOccluder.shader", (UnityEngine.Rendering.SearchType)0)]
/// @brief Field m_DebugOccluderPS, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___m_DebugOccluderPS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceDataBufferCopyKernels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceDataBufferUploadKernels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_TransformUpdaterKernels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_WindDataUpdaterKernels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_OccluderDepthPyramidKernels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceOcclusionCullingKernels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_OcclusionCullingDebugKernels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_DebugOcclusionTestPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_DebugOccluderPS) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerResources) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
