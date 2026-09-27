#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_ParamInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderersParameters)
namespace GlobalNamespace {
struct RenderersParameters_Flags;
}
namespace GlobalNamespace {
struct RenderersParameters_ParamInfo;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine::Rendering {
class RenderersParameters_ParamNames;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderersParameters_ParamNames;
}
namespace UnityEngine::Rendering {
struct RenderersParameters;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderersParameters_ParamNames*);
MARK_VAL_T(::UnityEngine::Rendering::RenderersParameters);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderersParameters_ParamNames*, "UnityEngine.Rendering", "RenderersParameters/ParamNames");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderersParameters, "UnityEngine.Rendering", "RenderersParameters");
// Dependencies UnityEngine.Rendering.RenderersParameters::ParamInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters
struct CORDL_TYPE RenderersParameters {
public:
// Declarations
using Flags = ::GlobalNamespace::RenderersParameters_Flags;

using ParamInfo = ::GlobalNamespace::RenderersParameters_ParamInfo;

using ParamNames = ::UnityEngine::Rendering::RenderersParameters_ParamNames;

/// @brief Field s_uintSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_uintSize, put=setStaticF_s_uintSize)) int32_t  s_uintSize;

/// @brief Method CreateInstanceDataBuffer, addr 0xb211b64, size 0x3b8, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* CreateInstanceDataBuffer(::GlobalNamespace::RenderersParameters_Flags  flags, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::InstanceNumInfo>  instanceNumInfo) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>g__GetParamInfo|14_0, addr 0xb212a80, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RenderersParameters_ParamInfo __ctor_g__GetParamInfo_14_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>  instanceDataBuffer, int32_t  paramNameIdx, bool  assertOnFail) ;

/// @brief Method .ctor, addr 0xb211f1c, size 0x2b4, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GPUInstanceDataBuffer*>  instanceDataBuffer) ;

static inline int32_t getStaticF_s_uintSize() ;

static inline void setStaticF_s_uintSize(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderersParameters() ;

// Ctor Parameters [CppParam { name: "lightmapScale", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorld", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "worldToLocal", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrixPreviousM", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrixPreviousMI", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "shCoefficients", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "boundingSphere", ty: "::GlobalNamespace::RenderersParameters_ParamInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "windParams", ty: "::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "windHistoryParams", ty: "::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>", modifiers: "", def_value: None, comment: None }]
constexpr RenderersParameters(::GlobalNamespace::RenderersParameters_ParamInfo  lightmapScale, ::GlobalNamespace::RenderersParameters_ParamInfo  localToWorld, ::GlobalNamespace::RenderersParameters_ParamInfo  worldToLocal, ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousM, ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousMI, ::GlobalNamespace::RenderersParameters_ParamInfo  shCoefficients, ::GlobalNamespace::RenderersParameters_ParamInfo  boundingSphere, ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windParams, ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windHistoryParams) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field lightmapScale, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  lightmapScale;

/// @brief Field localToWorld, offset: 0xc, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  localToWorld;

/// @brief Field worldToLocal, offset: 0x18, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  worldToLocal;

/// @brief Field matrixPreviousM, offset: 0x24, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousM;

/// @brief Field matrixPreviousMI, offset: 0x30, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  matrixPreviousMI;

/// @brief Field shCoefficients, offset: 0x3c, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  shCoefficients;

/// @brief Field boundingSphere, offset: 0x48, size: 0xc, def value: None
 ::GlobalNamespace::RenderersParameters_ParamInfo  boundingSphere;

/// @brief Field windParams, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windParams;

/// @brief Field windHistoryParams, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RenderersParameters_ParamInfo>  windHistoryParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, lightmapScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, localToWorld) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, worldToLocal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, matrixPreviousM) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, matrixPreviousMI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, shCoefficients) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, boundingSphere) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, windParams) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, windHistoryParams) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderersParameters) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderersParameters/ParamNames
class CORDL_TYPE RenderersParameters_ParamNames : public ::System::Object {
public:
// Declarations
/// @brief Field DOTS_ST_WindHistoryParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DOTS_ST_WindHistoryParams, put=setStaticF_DOTS_ST_WindHistoryParams)) ::ArrayW<int32_t>  DOTS_ST_WindHistoryParams;

/// @brief Field DOTS_ST_WindParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DOTS_ST_WindParams, put=setStaticF_DOTS_ST_WindParams)) ::ArrayW<int32_t>  DOTS_ST_WindParams;

/// @brief Field _BaseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseColor, put=setStaticF__BaseColor)) int32_t  _BaseColor;

/// @brief Field unity_LightmapST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightmapST, put=setStaticF_unity_LightmapST)) int32_t  unity_LightmapST;

/// @brief Field unity_MatrixPreviousM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_MatrixPreviousM, put=setStaticF_unity_MatrixPreviousM)) int32_t  unity_MatrixPreviousM;

/// @brief Field unity_MatrixPreviousMI, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_MatrixPreviousMI, put=setStaticF_unity_MatrixPreviousMI)) int32_t  unity_MatrixPreviousMI;

/// @brief Field unity_ObjectToWorld, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_ObjectToWorld, put=setStaticF_unity_ObjectToWorld)) int32_t  unity_ObjectToWorld;

/// @brief Field unity_SHCoefficients, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_SHCoefficients, put=setStaticF_unity_SHCoefficients)) int32_t  unity_SHCoefficients;

/// @brief Field unity_SpecCube0_HDR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_SpecCube0_HDR, put=setStaticF_unity_SpecCube0_HDR)) int32_t  unity_SpecCube0_HDR;

/// @brief Field unity_WorldBoundingSphere, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_WorldBoundingSphere, put=setStaticF_unity_WorldBoundingSphere)) int32_t  unity_WorldBoundingSphere;

/// @brief Field unity_WorldToObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_WorldToObject, put=setStaticF_unity_WorldToObject)) int32_t  unity_WorldToObject;

static inline ::ArrayW<int32_t> getStaticF_DOTS_ST_WindHistoryParams() ;

static inline ::ArrayW<int32_t> getStaticF_DOTS_ST_WindParams() ;

static inline int32_t getStaticF__BaseColor() ;

static inline int32_t getStaticF_unity_LightmapST() ;

static inline int32_t getStaticF_unity_MatrixPreviousM() ;

static inline int32_t getStaticF_unity_MatrixPreviousMI() ;

static inline int32_t getStaticF_unity_ObjectToWorld() ;

static inline int32_t getStaticF_unity_SHCoefficients() ;

static inline int32_t getStaticF_unity_SpecCube0_HDR() ;

static inline int32_t getStaticF_unity_WorldBoundingSphere() ;

static inline int32_t getStaticF_unity_WorldToObject() ;

static inline void setStaticF_DOTS_ST_WindHistoryParams(::ArrayW<int32_t>  value) ;

static inline void setStaticF_DOTS_ST_WindParams(::ArrayW<int32_t>  value) ;

static inline void setStaticF__BaseColor(int32_t  value) ;

static inline void setStaticF_unity_LightmapST(int32_t  value) ;

static inline void setStaticF_unity_MatrixPreviousM(int32_t  value) ;

static inline void setStaticF_unity_MatrixPreviousMI(int32_t  value) ;

static inline void setStaticF_unity_ObjectToWorld(int32_t  value) ;

static inline void setStaticF_unity_SHCoefficients(int32_t  value) ;

static inline void setStaticF_unity_SpecCube0_HDR(int32_t  value) ;

static inline void setStaticF_unity_WorldBoundingSphere(int32_t  value) ;

static inline void setStaticF_unity_WorldToObject(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderersParameters_ParamNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderersParameters_ParamNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderersParameters_ParamNames(RenderersParameters_ParamNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderersParameters_ParamNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderersParameters_ParamNames(RenderersParameters_ParamNames const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderersParameters_ParamNames) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
