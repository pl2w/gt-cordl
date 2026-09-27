#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_ShapeCache_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineConfiner2D)
namespace GlobalNamespace {
struct CinemachineConfiner2D_OversizeWindowSettings;
}
namespace GlobalNamespace {
struct CinemachineConfiner2D_ShapeCache;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineConfiner2D_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ConfinerOven_BakedSolution;
}
namespace Unity::Cinemachine {
struct LensSettings;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineConfiner2D;
}
namespace Unity::Cinemachine {
class CinemachineConfiner2D_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner2D*);
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner2D*, "Unity.Cinemachine", "CinemachineConfiner2D");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*, "Unity.Cinemachine", "CinemachineConfiner2D/VcamExtraState");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Confiner 2D")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineConfiner2D.html")]
// Dependencies Unity.Cinemachine.CinemachineConfiner2D::OversizeWindowSettings, Unity.Cinemachine.CinemachineConfiner2D::ShapeCache, Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner2D
class CORDL_TYPE CinemachineConfiner2D : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using OversizeWindowSettings = ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings;

using ShapeCache = ::GlobalNamespace::CinemachineConfiner2D_ShapeCache;

using VcamExtraState = ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState;

/// @brief Field BoundingShape2D, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoundingShape2D, put=__cordl_internal_set_BoundingShape2D)) ::UnityW<::UnityEngine::Collider2D>  BoundingShape2D;

 __declspec(property(get=get_BoundingShapeIsBaked)) bool  BoundingShapeIsBaked;

/// @brief Field Damping, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

/// @brief Field OversizeWindow, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_OversizeWindow, put=__cordl_internal_set_OversizeWindow)) ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  OversizeWindow;

/// @brief Field SlowingDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SlowingDistance, put=__cordl_internal_set_SlowingDistance)) float_t  SlowingDistance;

/// @brief Field m_ExtraStateCache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExtraStateCache, put=__cordl_internal_set_m_ExtraStateCache)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*  m_ExtraStateCache;

/// @brief Field m_LegacyMaxWindowSize, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyMaxWindowSize, put=__cordl_internal_set_m_LegacyMaxWindowSize)) float_t  m_LegacyMaxWindowSize;

/// @brief Field m_ShapeCache, offset 0x58, size 0xf0 
 __declspec(property(get=__cordl_internal_get_m_ShapeCache, put=__cordl_internal_set_m_ShapeCache)) ::GlobalNamespace::CinemachineConfiner2D_ShapeCache  m_ShapeCache;

/// @brief Method BakeBoundingShape, addr 0xae89f70, size 0xf0, virtual false, abstract: false, final false
inline bool BakeBoundingShape(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, float_t  maxTimeInSeconds) ;

/// @brief Method CalculateHalfFrustumHeight, addr 0xae8b068, size 0x7c, virtual false, abstract: false, final false
static inline float_t CalculateHalfFrustumHeight(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::LensSettings>  lens, /* [IsReadOnly] */ ::by_ref<float_t>  cameraPosLocalZ) ;

/// @brief Method ConfinePoint, addr 0xae8b0e4, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConfinePoint(::UnityEngine::Vector3  pos, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*  extra, ::UnityEngine::Vector3  fwd) ;

/// @brief Method GetDistanceFromEdge, addr 0xae8b1a4, size 0xd8, virtual false, abstract: false, final false
inline float_t GetDistanceFromEdge(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  dirUnit, float_t  max, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*  extra, ::UnityEngine::Vector3  fwd) ;

/// @brief Method GetMaxDampTime, addr 0xae89be8, size 0x20, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InvalidateBoundingShapeCache, addr 0xae89e68, size 0x1c, virtual false, abstract: false, final false
inline void InvalidateBoundingShapeCache() ;

/// [Obsolete("Call InvalidateBoundingShapeCache() instead.", false)]
/// @brief Method InvalidateCache, addr 0xae89f34, size 0x1c, virtual false, abstract: false, final false
inline void InvalidateCache() ;

/// @brief Method InvalidateLensCache, addr 0xae89d04, size 0x164, virtual false, abstract: false, final false
inline void InvalidateLensCache() ;

static inline ::Unity::Cinemachine::CinemachineConfiner2D* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xae89c08, size 0xfc, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xae89b64, size 0x6c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae8aa60, size 0x608, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae89bd0, size 0x18, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::Collider2D> const& __cordl_internal_get_BoundingShape2D() const;

constexpr ::UnityW<::UnityEngine::Collider2D>& __cordl_internal_get_BoundingShape2D() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings const& __cordl_internal_get_OversizeWindow() const;

constexpr ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings& __cordl_internal_get_OversizeWindow() ;

constexpr float_t const& __cordl_internal_get_SlowingDistance() const;

constexpr float_t& __cordl_internal_get_SlowingDistance() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>* const& __cordl_internal_get_m_ExtraStateCache() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*& __cordl_internal_get_m_ExtraStateCache() ;

constexpr float_t const& __cordl_internal_get_m_LegacyMaxWindowSize() const;

constexpr float_t& __cordl_internal_get_m_LegacyMaxWindowSize() ;

constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache const& __cordl_internal_get_m_ShapeCache() const;

constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache& __cordl_internal_get_m_ShapeCache() ;

constexpr void __cordl_internal_set_BoundingShape2D(::UnityW<::UnityEngine::Collider2D>  value) ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_OversizeWindow(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  value) ;

constexpr void __cordl_internal_set_SlowingDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_ExtraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*  value) ;

constexpr void __cordl_internal_set_m_LegacyMaxWindowSize(float_t  value) ;

constexpr void __cordl_internal_set_m_ShapeCache(::GlobalNamespace::CinemachineConfiner2D_ShapeCache  value) ;

/// @brief Method .ctor, addr 0xae8b27c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BoundingShapeIsBaked, addr 0xae89f50, size 0x20, virtual false, abstract: false, final false
inline bool get_BoundingShapeIsBaked() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner2D(CinemachineConfiner2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner2D(CinemachineConfiner2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22153};

/// @brief Field k_CornerAngleThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_CornerAngleThreshold{static_cast<float_t>(10.0f)};

/// [Tooltip("The 2D shape within which the camera is to be contained.  Can be polygon-, box-, or composite collider 2D.\n\nRemark: When assigning a GameObject here in the editor, this will be set to the first Collider2D found on the assigned GameObject!")]
/// [FormerlySerializedAs("m_BoundingShape2D")]
/// @brief Field BoundingShape2D, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  ___BoundingShape2D;

/// [Tooltip("Damping applied around corners to avoid jumps.  Higher numbers are more gradual.")]
/// [Range(0, 5)]
/// [FormerlySerializedAs("m_Damping")]
/// @brief Field Damping, offset: 0x38, size: 0x4, def value: None
 float_t  ___Damping;

/// [Tooltip("Size of the slow-down zone at the edge of the bounding shape.")]
/// @brief Field SlowingDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___SlowingDistance;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field OversizeWindow, offset: 0x40, size: 0xc, def value: None
 ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  ___OversizeWindow;

/// @brief Field m_ExtraStateCache, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*  ___m_ExtraStateCache;

/// @brief Field m_ShapeCache, offset: 0x58, size: 0xf0, def value: None
 ::GlobalNamespace::CinemachineConfiner2D_ShapeCache  ___m_ShapeCache;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_MaxWindowSize")]
/// @brief Field m_LegacyMaxWindowSize, offset: 0x148, size: 0x4, def value: None
 float_t  ___m_LegacyMaxWindowSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___BoundingShape2D) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___Damping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___SlowingDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___OversizeWindow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___m_ExtraStateCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___m_ShapeCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D, ___m_LegacyMaxWindowSize) == 0x148, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner2D) == 0x150, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner2D/VcamExtraState
class CORDL_TYPE CinemachineConfiner2D_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field BakedSolution, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BakedSolution, put=__cordl_internal_set_BakedSolution)) ::Unity::Cinemachine::ConfinerOven_BakedSolution*  BakedSolution;

/// @brief Field DampedDisplacement, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_DampedDisplacement, put=__cordl_internal_set_DampedDisplacement)) ::UnityEngine::Vector3  DampedDisplacement;

/// @brief Field FrustumHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_FrustumHeight, put=__cordl_internal_set_FrustumHeight)) float_t  FrustumHeight;

/// @brief Field PreviousCameraPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousCameraPosition, put=__cordl_internal_set_PreviousCameraPosition)) ::UnityEngine::Vector3  PreviousCameraPosition;

/// @brief Field PreviousDisplacement, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousDisplacement, put=__cordl_internal_set_PreviousDisplacement)) ::UnityEngine::Vector3  PreviousDisplacement;

static inline ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState* New_ctor() ;

constexpr ::Unity::Cinemachine::ConfinerOven_BakedSolution* const& __cordl_internal_get_BakedSolution() const;

constexpr ::Unity::Cinemachine::ConfinerOven_BakedSolution*& __cordl_internal_get_BakedSolution() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_DampedDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_DampedDisplacement() ;

constexpr float_t const& __cordl_internal_get_FrustumHeight() const;

constexpr float_t& __cordl_internal_get_FrustumHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousCameraPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousDisplacement() ;

constexpr void __cordl_internal_set_BakedSolution(::Unity::Cinemachine::ConfinerOven_BakedSolution*  value) ;

constexpr void __cordl_internal_set_DampedDisplacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_FrustumHeight(float_t  value) ;

constexpr void __cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae8b28c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner2D_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner2D_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner2D_VcamExtraState(CinemachineConfiner2D_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner2D_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner2D_VcamExtraState(CinemachineConfiner2D_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22151};

/// @brief Field BakedSolution, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::ConfinerOven_BakedSolution*  ___BakedSolution;

/// @brief Field PreviousDisplacement, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousDisplacement;

/// @brief Field DampedDisplacement, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___DampedDisplacement;

/// @brief Field PreviousCameraPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousCameraPosition;

/// @brief Field FrustumHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___FrustumHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState, ___BakedSolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState, ___PreviousDisplacement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState, ___DampedDisplacement) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState, ___PreviousCameraPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState, ___FrustumHeight) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
