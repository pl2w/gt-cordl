#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderGlobals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderGlobals)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTShaderGlobals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTShaderGlobals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderGlobals*, "", "GTShaderGlobals");
// Dependencies ShaderHashId, System.DateTime, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTShaderGlobals
class CORDL_TYPE GTShaderGlobals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _GT_BlueNoiseTex, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_BlueNoiseTex, put=setStaticF__GT_BlueNoiseTex)) ::GlobalNamespace::ShaderHashId  _GT_BlueNoiseTex;

/// @brief Field _GT_BlueNoiseTex_WH, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_BlueNoiseTex_WH, put=setStaticF__GT_BlueNoiseTex_WH)) ::GlobalNamespace::ShaderHashId  _GT_BlueNoiseTex_WH;

/// @brief Field _GT_PawnActiveCount, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_PawnActiveCount, put=setStaticF__GT_PawnActiveCount)) ::GlobalNamespace::ShaderHashId  _GT_PawnActiveCount;

/// @brief Field _GT_PawnData, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_PawnData, put=setStaticF__GT_PawnData)) ::GlobalNamespace::ShaderHashId  _GT_PawnData;

/// @brief Field _GT_Time, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_Time, put=setStaticF__GT_Time)) ::GlobalNamespace::ShaderHashId  _GT_Time;

/// @brief Field _GT_WorldSpaceCameraPos, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_WorldSpaceCameraPos, put=setStaticF__GT_WorldSpaceCameraPos)) ::GlobalNamespace::ShaderHashId  _GT_WorldSpaceCameraPos;

/// @brief Field _GT_iFrame, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_iFrame, put=setStaticF__GT_iFrame)) ::GlobalNamespace::ShaderHashId  _GT_iFrame;

/// @brief Field gActivePawns, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gActivePawns, put=setStaticF_gActivePawns)) int32_t  gActivePawns;

/// @brief Field gBlueNoiseTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gBlueNoiseTex, put=setStaticF_gBlueNoiseTex)) ::UnityW<::UnityEngine::Texture2D>  gBlueNoiseTex;

/// @brief Field gBlueNoiseTexWH, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_gBlueNoiseTexWH, put=setStaticF_gBlueNoiseTexWH)) ::UnityEngine::Vector4  gBlueNoiseTexWH;

/// @brief Field gIFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gIFrame, put=setStaticF_gIFrame)) int32_t  gIFrame;

/// @brief Field gMainCamera, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gMainCamera, put=setStaticF_gMainCamera)) ::UnityW<::UnityEngine::Camera>  gMainCamera;

/// @brief Field gMainCameraWorldPos, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_gMainCameraWorldPos, put=setStaticF_gMainCameraWorldPos)) ::UnityEngine::Vector3  gMainCameraWorldPos;

/// @brief Field gMainCameraXform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gMainCameraXform, put=setStaticF_gMainCameraXform)) ::UnityW<::UnityEngine::Transform>  gMainCameraXform;

/// @brief Field gPawnData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gPawnData, put=setStaticF_gPawnData)) ::ArrayW<::UnityEngine::Matrix4x4>  gPawnData;

/// @brief Field gStartTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gStartTime, put=setStaticF_gStartTime)) ::System::DateTime  gStartTime;

/// @brief Field gTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gTime, put=setStaticF_gTime)) float_t  gTime;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5674cf8, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitBlueNoiseTex, addr 0x5674ebc, size 0xf4, virtual false, abstract: false, final false
static inline void InitBlueNoiseTex() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method Initialize, addr 0x5674e70, size 0x4c, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GlobalNamespace::GTShaderGlobals* New_ctor() ;

/// @brief Method OnDisable, addr 0x5674fbc, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5674fb0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5674e1c, size 0x54, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateCamera, addr 0x5675134, size 0xf0, virtual false, abstract: false, final false
static inline void UpdateCamera() ;

/// @brief Method UpdateFrame, addr 0x56750c0, size 0x74, virtual false, abstract: false, final false
static inline void UpdateFrame() ;

/// @brief Method UpdatePawns, addr 0x5675224, size 0xf0, virtual false, abstract: false, final false
static inline void UpdatePawns() ;

/// @brief Method UpdateTime, addr 0x5674fc8, size 0xf8, virtual false, abstract: false, final false
static inline void UpdateTime() ;

/// @brief Method .ctor, addr 0x5675314, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_BlueNoiseTex() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_BlueNoiseTex_WH() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_PawnActiveCount() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_PawnData() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_Time() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_WorldSpaceCameraPos() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_iFrame() ;

static inline int32_t getStaticF_gActivePawns() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_gBlueNoiseTex() ;

static inline ::UnityEngine::Vector4 getStaticF_gBlueNoiseTexWH() ;

static inline int32_t getStaticF_gIFrame() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF_gMainCamera() ;

static inline ::UnityEngine::Vector3 getStaticF_gMainCameraWorldPos() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF_gMainCameraXform() ;

static inline ::ArrayW<::UnityEngine::Matrix4x4> getStaticF_gPawnData() ;

static inline ::System::DateTime getStaticF_gStartTime() ;

static inline float_t getStaticF_gTime() ;

/// @brief Method get_Frame, addr 0x5674ca0, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_Frame() ;

/// @brief Method get_Time, addr 0x5674c48, size 0x58, virtual false, abstract: false, final false
static inline float_t get_Time() ;

/// @brief Method get_WorldSpaceCameraPos, addr 0x5674bec, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_WorldSpaceCameraPos() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__GT_BlueNoiseTex(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_BlueNoiseTex_WH(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_PawnActiveCount(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_PawnData(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_Time(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_WorldSpaceCameraPos(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_iFrame(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF_gActivePawns(int32_t  value) ;

static inline void setStaticF_gBlueNoiseTex(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_gBlueNoiseTexWH(::UnityEngine::Vector4  value) ;

static inline void setStaticF_gIFrame(int32_t  value) ;

static inline void setStaticF_gMainCamera(::UnityW<::UnityEngine::Camera>  value) ;

static inline void setStaticF_gMainCameraWorldPos(::UnityEngine::Vector3  value) ;

static inline void setStaticF_gMainCameraXform(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF_gPawnData(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

static inline void setStaticF_gStartTime(::System::DateTime  value) ;

static inline void setStaticF_gTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTShaderGlobals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTShaderGlobals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTShaderGlobals(GTShaderGlobals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTShaderGlobals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTShaderGlobals(GTShaderGlobals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTShaderGlobals) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
