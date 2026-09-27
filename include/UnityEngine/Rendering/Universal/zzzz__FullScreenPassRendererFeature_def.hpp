#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FullScreenPassRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_InjectionPoint_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_Version_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FullScreenPassRendererFeature)
namespace GlobalNamespace {
struct FullScreenPassRendererFeature_InjectionPoint;
}
namespace GlobalNamespace {
struct FullScreenPassRendererFeature_Version;
}
namespace GlobalNamespace {
struct RenderingLayerUtils_Event;
}
namespace GlobalNamespace {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature_FullScreenRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature___c;
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
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature_FullScreenRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/FullScreenRenderPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/FullScreenRenderPass/CopyPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/FullScreenRenderPass/MainPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/FullScreenRenderPass/<>c");
// [MovedFrom("")]
// Dependencies UnityEngine.Rendering.Universal.FullScreenPassRendererFeature::InjectionPoint, UnityEngine.Rendering.Universal.FullScreenPassRendererFeature::Version, UnityEngine.Rendering.Universal.ScriptableRenderPassInput, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature
class CORDL_TYPE FullScreenPassRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
using InjectionPoint = ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint;

using Version = ::GlobalNamespace::FullScreenPassRendererFeature_Version;

using FullScreenRenderPass = ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass;

/// @brief Field bindDepthStencilAttachment, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_bindDepthStencilAttachment, put=__cordl_internal_set_bindDepthStencilAttachment)) bool  bindDepthStencilAttachment;

/// @brief Field fetchColorBuffer, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fetchColorBuffer, put=__cordl_internal_set_fetchColorBuffer)) bool  fetchColorBuffer;

/// @brief Field injectionPoint, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_injectionPoint, put=__cordl_internal_set_injectionPoint)) ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint  injectionPoint;

/// @brief Field m_FullScreenPass, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FullScreenPass, put=__cordl_internal_set_m_FullScreenPass)) ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*  m_FullScreenPass;

/// @brief Field m_Version, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Version, put=__cordl_internal_set_m_Version)) ::GlobalNamespace::FullScreenPassRendererFeature_Version  m_Version;

/// @brief Field passIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_passIndex, put=__cordl_internal_set_passIndex)) int32_t  passIndex;

/// @brief Field passMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_passMaterial, put=__cordl_internal_set_passMaterial)) ::UnityW<::UnityEngine::Material>  passMaterial;

/// @brief Field requirements, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_requirements, put=__cordl_internal_set_requirements)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput  requirements;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddRenderPasses, addr 0xb28c7e0, size 0x2d4, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0xb28c6b8, size 0x74, virtual true, abstract: false, final false
inline void Create() ;

/// @brief Method Dispose, addr 0xb28caf8, size 0x24, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature* New_ctor() ;

/// @brief Method RequireRenderingLayers, addr 0xb28c7cc, size 0x14, virtual true, abstract: false, final false
inline bool RequireRenderingLayers(bool  isDeferred, bool  needsGBufferAccurateNormals, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  atEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>  maskSize) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb28cb50, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb28cb34, size 0x1c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UpgradeIfNeeded, addr 0xb28cb30, size 0x4, virtual false, abstract: false, final false
inline void UpgradeIfNeeded() ;

constexpr bool const& __cordl_internal_get_bindDepthStencilAttachment() const;

constexpr bool& __cordl_internal_get_bindDepthStencilAttachment() ;

constexpr bool const& __cordl_internal_get_fetchColorBuffer() const;

constexpr bool& __cordl_internal_get_fetchColorBuffer() ;

constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint const& __cordl_internal_get_injectionPoint() const;

constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint& __cordl_internal_get_injectionPoint() ;

constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* const& __cordl_internal_get_m_FullScreenPass() const;

constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*& __cordl_internal_get_m_FullScreenPass() ;

constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version const& __cordl_internal_get_m_Version() const;

constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version& __cordl_internal_get_m_Version() ;

constexpr int32_t const& __cordl_internal_get_passIndex() const;

constexpr int32_t& __cordl_internal_get_passIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_passMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_passMaterial() ;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& __cordl_internal_get_requirements() const;

constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& __cordl_internal_get_requirements() ;

constexpr void __cordl_internal_set_bindDepthStencilAttachment(bool  value) ;

constexpr void __cordl_internal_set_fetchColorBuffer(bool  value) ;

constexpr void __cordl_internal_set_injectionPoint(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint  value) ;

constexpr void __cordl_internal_set_m_FullScreenPass(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*  value) ;

constexpr void __cordl_internal_set_m_Version(::GlobalNamespace::FullScreenPassRendererFeature_Version  value) ;

constexpr void __cordl_internal_set_passIndex(int32_t  value) ;

constexpr void __cordl_internal_set_passMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_requirements(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput  value) ;

/// @brief Method .ctor, addr 0xb28cb68, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenPassRendererFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenPassRendererFeature(FullScreenPassRendererFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenPassRendererFeature(FullScreenPassRendererFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18565};

/// @brief Field injectionPoint, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint  ___injectionPoint;

/// @brief Field fetchColorBuffer, offset: 0x20, size: 0x1, def value: None
 bool  ___fetchColorBuffer;

/// @brief Field requirements, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput  ___requirements;

/// @brief Field passMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___passMaterial;

/// @brief Field passIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___passIndex;

/// @brief Field bindDepthStencilAttachment, offset: 0x34, size: 0x1, def value: None
 bool  ___bindDepthStencilAttachment;

/// @brief Field m_FullScreenPass, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*  ___m_FullScreenPass;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Version, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::FullScreenPassRendererFeature_Version  ___m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___injectionPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___fetchColorBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___requirements) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___passMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___passIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___bindDepthStencilAttachment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___m_FullScreenPass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___m_Version) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass
class CORDL_TYPE FullScreenPassRendererFeature_FullScreenRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using CopyPassData = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;

using MainPassData = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;

using __c = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c;

/// @brief Field m_BindDepthStencilAttachment, offset 0xc5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BindDepthStencilAttachment, put=__cordl_internal_set_m_BindDepthStencilAttachment)) bool  m_BindDepthStencilAttachment;

/// @brief Field m_CopiedColor, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CopiedColor, put=__cordl_internal_set_m_CopiedColor)) ::UnityEngine::Rendering::RTHandle*  m_CopiedColor;

/// @brief Field m_FetchActiveColor, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FetchActiveColor, put=__cordl_internal_set_m_FetchActiveColor)) bool  m_FetchActiveColor;

/// @brief Field m_Material, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Material, put=__cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material>  m_Material;

/// @brief Field m_PassIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PassIndex, put=__cordl_internal_set_m_PassIndex)) int32_t  m_PassIndex;

/// @brief Field s_SharedPropertyBlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SharedPropertyBlock, put=setStaticF_s_SharedPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  s_SharedPropertyBlock;

/// @brief Method Dispose, addr 0xb28cb1c, size 0x14, virtual false, abstract: false, final false
inline void Dispose() ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method Execute, addr 0xb28cee8, size 0x358, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method ExecuteCopyColorPass, addr 0xb28cc88, size 0x80, virtual false, abstract: false, final false
static inline void ExecuteCopyColorPass(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  sourceTexture) ;

/// @brief Method ExecuteMainPass, addr 0xb28cd08, size 0x1e0, virtual false, abstract: false, final false
static inline void ExecuteMainPass(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  sourceTexture, ::UnityEngine::Material*  material, int32_t  passIndex) ;

static inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* New_ctor(::StringW  passName) ;

/// [Obsolete("This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead.", false)]
/// @brief Method OnCameraSetup, addr 0xb28cb88, size 0x64, virtual true, abstract: false, final false
inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method ReAllocate, addr 0xb28cbec, size 0x9c, virtual false, abstract: false, final false
inline void ReAllocate(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method RecordRenderGraph, addr 0xb28d240, size 0xddc, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method SetupMembers, addr 0xb28cab4, size 0x44, virtual false, abstract: false, final false
inline void SetupMembers(::UnityEngine::Material*  material, int32_t  passIndex, bool  fetchActiveColor, bool  bindDepthStencilAttachment) ;

constexpr bool const& __cordl_internal_get_m_BindDepthStencilAttachment() const;

constexpr bool& __cordl_internal_get_m_BindDepthStencilAttachment() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CopiedColor() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CopiedColor() ;

constexpr bool const& __cordl_internal_get_m_FetchActiveColor() const;

constexpr bool& __cordl_internal_get_m_FetchActiveColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material() ;

constexpr int32_t const& __cordl_internal_get_m_PassIndex() const;

constexpr int32_t& __cordl_internal_get_m_PassIndex() ;

constexpr void __cordl_internal_set_m_BindDepthStencilAttachment(bool  value) ;

constexpr void __cordl_internal_set_m_CopiedColor(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_m_FetchActiveColor(bool  value) ;

constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_PassIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb28c72c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  passName) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_SharedPropertyBlock() ;

static inline void setStaticF_s_SharedPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenPassRendererFeature_FullScreenRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_FullScreenRenderPass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenPassRendererFeature_FullScreenRenderPass(FullScreenPassRendererFeature_FullScreenRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_FullScreenRenderPass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenPassRendererFeature_FullScreenRenderPass(FullScreenPassRendererFeature_FullScreenRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18563};

/// @brief Field m_Material, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_Material;

/// @brief Field m_PassIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___m_PassIndex;

/// @brief Field m_FetchActiveColor, offset: 0xc4, size: 0x1, def value: None
 bool  ___m_FetchActiveColor;

/// @brief Field m_BindDepthStencilAttachment, offset: 0xc5, size: 0x1, def value: None
 bool  ___m_BindDepthStencilAttachment;

/// @brief Field m_CopiedColor, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___m_CopiedColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_Material) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_PassIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_FetchActiveColor) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_BindDepthStencilAttachment) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_CopiedColor) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/<>c
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__14_0;

/// @brief Field <>9__14_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_1, put=setStaticF___9__14_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__14_1;

static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__14_0, addr 0xb28e118, size 0xac, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__14_0(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  rgContext) ;

/// @brief Method <RecordRenderGraph>b__14_1, addr 0xb28e1c4, size 0xc0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__14_1(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  rgContext) ;

/// @brief Method .ctor, addr 0xb28e110, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__14_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__14_1() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*  value) ;

static inline void setStaticF___9__14_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__14_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenRenderPass_FullScreenPassRendererFeature___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenRenderPass_FullScreenPassRendererFeature___c(FullScreenRenderPass_FullScreenPassRendererFeature___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenRenderPass_FullScreenPassRendererFeature___c(FullScreenRenderPass_FullScreenPassRendererFeature___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18562};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/MainPassData
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData : public ::System::Object {
public:
// Declarations
/// @brief Field inputTexture, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputTexture, put=__cordl_internal_set_inputTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputTexture;

/// @brief Field material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field passIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_passIndex, put=__cordl_internal_set_passIndex)) int32_t  passIndex;

static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputTexture() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputTexture() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr int32_t const& __cordl_internal_get_passIndex() const;

constexpr int32_t& __cordl_internal_get_passIndex() ;

constexpr void __cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_passIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb28e0a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData(FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData(FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18561};

/// @brief Field material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field passIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___passIndex;

/// @brief Field inputTexture, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___inputTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___passIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___inputTexture) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/CopyPassData
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData : public ::System::Object {
public:
// Declarations
/// @brief Field inputTexture, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputTexture, put=__cordl_internal_set_inputTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputTexture;

static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputTexture() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputTexture() ;

constexpr void __cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method .ctor, addr 0xb28e098, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData(FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData(FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18560};

/// @brief Field inputTexture, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___inputTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData, ___inputTexture) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
