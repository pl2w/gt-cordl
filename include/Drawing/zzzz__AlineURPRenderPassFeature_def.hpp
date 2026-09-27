#pragma once
// IWYU pragma private; include "Drawing/AlineURPRenderPassFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(AlineURPRenderPassFeature)
namespace Drawing {
class AlineURPRenderPassFeature_AlineURPRenderPass;
}
namespace Drawing {
class AlineURPRenderPass_AlineURPRenderPassFeature_PassData;
}
namespace Drawing {
class AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace Drawing {
class AlineURPRenderPassFeature;
}
namespace Drawing {
class AlineURPRenderPassFeature_AlineURPRenderPass;
}
namespace Drawing {
class AlineURPRenderPass_AlineURPRenderPassFeature_PassData;
}
namespace Drawing {
class AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::Drawing::AlineURPRenderPassFeature*);
MARK_REF_T(::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*);
MARK_REF_T(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*);
MARK_REF_T(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::Drawing::AlineURPRenderPassFeature*, "Drawing", "AlineURPRenderPassFeature");
DEFINE_IL2CPP_CLASS(::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*, "Drawing", "AlineURPRenderPassFeature/AlineURPRenderPass");
DEFINE_IL2CPP_CLASS(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*, "Drawing", "AlineURPRenderPassFeature/AlineURPRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0*, "Drawing", "AlineURPRenderPassFeature/AlineURPRenderPass/<>c__DisplayClass4_0");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace Drawing {
// Is value type: false
// CS Name: Drawing.AlineURPRenderPassFeature
class CORDL_TYPE AlineURPRenderPassFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
using AlineURPRenderPass = ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass;

/// @brief Field m_ScriptablePass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScriptablePass, put=__cordl_internal_set_m_ScriptablePass)) ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*  m_ScriptablePass;

/// @brief Method AddRenderPasses, addr 0x55a7b28, size 0x20, virtual false, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer) ;

/// @brief Method AddRenderPasses, addr 0x55a7b08, size 0x20, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x55a79ec, size 0x74, virtual true, abstract: false, final false
inline void Create() ;

static inline ::Drawing::AlineURPRenderPassFeature* New_ctor() ;

constexpr ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass* const& __cordl_internal_get_m_ScriptablePass() const;

constexpr ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*& __cordl_internal_get_m_ScriptablePass() ;

constexpr void __cordl_internal_set_m_ScriptablePass(::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*  value) ;

/// @brief Method .ctor, addr 0x55a7b48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlineURPRenderPassFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPassFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlineURPRenderPassFeature(AlineURPRenderPassFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPassFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlineURPRenderPassFeature(AlineURPRenderPassFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27691};

/// @brief Field m_ScriptablePass, offset: 0x20, size: 0x8, def value: None
 ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass*  ___m_ScriptablePass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::AlineURPRenderPassFeature, ___m_ScriptablePass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::AlineURPRenderPassFeature) == 0x28, "Size mismatch!");

} // namespace end def Drawing
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace Drawing {
// Is value type: false
// CS Name: Drawing.AlineURPRenderPassFeature/AlineURPRenderPass
class CORDL_TYPE AlineURPRenderPassFeature_AlineURPRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData;

using __c__DisplayClass4_0 = ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0;

/// [Obsolete]
/// @brief Method Configure, addr 0x55a7b50, size 0x4, virtual true, abstract: false, final false
inline void Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor) ;

/// [Obsolete]
/// @brief Method Execute, addr 0x55a7b54, size 0x8c, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method FrameCleanup, addr 0x55a811c, size 0x4, virtual true, abstract: false, final false
inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

static inline ::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x55a7be0, size 0x534, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method .ctor, addr 0x55a7a60, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlineURPRenderPassFeature_AlineURPRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPassFeature_AlineURPRenderPass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlineURPRenderPassFeature_AlineURPRenderPass(AlineURPRenderPassFeature_AlineURPRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPassFeature_AlineURPRenderPass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlineURPRenderPassFeature_AlineURPRenderPass(AlineURPRenderPassFeature_AlineURPRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::AlineURPRenderPassFeature_AlineURPRenderPass) == 0xb8, "Size mismatch!");

} // namespace end def Drawing
// [CompilerGenerated]
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.AlineURPRenderPassFeature/AlineURPRenderPass/<>c__DisplayClass4_0
class CORDL_TYPE AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field allowDisablingWireframe, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowDisablingWireframe, put=__cordl_internal_set_allowDisablingWireframe)) bool  allowDisablingWireframe;

static inline ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__0, addr 0x55a8128, size 0xcc, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__0(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

constexpr bool const& __cordl_internal_get_allowDisablingWireframe() const;

constexpr bool& __cordl_internal_get_allowDisablingWireframe() ;

constexpr void __cordl_internal_set_allowDisablingWireframe(bool  value) ;

/// @brief Method .ctor, addr 0x55a8114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0(AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0(AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27689};

/// @brief Field allowDisablingWireframe, offset: 0x10, size: 0x1, def value: None
 bool  ___allowDisablingWireframe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0, ___allowDisablingWireframe) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.AlineURPRenderPassFeature/AlineURPRenderPass/PassData
class CORDL_TYPE AlineURPRenderPass_AlineURPRenderPassFeature_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field camera, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

static inline ::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera() ;

constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x55a8120, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlineURPRenderPass_AlineURPRenderPassFeature_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPass_AlineURPRenderPassFeature_PassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlineURPRenderPass_AlineURPRenderPassFeature_PassData(AlineURPRenderPass_AlineURPRenderPassFeature_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlineURPRenderPass_AlineURPRenderPassFeature_PassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlineURPRenderPass_AlineURPRenderPassFeature_PassData(AlineURPRenderPass_AlineURPRenderPassFeature_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27688};

/// @brief Field camera, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData, ___camera) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Drawing::AlineURPRenderPass_AlineURPRenderPassFeature_PassData) == 0x18, "Size mismatch!");

} // namespace end def Drawing
