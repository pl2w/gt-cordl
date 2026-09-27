#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckHeadsetCaptureRenderPass)
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass_PassData;
}
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass___c;
}
namespace Liv::Lck {
class LckHeadsetCamera;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass;
}
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass_PassData;
}
namespace Liv::Lck::Rendering {
class LckHeadsetCaptureRenderPass___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*);
MARK_REF_T(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*);
MARK_REF_T(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*, "Liv.Lck.Rendering", "LckHeadsetCaptureRenderPass");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*, "Liv.Lck.Rendering", "LckHeadsetCaptureRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*, "Liv.Lck.Rendering", "LckHeadsetCaptureRenderPass/<>c");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckHeadsetCaptureRenderPass
class CORDL_TYPE LckHeadsetCaptureRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData;

using __c = ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c;

/// @brief Field BlitTextureId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BlitTextureId, put=setStaticF_BlitTextureId)) int32_t  BlitTextureId;

/// @brief Field _cachedTargetHandle, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTargetHandle, put=__cordl_internal_set__cachedTargetHandle)) ::UnityEngine::Rendering::RTHandle*  _cachedTargetHandle;

/// @brief Field _cachedTargetRT, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTargetRT, put=__cordl_internal_set__cachedTargetRT)) ::UnityW<::UnityEngine::RenderTexture>  _cachedTargetRT;

/// @brief Field _camera, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _headsetCamera, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetCamera, put=__cordl_internal_set__headsetCamera)) ::UnityW<::Liv::Lck::LckHeadsetCamera>  _headsetCamera;

/// @brief Method Dispose, addr 0x9d4057c, size 0x48, virtual false, abstract: false, final false
inline void Dispose() ;

/// [Obsolete("This pass uses RecordRenderGraph on Unity 6+.", false)]
/// @brief Method Execute, addr 0x9d40ee0, size 0x4, virtual true, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

static inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x9d40834, size 0x6ac, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method Setup, addr 0x9d407fc, size 0x30, virtual false, abstract: false, final false
inline void Setup(::Liv::Lck::LckHeadsetCamera*  headsetCamera, ::UnityEngine::Camera*  camera) ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__cachedTargetHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__cachedTargetHandle() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cachedTargetRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cachedTargetRT() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& __cordl_internal_get__headsetCamera() const;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& __cordl_internal_get__headsetCamera() ;

constexpr void __cordl_internal_set__cachedTargetHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__cachedTargetRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value) ;

/// @brief Method .ctor, addr 0x9d40514, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_BlitTextureId() ;

static inline void setStaticF_BlitTextureId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCaptureRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCaptureRenderPass(LckHeadsetCaptureRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCaptureRenderPass(LckHeadsetCaptureRenderPass const& ) = delete;

/// @brief Field LegacyBlitPassIndex offset 0xffffffff size 0x4
static constexpr int32_t  LegacyBlitPassIndex{static_cast<int32_t>(0x0)};

/// @brief Field PassName offset 0xffffffff size 0x8
static constexpr ::ConstString  PassName{u"LCK Headset Capture"};

/// @brief Field ShaderPassIndex offset 0xffffffff size 0x4
static constexpr int32_t  ShaderPassIndex{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24864};

/// @brief Field _headsetCamera, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckHeadsetCamera>  ____headsetCamera;

/// @brief Field _camera, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _cachedTargetHandle, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____cachedTargetHandle;

/// @brief Field _cachedTargetRT, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____cachedTargetRT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass, ____headsetCamera) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass, ____camera) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass, ____cachedTargetHandle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass, ____cachedTargetRT) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass) == 0xd8, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckHeadsetCaptureRenderPass/<>c
class CORDL_TYPE LckHeadsetCaptureRenderPass___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__10_0;

static inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__10_0, addr 0x9d40fc4, size 0x194, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__10_0(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method .ctor, addr 0x9d40fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c*  value) ;

static inline void setStaticF___9__10_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCaptureRenderPass___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCaptureRenderPass___c(LckHeadsetCaptureRenderPass___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCaptureRenderPass___c(LckHeadsetCaptureRenderPass___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace Liv::Lck::Rendering {
// Is value type: false
// CS Name: Liv.Lck.Rendering.LckHeadsetCaptureRenderPass/PassData
class CORDL_TYPE LckHeadsetCaptureRenderPass_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field Destination, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Destination, put=__cordl_internal_set_Destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  Destination;

/// @brief Field Material, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::Material>  Material;

/// @brief Field Source, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  Source;

static inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_Destination() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_Destination() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_Material() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_Source() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_Destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_Source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method .ctor, addr 0x9d40f4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetCaptureRenderPass_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass_PassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetCaptureRenderPass_PassData(LckHeadsetCaptureRenderPass_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetCaptureRenderPass_PassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetCaptureRenderPass_PassData(LckHeadsetCaptureRenderPass_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24862};

/// @brief Field Source, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___Source;

/// @brief Field Destination, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___Destination;

/// @brief Field Material, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___Material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData, ___Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData, ___Destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData, ___Material) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass_PassData) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Rendering
