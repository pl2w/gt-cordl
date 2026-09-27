#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/ControllerPinchInjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerPinchInjector)
namespace Oculus::Interaction::GrabAPI {
class ControllerPinchInjector_ControllerPinchAPI;
}
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class ControllerPinchInjector;
}
namespace Oculus::Interaction::GrabAPI {
class ControllerPinchInjector_ControllerPinchAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::ControllerPinchInjector*);
MARK_REF_T(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::ControllerPinchInjector*, "Oculus.Interaction.GrabAPI", "ControllerPinchInjector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*, "Oculus.Interaction.GrabAPI", "ControllerPinchInjector/ControllerPinchAPI");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.ControllerPinchInjector
class CORDL_TYPE ControllerPinchInjector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ControllerPinchAPI = ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI;

 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field <Controller>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _handGrabAPI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabAPI, put=__cordl_internal_set__handGrabAPI)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  _handGrabAPI;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4fb66c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAll, addr 0xa4fb864, size 0x2c, virtual false, abstract: false, final false
inline void InjectAll(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI, ::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa4fb890, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectHandGrabAPI, addr 0xa4fb960, size 0x8, virtual false, abstract: false, final false
inline void InjectHandGrabAPI(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI) ;

static inline ::Oculus::Interaction::GrabAPI::ControllerPinchInjector* New_ctor() ;

/// @brief Method Start, addr 0xa4fb6c4, size 0xcc, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& __cordl_internal_get__handGrabAPI() const;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& __cordl_internal_get__handGrabAPI() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handGrabAPI(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4fb968, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa4fb65c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa4fb664, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerPinchInjector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerPinchInjector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerPinchInjector(ControllerPinchInjector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerPinchInjector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerPinchInjector(ControllerPinchInjector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16418};

/// [SerializeField]
/// @brief Field _handGrabAPI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  ____handGrabAPI;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector, ____handGrabAPI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector, ____controller) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector, ____Controller_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector, ____started) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.ControllerPinchInjector/ControllerPinchAPI
class CORDL_TYPE ControllerPinchInjector_ControllerPinchAPI : public ::System::Object {
public:
// Declarations
/// @brief Field _controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::Oculus::Interaction::Input::IController*  _controller;

/// @brief Field _gripDown, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__gripDown, put=__cordl_internal_set__gripDown)) bool  _gripDown;

/// @brief Field _gripStrength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gripStrength, put=__cordl_internal_set__gripStrength)) float_t  _gripStrength;

/// @brief Field _indexPinchPose, offset 0x24, size 0x1c 
 __declspec(property(get=__cordl_internal_get__indexPinchPose, put=__cordl_internal_set__indexPinchPose)) ::UnityEngine::Pose  _indexPinchPose;

/// @brief Field _middlePinchPose, offset 0x40, size 0x1c 
 __declspec(property(get=__cordl_internal_get__middlePinchPose, put=__cordl_internal_set__middlePinchPose)) ::UnityEngine::Pose  _middlePinchPose;

/// @brief Field _pinchPose, offset 0x5c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__pinchPose, put=__cordl_internal_set__pinchPose)) ::UnityEngine::Pose  _pinchPose;

/// @brief Field _prevGripDown, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__prevGripDown, put=__cordl_internal_set__prevGripDown)) bool  _prevGripDown;

/// @brief Field _prevTriggerDown, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__prevTriggerDown, put=__cordl_internal_set__prevTriggerDown)) bool  _prevTriggerDown;

/// @brief Field _triggerDown, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__triggerDown, put=__cordl_internal_set__triggerDown)) bool  _triggerDown;

/// @brief Field _triggerStrength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__triggerStrength, put=__cordl_internal_set__triggerStrength)) float_t  _triggerStrength;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method GetFingerGrabScore, addr 0xa4fb970, size 0x2c, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4fb99c, size 0x38, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4fb9d4, size 0x94, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState) ;

/// @brief Method GetWristOffsetLocal, addr 0xa4fba68, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

static inline ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI* New_ctor(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method Update, addr 0xa4fba74, size 0x288, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__controller() ;

constexpr bool const& __cordl_internal_get__gripDown() const;

constexpr bool& __cordl_internal_get__gripDown() ;

constexpr float_t const& __cordl_internal_get__gripStrength() const;

constexpr float_t& __cordl_internal_get__gripStrength() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__indexPinchPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__indexPinchPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__middlePinchPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__middlePinchPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__pinchPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__pinchPose() ;

constexpr bool const& __cordl_internal_get__prevGripDown() const;

constexpr bool& __cordl_internal_get__prevGripDown() ;

constexpr bool const& __cordl_internal_get__prevTriggerDown() const;

constexpr bool& __cordl_internal_get__prevTriggerDown() ;

constexpr bool const& __cordl_internal_get__triggerDown() const;

constexpr bool& __cordl_internal_get__triggerDown() ;

constexpr float_t const& __cordl_internal_get__triggerStrength() const;

constexpr float_t& __cordl_internal_get__triggerStrength() ;

constexpr void __cordl_internal_set__controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__gripDown(bool  value) ;

constexpr void __cordl_internal_set__gripStrength(float_t  value) ;

constexpr void __cordl_internal_set__indexPinchPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__middlePinchPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__pinchPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__prevGripDown(bool  value) ;

constexpr void __cordl_internal_set__prevTriggerDown(bool  value) ;

constexpr void __cordl_internal_set__triggerDown(bool  value) ;

constexpr void __cordl_internal_set__triggerStrength(float_t  value) ;

/// @brief Method .ctor, addr 0xa4fb790, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerPinchInjector_ControllerPinchAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerPinchInjector_ControllerPinchAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerPinchInjector_ControllerPinchAPI(ControllerPinchInjector_ControllerPinchAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerPinchInjector_ControllerPinchAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerPinchInjector_ControllerPinchAPI(ControllerPinchInjector_ControllerPinchAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16417};

/// @brief Field _controller, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____controller;

/// @brief Field _triggerStrength, offset: 0x18, size: 0x4, def value: None
 float_t  ____triggerStrength;

/// @brief Field _gripStrength, offset: 0x1c, size: 0x4, def value: None
 float_t  ____gripStrength;

/// @brief Field _triggerDown, offset: 0x20, size: 0x1, def value: None
 bool  ____triggerDown;

/// @brief Field _gripDown, offset: 0x21, size: 0x1, def value: None
 bool  ____gripDown;

/// @brief Field _prevTriggerDown, offset: 0x22, size: 0x1, def value: None
 bool  ____prevTriggerDown;

/// @brief Field _prevGripDown, offset: 0x23, size: 0x1, def value: None
 bool  ____prevGripDown;

/// @brief Field _indexPinchPose, offset: 0x24, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____indexPinchPose;

/// @brief Field _middlePinchPose, offset: 0x40, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____middlePinchPose;

/// @brief Field _pinchPose, offset: 0x5c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____pinchPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____triggerStrength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____gripStrength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____triggerDown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____gripDown) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____prevTriggerDown) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____prevGripDown) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____indexPinchPose) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____middlePinchPose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI, ____pinchPose) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
