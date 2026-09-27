#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TemporalAA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TemporalAA)
namespace GlobalNamespace {
struct TemporalAA_Settings;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
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
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_JitterFunc;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderKeywords;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_TaaPassData;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TemporalAA;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_JitterFunc;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderKeywords;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_TaaPassData;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA*);
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*);
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*);
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*);
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::TemporalAA___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA*, "UnityEngine.Rendering.Universal", "TemporalAA");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "UnityEngine.Rendering.Universal", "TemporalAA/JitterFunc");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*, "UnityEngine.Rendering.Universal", "TemporalAA/ShaderConstants");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*, "UnityEngine.Rendering.Universal", "TemporalAA/ShaderKeywords");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, "UnityEngine.Rendering.Universal", "TemporalAA/TaaPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::TemporalAA___c*, "UnityEngine.Rendering.Universal", "TemporalAA/<>c");
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Vector2
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA
class CORDL_TYPE TemporalAA : public ::System::Object {
public:
// Declarations
using Settings = ::GlobalNamespace::TemporalAA_Settings;

using JitterFunc = ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc;

using ShaderConstants = ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants;

using ShaderKeywords = ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords;

using TaaPassData = ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData;

using __c = ::UnityEngine::Rendering::Universal::TemporalAA___c;

/// @brief Field AccumulationFormatList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AccumulationFormatList, put=setStaticF_AccumulationFormatList)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>  AccumulationFormatList;

/// @brief Field s_JitterFunc, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_JitterFunc, put=setStaticF_s_JitterFunc)) ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*  s_JitterFunc;

/// @brief Field s_warnCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_warnCounter, put=setStaticF_s_warnCounter)) uint32_t  s_warnCounter;

/// @brief Field taaFilterOffsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_taaFilterOffsets, put=setStaticF_taaFilterOffsets)) ::ArrayW<::UnityEngine::Vector2>  taaFilterOffsets;

/// @brief Field taaFilterWeights, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_taaFilterWeights, put=setStaticF_taaFilterWeights)) ::ArrayW<float_t>  taaFilterWeights;

/// @brief Method CalculateFilterWeights, addr 0xb29fed8, size 0x1c8, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> CalculateFilterWeights(::by_ref<::GlobalNamespace::TemporalAA_Settings>  settings) ;

/// @brief Method CalculateJitter, addr 0xb29fe78, size 0x60, virtual false, abstract: false, final false
static inline void CalculateJitter(int32_t  frameIndex, ::by_ref<::UnityEngine::Vector2>  jitter, ::by_ref<bool>  allowScaling) ;

/// @brief Method CalculateJitterMatrix, addr 0xb29fd14, size 0x164, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 CalculateJitterMatrix(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*  jitterFunc) ;

/// @brief Method CalculateTaaFrameIndex, addr 0xb29f664, size 0x1c, virtual false, abstract: false, final false
static inline int32_t CalculateTaaFrameIndex(::by_ref<::GlobalNamespace::TemporalAA_Settings>  settings) ;

/// @brief Method ExecutePass, addr 0xb2a0588, size 0x540, virtual false, abstract: false, final false
static inline void ExecutePass(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  taaMaterial, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::RenderTexture*  motionVectors) ;

/// @brief Method Render, addr 0xb2a0ac8, size 0xc2c, virtual false, abstract: false, final false
static inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  taaMaterial, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  srcColor, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  srcDepth, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  srcMotionVectors, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  dstColor) ;

/// @brief Method TemporalAADescFromCameraDesc, addr 0xb2a00a0, size 0x214, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor TemporalAADescFromCameraDesc(::by_ref<::UnityEngine::RenderTextureDescriptor>  cameraDesc) ;

/// @brief Method ValidateAndWarn, addr 0xb2a02b4, size 0x2d4, virtual false, abstract: false, final false
static inline ::StringW ValidateAndWarn(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isSTPRequested) ;

static inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> getStaticF_AccumulationFormatList() ;

static inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* getStaticF_s_JitterFunc() ;

static inline uint32_t getStaticF_s_warnCounter() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_taaFilterOffsets() ;

static inline ::ArrayW<float_t> getStaticF_taaFilterWeights() ;

static inline void setStaticF_AccumulationFormatList(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>  value) ;

static inline void setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*  value) ;

static inline void setStaticF_s_warnCounter(uint32_t  value) ;

static inline void setStaticF_taaFilterOffsets(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_taaFilterWeights(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA(TemporalAA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA(TemporalAA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/<>c
class CORDL_TYPE TemporalAA___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::TemporalAA___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__17_0;

/// @brief Field <>9__17_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_1, put=setStaticF___9__17_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__17_1;

static inline ::UnityEngine::Rendering::Universal::TemporalAA___c* New_ctor() ;

/// @brief Method <Render>b__17_0, addr 0xb2a1d90, size 0x310, virtual false, abstract: false, final false
inline void _Render_b__17_0(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <Render>b__17_1, addr 0xb2a20a0, size 0x108, virtual false, abstract: false, final false
inline void _Render_b__17_1(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0xb2a1d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::TemporalAA___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__17_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__17_1() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::TemporalAA___c*  value) ;

static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__17_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA___c(TemporalAA___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA___c(TemporalAA___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18627};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/TaaPassData
class CORDL_TYPE TemporalAA_TaaPassData : public ::System::Object {
public:
// Declarations
/// @brief Field dstTex, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_dstTex, put=__cordl_internal_set_dstTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  dstTex;

/// @brief Field material, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field passIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_passIndex, put=__cordl_internal_set_passIndex)) int32_t  passIndex;

/// @brief Field srcColorTex, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcColorTex, put=__cordl_internal_set_srcColorTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  srcColorTex;

/// @brief Field srcDepthTex, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcDepthTex, put=__cordl_internal_set_srcDepthTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  srcDepthTex;

/// @brief Field srcMotionVectorTex, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcMotionVectorTex, put=__cordl_internal_set_srcMotionVectorTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  srcMotionVectorTex;

/// @brief Field srcTaaAccumTex, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_srcTaaAccumTex, put=__cordl_internal_set_srcTaaAccumTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  srcTaaAccumTex;

/// @brief Field taaAlphaOutput, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_taaAlphaOutput, put=__cordl_internal_set_taaAlphaOutput)) bool  taaAlphaOutput;

/// @brief Field taaFilterWeights, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_taaFilterWeights, put=__cordl_internal_set_taaFilterWeights)) ::ArrayW<float_t>  taaFilterWeights;

/// @brief Field taaFrameInfluence, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_taaFrameInfluence, put=__cordl_internal_set_taaFrameInfluence)) float_t  taaFrameInfluence;

/// @brief Field taaLowPrecisionSource, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_taaLowPrecisionSource, put=__cordl_internal_set_taaLowPrecisionSource)) bool  taaLowPrecisionSource;

/// @brief Field taaVarianceClampScale, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_taaVarianceClampScale, put=__cordl_internal_set_taaVarianceClampScale)) float_t  taaVarianceClampScale;

static inline ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dstTex() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dstTex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr int32_t const& __cordl_internal_get_passIndex() const;

constexpr int32_t& __cordl_internal_get_passIndex() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcColorTex() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcColorTex() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcDepthTex() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcDepthTex() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcMotionVectorTex() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcMotionVectorTex() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcTaaAccumTex() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcTaaAccumTex() ;

constexpr bool const& __cordl_internal_get_taaAlphaOutput() const;

constexpr bool& __cordl_internal_get_taaAlphaOutput() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_taaFilterWeights() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_taaFilterWeights() ;

constexpr float_t const& __cordl_internal_get_taaFrameInfluence() const;

constexpr float_t& __cordl_internal_get_taaFrameInfluence() ;

constexpr bool const& __cordl_internal_get_taaLowPrecisionSource() const;

constexpr bool& __cordl_internal_get_taaLowPrecisionSource() ;

constexpr float_t const& __cordl_internal_get_taaVarianceClampScale() const;

constexpr float_t& __cordl_internal_get_taaVarianceClampScale() ;

constexpr void __cordl_internal_set_dstTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_passIndex(int32_t  value) ;

constexpr void __cordl_internal_set_srcColorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_srcDepthTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_srcMotionVectorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_srcTaaAccumTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_taaAlphaOutput(bool  value) ;

constexpr void __cordl_internal_set_taaFilterWeights(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_taaFrameInfluence(float_t  value) ;

constexpr void __cordl_internal_set_taaLowPrecisionSource(bool  value) ;

constexpr void __cordl_internal_set_taaVarianceClampScale(float_t  value) ;

/// @brief Method .ctor, addr 0xb2a1d18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA_TaaPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_TaaPassData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA_TaaPassData(TemporalAA_TaaPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_TaaPassData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA_TaaPassData(TemporalAA_TaaPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18626};

/// @brief Field dstTex, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___dstTex;

/// @brief Field srcColorTex, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___srcColorTex;

/// @brief Field srcDepthTex, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___srcDepthTex;

/// @brief Field srcMotionVectorTex, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___srcMotionVectorTex;

/// @brief Field srcTaaAccumTex, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___srcTaaAccumTex;

/// @brief Field material, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field passIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___passIndex;

/// @brief Field taaFrameInfluence, offset: 0x6c, size: 0x4, def value: None
 float_t  ___taaFrameInfluence;

/// @brief Field taaVarianceClampScale, offset: 0x70, size: 0x4, def value: None
 float_t  ___taaVarianceClampScale;

/// @brief Field taaFilterWeights, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ___taaFilterWeights;

/// @brief Field taaLowPrecisionSource, offset: 0x80, size: 0x1, def value: None
 bool  ___taaLowPrecisionSource;

/// @brief Field taaAlphaOutput, offset: 0x81, size: 0x1, def value: None
 bool  ___taaAlphaOutput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___dstTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcColorTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcDepthTex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcMotionVectorTex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcTaaAccumTex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___passIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaFrameInfluence) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaVarianceClampScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaFilterWeights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaLowPrecisionSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaAlphaOutput) == 0x81, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/JitterFunc
class CORDL_TYPE TemporalAA_JitterFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb2a1c2c, size 0xc8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  frameIndex, ::by_ref<::UnityEngine::Vector2>  jitter, ::by_ref<bool>  allowScaling, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb2a1cf4, size 0x24, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::UnityEngine::Vector2>  jitter, ::by_ref<bool>  allowScaling, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb2a1c18, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  frameIndex, ::by_ref<::UnityEngine::Vector2>  jitter, ::by_ref<bool>  allowScaling) ;

static inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb29fa1c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA_JitterFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_JitterFunc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA_JitterFunc(TemporalAA_JitterFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_JitterFunc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA_JitterFunc(TemporalAA_JitterFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18625};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/ShaderKeywords
class CORDL_TYPE TemporalAA_ShaderKeywords : public ::System::Object {
public:
// Declarations
/// @brief Field TAA_LOW_PRECISION_SOURCE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TAA_LOW_PRECISION_SOURCE, put=setStaticF_TAA_LOW_PRECISION_SOURCE)) ::StringW  TAA_LOW_PRECISION_SOURCE;

static inline ::StringW getStaticF_TAA_LOW_PRECISION_SOURCE() ;

static inline void setStaticF_TAA_LOW_PRECISION_SOURCE(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA_ShaderKeywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderKeywords", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA_ShaderKeywords(TemporalAA_ShaderKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderKeywords", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA_ShaderKeywords(TemporalAA_ShaderKeywords const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18623};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/ShaderConstants
class CORDL_TYPE TemporalAA_ShaderConstants : public ::System::Object {
public:
// Declarations
/// @brief Field _CameraDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CameraDepthTexture, put=setStaticF__CameraDepthTexture)) int32_t  _CameraDepthTexture;

/// @brief Field _TaaAccumulationTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TaaAccumulationTex, put=setStaticF__TaaAccumulationTex)) int32_t  _TaaAccumulationTex;

/// @brief Field _TaaFilterWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TaaFilterWeights, put=setStaticF__TaaFilterWeights)) int32_t  _TaaFilterWeights;

/// @brief Field _TaaFrameInfluence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TaaFrameInfluence, put=setStaticF__TaaFrameInfluence)) int32_t  _TaaFrameInfluence;

/// @brief Field _TaaMotionVectorTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TaaMotionVectorTex, put=setStaticF__TaaMotionVectorTex)) int32_t  _TaaMotionVectorTex;

/// @brief Field _TaaVarianceClampScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TaaVarianceClampScale, put=setStaticF__TaaVarianceClampScale)) int32_t  _TaaVarianceClampScale;

static inline int32_t getStaticF__CameraDepthTexture() ;

static inline int32_t getStaticF__TaaAccumulationTex() ;

static inline int32_t getStaticF__TaaFilterWeights() ;

static inline int32_t getStaticF__TaaFrameInfluence() ;

static inline int32_t getStaticF__TaaMotionVectorTex() ;

static inline int32_t getStaticF__TaaVarianceClampScale() ;

static inline void setStaticF__CameraDepthTexture(int32_t  value) ;

static inline void setStaticF__TaaAccumulationTex(int32_t  value) ;

static inline void setStaticF__TaaFilterWeights(int32_t  value) ;

static inline void setStaticF__TaaFrameInfluence(int32_t  value) ;

static inline void setStaticF__TaaMotionVectorTex(int32_t  value) ;

static inline void setStaticF__TaaVarianceClampScale(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA_ShaderConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemporalAA_ShaderConstants(TemporalAA_ShaderConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemporalAA_ShaderConstants(TemporalAA_ShaderConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18622};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
