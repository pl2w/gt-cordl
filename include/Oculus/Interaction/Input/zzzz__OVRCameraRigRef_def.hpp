#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRCameraRigRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRCameraRigRef)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace Oculus::Interaction::Input {
class IOVRCameraRigRef;
}
namespace Oculus::Interaction::Input {
class OVRCameraRigRef___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRCameraRigRef;
}
namespace Oculus::Interaction::Input {
class OVRCameraRigRef___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRCameraRigRef*);
MARK_REF_T(::Oculus::Interaction::Input::OVRCameraRigRef___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRCameraRigRef*, "Oculus.Interaction.Input", "OVRCameraRigRef");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRCameraRigRef___c*, "Oculus.Interaction.Input", "OVRCameraRigRef/<>c");
// [DefaultExecutionOrder(-90)]
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRCameraRigRef
class CORDL_TYPE OVRCameraRigRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::OVRCameraRigRef___c;

 __declspec(property(get=get_CameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  CameraRig;

 __declspec(property(get=get_LeftController)) ::UnityW<::UnityEngine::Transform>  LeftController;

 __declspec(property(get=get_LeftHand)) ::UnityW<::GlobalNamespace::OVRHand>  LeftHand;

 __declspec(property(get=get_RightController)) ::UnityW<::UnityEngine::Transform>  RightController;

 __declspec(property(get=get_RightHand)) ::UnityW<::GlobalNamespace::OVRHand>  RightHand;

/// @brief Field WhenInputDataDirtied, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenInputDataDirtied, put=__cordl_internal_set_WhenInputDataDirtied)) ::System::Action_1<bool>*  WhenInputDataDirtied;

/// @brief Field _isLateUpdate, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLateUpdate, put=__cordl_internal_set__isLateUpdate)) bool  _isLateUpdate;

/// @brief Field _leftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::GlobalNamespace::OVRHand>  _leftHand;

/// @brief Field _ovrCameraRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ovrCameraRig, put=__cordl_internal_set__ovrCameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _ovrCameraRig;

/// @brief Field _requireOvrHands, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__requireOvrHands, put=__cordl_internal_set__requireOvrHands)) bool  _requireOvrHands;

/// @brief Field _rightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::GlobalNamespace::OVRHand>  _rightHand;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Input::IOVRCameraRigRef"
constexpr operator  ::Oculus::Interaction::Input::IOVRCameraRigRef*() noexcept;

/// @brief Method FixedUpdate, addr 0xa41f88c, size 0x8, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetHandCached, addr 0xa41f600, size 0xb4, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVRHand> GetHandCached(::by_ref<::GlobalNamespace::OVRHand*>  cachedValue, ::UnityEngine::Transform*  handAnchor) ;

/// @brief Method HandleInputDataDirtied, addr 0xa41f9e0, size 0x24, virtual false, abstract: false, final false
inline void HandleInputDataDirtied(::GlobalNamespace::OVRCameraRig*  cameraRig) ;

/// @brief Method InjectAllOVRCameraRigRef, addr 0xa41fa04, size 0x24, virtual false, abstract: false, final false
inline void InjectAllOVRCameraRigRef(::GlobalNamespace::OVRCameraRig*  ovrCameraRig, bool  requireHands) ;

/// @brief Method InjectInteractionOVRCameraRig, addr 0xa41fa28, size 0x34, virtual false, abstract: false, final false
inline void InjectInteractionOVRCameraRig(::GlobalNamespace::OVRCameraRig*  ovrCameraRig) ;

/// @brief Method InjectRequireHands, addr 0xa41fa5c, size 0x8, virtual false, abstract: false, final false
inline void InjectRequireHands(bool  requireHands) ;

/// @brief Method LateUpdate, addr 0xa41f89c, size 0xc, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Input::OVRCameraRigRef* New_ctor() ;

/// @brief Method OnDisable, addr 0xa41f944, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa41f8a8, size 0x9c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa41f860, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa41f894, size 0x8, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_WhenInputDataDirtied() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_WhenInputDataDirtied() ;

constexpr bool const& __cordl_internal_get__isLateUpdate() const;

constexpr bool& __cordl_internal_get__isLateUpdate() ;

constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__ovrCameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__ovrCameraRig() ;

constexpr bool const& __cordl_internal_get__requireOvrHands() const;

constexpr bool& __cordl_internal_get__requireOvrHands() ;

constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__rightHand() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenInputDataDirtied(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__isLateUpdate(bool  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::GlobalNamespace::OVRHand>  value) ;

constexpr void __cordl_internal_set__ovrCameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__requireOvrHands(bool  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::GlobalNamespace::OVRHand>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa41fa64, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenInputDataDirtied, addr 0xa41f700, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenInputDataDirtied(::System::Action_1<bool>*  value) ;

/// @brief Method get_CameraRig, addr 0xa41f5dc, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::OVRCameraRig> get_CameraRig() ;

/// @brief Method get_LeftController, addr 0xa41f6d0, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_LeftController() ;

/// @brief Method get_LeftHand, addr 0xa41f5e4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::OVRHand> get_LeftHand() ;

/// @brief Method get_RightController, addr 0xa41f6e8, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_RightController() ;

/// @brief Method get_RightHand, addr 0xa41f6b4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::OVRHand> get_RightHand() ;

/// @brief Convert to "::Oculus::Interaction::Input::IOVRCameraRigRef"
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* i___Oculus__Interaction__Input__IOVRCameraRigRef() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenInputDataDirtied, addr 0xa41f7b0, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenInputDataDirtied(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCameraRigRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRigRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCameraRigRef(OVRCameraRigRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRigRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCameraRigRef(OVRCameraRigRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31149};

/// [Header("Configuration")]
/// [SerializeField]
/// @brief Field _ovrCameraRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____ovrCameraRig;

/// [SerializeField]
/// @brief Field _leftHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  ____leftHand;

/// [SerializeField]
/// @brief Field _rightHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  ____rightHand;

/// [SerializeField]
/// @brief Field _requireOvrHands, offset: 0x38, size: 0x1, def value: None
 bool  ____requireOvrHands;

/// [CompilerGenerated]
/// @brief Field WhenInputDataDirtied, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___WhenInputDataDirtied;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _isLateUpdate, offset: 0x49, size: 0x1, def value: None
 bool  ____isLateUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____ovrCameraRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____requireOvrHands) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ___WhenInputDataDirtied) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____started) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRCameraRigRef, ____isLateUpdate) == 0x49, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OVRCameraRigRef) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRCameraRigRef/<>c
class CORDL_TYPE OVRCameraRigRef___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::OVRCameraRigRef___c*  __9;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Action_1<bool>*  __9__30_0;

static inline ::Oculus::Interaction::Input::OVRCameraRigRef___c* New_ctor() ;

/// @brief Method <.ctor>b__30_0, addr 0xa41fbcc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__30_0(bool  _p0_) ;

/// @brief Method .ctor, addr 0xa41fbc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::OVRCameraRigRef___c* getStaticF___9() ;

static inline ::System::Action_1<bool>* getStaticF___9__30_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::OVRCameraRigRef___c*  value) ;

static inline void setStaticF___9__30_0(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRCameraRigRef___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRigRef___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCameraRigRef___c(OVRCameraRigRef___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCameraRigRef___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCameraRigRef___c(OVRCameraRigRef___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::OVRCameraRigRef___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
