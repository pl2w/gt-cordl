#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_TerrainSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineDecollider)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineDecollider_DecollisionSettings;
}
namespace GlobalNamespace {
struct CinemachineDecollider_TerrainSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineDecollider_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineDecollider___c;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineDecollider;
}
namespace Unity::Cinemachine {
class CinemachineDecollider_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineDecollider___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineDecollider*);
MARK_REF_T(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*);
MARK_REF_T(::Unity::Cinemachine::CinemachineDecollider___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDecollider*, "Unity.Cinemachine", "CinemachineDecollider");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*, "Unity.Cinemachine", "CinemachineDecollider/VcamExtraState");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDecollider___c*, "Unity.Cinemachine", "CinemachineDecollider/<>c");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Decollider")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineDecollider.html")]
// Dependencies Unity.Cinemachine.CinemachineDecollider::DecollisionSettings, Unity.Cinemachine.CinemachineDecollider::TerrainSettings, Unity.Cinemachine.CinemachineExtension, UnityEngine.Collider
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDecollider
class CORDL_TYPE CinemachineDecollider : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using DecollisionSettings = ::GlobalNamespace::CinemachineDecollider_DecollisionSettings;

using TerrainSettings = ::GlobalNamespace::CinemachineDecollider_TerrainSettings;

using VcamExtraState = ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState;

using __c = ::Unity::Cinemachine::CinemachineDecollider___c;

/// @brief Field CameraRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraRadius, put=__cordl_internal_set_CameraRadius)) float_t  CameraRadius;

/// @brief Field Decollision, offset 0x34, size 0x18 
 __declspec(property(get=__cordl_internal_get_Decollision, put=__cordl_internal_set_Decollision)) ::GlobalNamespace::CinemachineDecollider_DecollisionSettings  Decollision;

/// @brief Field TerrainResolution, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_TerrainResolution, put=__cordl_internal_set_TerrainResolution)) ::GlobalNamespace::CinemachineDecollider_TerrainSettings  TerrainResolution;

/// @brief Field s_ColliderBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderBuffer, put=setStaticF_s_ColliderBuffer)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  s_ColliderBuffer;

/// @brief Field s_ColliderBufferSorter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderBufferSorter, put=setStaticF_s_ColliderBufferSorter)) ::System::Collections::Generic::IComparer_1<int32_t>*  s_ColliderBufferSorter;

/// @brief Field s_ColliderDistanceBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderDistanceBuffer, put=setStaticF_s_ColliderDistanceBuffer)) ::ArrayW<float_t>  s_ColliderDistanceBuffer;

/// @brief Field s_ColliderOrderBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderOrderBuffer, put=setStaticF_s_ColliderOrderBuffer)) ::ArrayW<int32_t>  s_ColliderOrderBuffer;

/// @brief Method ApplySmoothingAndDamping, addr 0xae8ce88, size 0x32c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ApplySmoothingAndDamping(::UnityEngine::Vector3  displacement, ::UnityEngine::Vector3  lookAtPoint, ::UnityEngine::Vector3  oldCamPos, ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*  extra, float_t  deltaTime) ;

/// @brief Method DecollideCamera, addr 0xae8c798, size 0x6f0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DecollideCamera(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPoint) ;

/// @brief Method ForceCameraPosition, addr 0xae8be1c, size 0x88, virtual true, abstract: false, final false
inline void ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetAvoidanceResolutionTargetPoint, addr 0xae8c390, size 0x1c8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAvoidanceResolutionTargetPoint(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state) ;

/// @brief Method GetMaxDampTime, addr 0xae8bdf0, size 0x2c, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

static inline ::Unity::Cinemachine::CinemachineDecollider* New_ctor() ;

/// @brief Method OnDestroy, addr 0xae8bd90, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0xae8bd04, size 0x1c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae8bea4, size 0x4ec, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae8bd20, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResolveTerrain, addr 0xae8c558, size 0x240, virtual false, abstract: false, final false
inline float_t ResolveTerrain(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState*  extra, ::UnityEngine::Vector3  camPos, ::UnityEngine::Vector3  up, float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get_CameraRadius() const;

constexpr float_t& __cordl_internal_get_CameraRadius() ;

constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings const& __cordl_internal_get_Decollision() const;

constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings& __cordl_internal_get_Decollision() ;

constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings const& __cordl_internal_get_TerrainResolution() const;

constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings& __cordl_internal_get_TerrainResolution() ;

constexpr void __cordl_internal_set_CameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_Decollision(::GlobalNamespace::CinemachineDecollider_DecollisionSettings  value) ;

constexpr void __cordl_internal_set_TerrainResolution(::GlobalNamespace::CinemachineDecollider_TerrainSettings  value) ;

/// @brief Method .ctor, addr 0xae8d2b4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_s_ColliderBuffer() ;

static inline ::System::Collections::Generic::IComparer_1<int32_t>* getStaticF_s_ColliderBufferSorter() ;

static inline ::ArrayW<float_t> getStaticF_s_ColliderDistanceBuffer() ;

static inline ::ArrayW<int32_t> getStaticF_s_ColliderOrderBuffer() ;

static inline void setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF_s_ColliderBufferSorter(::System::Collections::Generic::IComparer_1<int32_t>*  value) ;

static inline void setStaticF_s_ColliderDistanceBuffer(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_ColliderOrderBuffer(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDecollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDecollider(CinemachineDecollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDecollider(CinemachineDecollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22161};

/// @brief Field kColliderBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  kColliderBufferSize{static_cast<int32_t>(0xa)};

/// [Tooltip("Camera will try to maintain this distance from any obstacle or terrain.  Increase it if necessary to keep the camera from clipping the near edge of obsacles.")]
/// @brief Field CameraRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___CameraRadius;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field Decollision, offset: 0x34, size: 0x18, def value: None
 ::GlobalNamespace::CinemachineDecollider_DecollisionSettings  ___Decollision;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field TerrainResolution, offset: 0x4c, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineDecollider_TerrainSettings  ___TerrainResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider, ___CameraRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider, ___Decollision) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider, ___TerrainResolution) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineDecollider) == 0x60, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDecollider/<>c
class CORDL_TYPE CinemachineDecollider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::CinemachineDecollider___c*  __9;

static inline ::Unity::Cinemachine::CinemachineDecollider___c* New_ctor() ;

/// @brief Method <.cctor>b__22_0, addr 0xae8d4e8, size 0xfc, virtual false, abstract: false, final false
inline int32_t __cctor_b__22_0(int32_t  a, int32_t  b) ;

/// @brief Method .ctor, addr 0xae8d4e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineDecollider___c* getStaticF___9() ;

static inline void setStaticF___9(::Unity::Cinemachine::CinemachineDecollider___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDecollider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDecollider___c(CinemachineDecollider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDecollider___c(CinemachineDecollider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineDecollider___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDecollider/VcamExtraState
class CORDL_TYPE CinemachineDecollider_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field PreviouDecollisionDisplacement, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviouDecollisionDisplacement, put=__cordl_internal_set_PreviouDecollisionDisplacement)) ::UnityEngine::Vector3  PreviouDecollisionDisplacement;

/// @brief Field PreviousCorrectedCameraPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousCorrectedCameraPosition, put=__cordl_internal_set_PreviousCorrectedCameraPosition)) ::UnityEngine::Vector3  PreviousCorrectedCameraPosition;

/// @brief Field PreviousDistanceFromTarget, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviousDistanceFromTarget, put=__cordl_internal_set_PreviousDistanceFromTarget)) float_t  PreviousDistanceFromTarget;

/// @brief Field PreviousTerrainDisplacement, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviousTerrainDisplacement, put=__cordl_internal_set_PreviousTerrainDisplacement)) float_t  PreviousTerrainDisplacement;

/// @brief Field m_SmoothedDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothedDistance, put=__cordl_internal_set_m_SmoothedDistance)) float_t  m_SmoothedDistance;

/// @brief Field m_SmoothingStartTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothingStartTime, put=__cordl_internal_set_m_SmoothingStartTime)) float_t  m_SmoothingStartTime;

static inline ::Unity::Cinemachine::CinemachineDecollider_VcamExtraState* New_ctor() ;

/// @brief Method UpdateDistanceSmoothing, addr 0xae8d1b4, size 0x100, virtual false, abstract: false, final false
inline float_t UpdateDistanceSmoothing(float_t  distance, float_t  smoothingTime, bool  haveDisplacement) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviouDecollisionDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviouDecollisionDisplacement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousCorrectedCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousCorrectedCameraPosition() ;

constexpr float_t const& __cordl_internal_get_PreviousDistanceFromTarget() const;

constexpr float_t& __cordl_internal_get_PreviousDistanceFromTarget() ;

constexpr float_t const& __cordl_internal_get_PreviousTerrainDisplacement() const;

constexpr float_t& __cordl_internal_get_PreviousTerrainDisplacement() ;

constexpr float_t const& __cordl_internal_get_m_SmoothedDistance() const;

constexpr float_t& __cordl_internal_get_m_SmoothedDistance() ;

constexpr float_t const& __cordl_internal_get_m_SmoothingStartTime() const;

constexpr float_t& __cordl_internal_get_m_SmoothingStartTime() ;

constexpr void __cordl_internal_set_PreviouDecollisionDisplacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousCorrectedCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousDistanceFromTarget(float_t  value) ;

constexpr void __cordl_internal_set_PreviousTerrainDisplacement(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothedDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothingStartTime(float_t  value) ;

/// @brief Method .ctor, addr 0xae8d470, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDecollider_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDecollider_VcamExtraState(CinemachineDecollider_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDecollider_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDecollider_VcamExtraState(CinemachineDecollider_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22159};

/// @brief Field PreviousTerrainDisplacement, offset: 0x18, size: 0x4, def value: None
 float_t  ___PreviousTerrainDisplacement;

/// @brief Field PreviousDistanceFromTarget, offset: 0x1c, size: 0x4, def value: None
 float_t  ___PreviousDistanceFromTarget;

/// @brief Field PreviouDecollisionDisplacement, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviouDecollisionDisplacement;

/// @brief Field PreviousCorrectedCameraPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousCorrectedCameraPosition;

/// @brief Field m_SmoothedDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_SmoothedDistance;

/// @brief Field m_SmoothingStartTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_SmoothingStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___PreviousTerrainDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___PreviousDistanceFromTarget) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___PreviouDecollisionDisplacement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___PreviousCorrectedCameraPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___m_SmoothedDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState, ___m_SmoothingStartTime) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineDecollider_VcamExtraState) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
