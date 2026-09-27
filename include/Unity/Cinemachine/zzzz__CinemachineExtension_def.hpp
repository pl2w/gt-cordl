#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineExtension)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineExtension_VcamExtraStateBase;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineExtension;
}
namespace Unity::Cinemachine {
class CinemachineExtension_VcamExtraStateBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineExtension*);
MARK_REF_T(::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineExtension*, "Unity.Cinemachine", "CinemachineExtension");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*, "Unity.Cinemachine", "CinemachineExtension/VcamExtraStateBase");
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineExtension
class CORDL_TYPE CinemachineExtension : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VcamExtraStateBase = ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase;

 __declspec(property(get=get_ComponentOwner)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ComponentOwner;

/// @brief Field m_ExtraState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExtraState, put=__cordl_internal_set_m_ExtraState)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*  m_ExtraState;

/// @brief Field m_VcamOwner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VcamOwner, put=__cordl_internal_set_m_VcamOwner)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_VcamOwner;

/// @brief Method Awake, addr 0xaeb3328, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConnectToVcam, addr 0xaeb335c, size 0xb8, virtual true, abstract: false, final false
inline void ConnectToVcam(bool  connect) ;

/// @brief Method EnsureStarted, addr 0xaeb334c, size 0x10, virtual false, abstract: false, final false
inline void EnsureStarted() ;

/// @brief Method ForceCameraPosition, addr 0xaeb35b0, size 0x4, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method ForceCameraPosition, addr 0xaeb35b4, size 0x4, virtual true, abstract: false, final false
inline void ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetAllExtraStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*> && ::cordl_internals::default_constructor_constraint<T>)
inline void GetAllExtraStates(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method GetExtraState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetExtraState(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetMaxDampTime, addr 0xaeb35c0, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InvokePostPipelineStageCallback, addr 0xaeb359c, size 0xc, virtual false, abstract: false, final false
inline void InvokePostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineExtension* New_ctor() ;

/// @brief Method OnDestroy, addr 0xaeb3338, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xaeb3348, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb35ac, size 0x4, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaeb35b8, size 0x8, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method PostPipelineStageCallback, addr 0xaeb35a8, size 0x4, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PrePipelineMutateCameraStateCallback, addr 0xaeb3598, size 0x4, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>* const& __cordl_internal_get_m_ExtraState() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*& __cordl_internal_get_m_ExtraState() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_VcamOwner() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_VcamOwner() ;

constexpr void __cordl_internal_set_m_ExtraState(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*  value) ;

constexpr void __cordl_internal_set_m_VcamOwner(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaeb35c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ComponentOwner, addr 0xaeb3294, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> get_ComponentOwner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineExtension(CinemachineExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineExtension(CinemachineExtension const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22288};

/// @brief Field m_VcamOwner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_VcamOwner;

/// @brief Field m_ExtraState, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase*>*  ___m_ExtraState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineExtension, ___m_VcamOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExtension, ___m_ExtraState) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineExtension) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineExtension/VcamExtraStateBase
class CORDL_TYPE CinemachineExtension_VcamExtraStateBase : public ::System::Object {
public:
// Declarations
/// @brief Field Vcam, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Vcam, put=__cordl_internal_set_Vcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Vcam;

static inline ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase* New_ctor() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_Vcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_Vcam() ;

constexpr void __cordl_internal_set_Vcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaeb35d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineExtension_VcamExtraStateBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExtension_VcamExtraStateBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineExtension_VcamExtraStateBase(CinemachineExtension_VcamExtraStateBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExtension_VcamExtraStateBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineExtension_VcamExtraStateBase(CinemachineExtension_VcamExtraStateBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22287};

/// @brief Field Vcam, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___Vcam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase, ___Vcam) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
