#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineClearShot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineClearShot)
namespace GlobalNamespace {
struct CinemachineClearShot_Pair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace Unity::Cinemachine {
class CinemachineClearShot___c;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineClearShot;
}
namespace Unity::Cinemachine {
class CinemachineClearShot___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineClearShot*);
MARK_REF_T(::Unity::Cinemachine::CinemachineClearShot___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineClearShot*, "Unity.Cinemachine", "CinemachineClearShot");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineClearShot___c*, "Unity.Cinemachine", "CinemachineClearShot/<>c");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Cinemachine ClearShot")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineClearShot.html")]
// Dependencies Unity.Cinemachine.CinemachineCameraManagerBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineClearShot
class CORDL_TYPE CinemachineClearShot : public ::Unity::Cinemachine::CinemachineCameraManagerBase {
public:
// Declarations
using Pair = ::GlobalNamespace::CinemachineClearShot_Pair;

using __c = ::Unity::Cinemachine::CinemachineClearShot___c;

/// @brief Field ActivateAfter, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActivateAfter, put=__cordl_internal_set_ActivateAfter)) float_t  ActivateAfter;

/// @brief Field MinDuration, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinDuration, put=__cordl_internal_set_MinDuration)) float_t  MinDuration;

/// @brief Field RandomizeChoice, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get_RandomizeChoice, put=__cordl_internal_set_RandomizeChoice)) bool  RandomizeChoice;

/// @brief Field m_ActivationTime, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivationTime, put=__cordl_internal_set_m_ActivationTime)) float_t  m_ActivationTime;

/// @brief Field m_LegacyFollow, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyFollow, put=__cordl_internal_set_m_LegacyFollow)) ::UnityW<::UnityEngine::Transform>  m_LegacyFollow;

/// @brief Field m_LegacyLookAt, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyLookAt, put=__cordl_internal_set_m_LegacyLookAt)) ::UnityW<::UnityEngine::Transform>  m_LegacyLookAt;

/// @brief Field m_PendingActivationTime, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PendingActivationTime, put=__cordl_internal_set_m_PendingActivationTime)) float_t  m_PendingActivationTime;

/// @brief Field m_PendingCamera, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PendingCamera, put=__cordl_internal_set_m_PendingCamera)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_PendingCamera;

/// @brief Field m_RandomizeNow, offset 0x238, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RandomizeNow, put=__cordl_internal_set_m_RandomizeNow)) bool  m_RandomizeNow;

/// @brief Field m_RandomizedChildren, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RandomizedChildren, put=__cordl_internal_set_m_RandomizedChildren)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  m_RandomizedChildren;

/// @brief Method ChooseCurrentCamera, addr 0xae891e0, size 0x5a8, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineClearShot* New_ctor() ;

/// @brief Method OnTransitionFromCamera, addr 0xae89138, size 0x80, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method PerformLegacyUpgrade, addr 0xae88fb0, size 0x188, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Randomize, addr 0xae89788, size 0x328, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* Randomize(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  src) ;

/// @brief Method Reset, addr 0xae88f4c, size 0x64, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetRandomization, addr 0xae891b8, size 0x28, virtual false, abstract: false, final false
inline void ResetRandomization() ;

constexpr float_t const& __cordl_internal_get_ActivateAfter() const;

constexpr float_t& __cordl_internal_get_ActivateAfter() ;

constexpr float_t const& __cordl_internal_get_MinDuration() const;

constexpr float_t& __cordl_internal_get_MinDuration() ;

constexpr bool const& __cordl_internal_get_RandomizeChoice() const;

constexpr bool& __cordl_internal_get_RandomizeChoice() ;

constexpr float_t const& __cordl_internal_get_m_ActivationTime() const;

constexpr float_t& __cordl_internal_get_m_ActivationTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyFollow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LegacyLookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LegacyLookAt() ;

constexpr float_t const& __cordl_internal_get_m_PendingActivationTime() const;

constexpr float_t& __cordl_internal_get_m_PendingActivationTime() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_PendingCamera() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_PendingCamera() ;

constexpr bool const& __cordl_internal_get_m_RandomizeNow() const;

constexpr bool& __cordl_internal_get_m_RandomizeNow() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& __cordl_internal_get_m_RandomizedChildren() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& __cordl_internal_get_m_RandomizedChildren() ;

constexpr void __cordl_internal_set_ActivateAfter(float_t  value) ;

constexpr void __cordl_internal_set_MinDuration(float_t  value) ;

constexpr void __cordl_internal_set_RandomizeChoice(bool  value) ;

constexpr void __cordl_internal_set_m_ActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacyFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LegacyLookAt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_PendingActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_m_PendingCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

constexpr void __cordl_internal_set_m_RandomizeNow(bool  value) ;

constexpr void __cordl_internal_set_m_RandomizedChildren(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value) ;

/// @brief Method .ctor, addr 0xae89ab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineClearShot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineClearShot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineClearShot(CinemachineClearShot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineClearShot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineClearShot(CinemachineClearShot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22149};

/// [Tooltip("Wait this many seconds before activating a new child camera")]
/// [FormerlySerializedAs("m_ActivateAfter")]
/// @brief Field ActivateAfter, offset: 0x208, size: 0x4, def value: None
 float_t  ___ActivateAfter;

/// [Tooltip("An active camera must be active for at least this many seconds")]
/// [FormerlySerializedAs("m_MinDuration")]
/// @brief Field MinDuration, offset: 0x20c, size: 0x4, def value: None
 float_t  ___MinDuration;

/// [Tooltip("If checked, camera choice will be randomized if multiple cameras are equally desirable.  Otherwise, child list order and child camera priority will be used.")]
/// [FormerlySerializedAs("m_RandomizeChoice")]
/// @brief Field RandomizeChoice, offset: 0x210, size: 0x1, def value: None
 bool  ___RandomizeChoice;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_LookAt")]
/// @brief Field m_LegacyLookAt, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyLookAt;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_Follow")]
/// @brief Field m_LegacyFollow, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LegacyFollow;

/// @brief Field m_ActivationTime, offset: 0x228, size: 0x4, def value: None
 float_t  ___m_ActivationTime;

/// @brief Field m_PendingActivationTime, offset: 0x22c, size: 0x4, def value: None
 float_t  ___m_PendingActivationTime;

/// @brief Field m_PendingCamera, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_PendingCamera;

/// @brief Field m_RandomizeNow, offset: 0x238, size: 0x1, def value: None
 bool  ___m_RandomizeNow;

/// @brief Field m_RandomizedChildren, offset: 0x240, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  ___m_RandomizedChildren;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___ActivateAfter) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___MinDuration) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___RandomizeChoice) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_LegacyLookAt) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_LegacyFollow) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_ActivationTime) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_PendingActivationTime) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_PendingCamera) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_RandomizeNow) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineClearShot, ___m_RandomizedChildren) == 0x240, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineClearShot) == 0x248, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineClearShot/<>c
class CORDL_TYPE CinemachineClearShot___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::CinemachineClearShot___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*  __9__16_0;

static inline ::Unity::Cinemachine::CinemachineClearShot___c* New_ctor() ;

/// @brief Method <Randomize>b__16_0, addr 0xae89b28, size 0x3c, virtual false, abstract: false, final false
inline int32_t _Randomize_b__16_0(::GlobalNamespace::CinemachineClearShot_Pair  p1, ::GlobalNamespace::CinemachineClearShot_Pair  p2) ;

/// @brief Method .ctor, addr 0xae89b20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineClearShot___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::Unity::Cinemachine::CinemachineClearShot___c*  value) ;

static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::CinemachineClearShot_Pair>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineClearShot___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineClearShot___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineClearShot___c(CinemachineClearShot___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineClearShot___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineClearShot___c(CinemachineClearShot___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineClearShot___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
