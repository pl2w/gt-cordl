#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/ControllerPoseInputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerPoseInputDevice)
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction::Throw {
class IPoseInputDevice;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class ControllerPoseInputDevice;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::ControllerPoseInputDevice*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::ControllerPoseInputDevice*, "Oculus.Interaction.Throw", "ControllerPoseInputDevice");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.ControllerPoseInputDevice
class CORDL_TYPE ControllerPoseInputDevice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsInputValid)) bool  IsInputValid;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr operator  ::Oculus::Interaction::Throw::IPoseInputDevice*() noexcept;

/// @brief Method Awake, addr 0xa492b40, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetExternalVelocities, addr 0xa492b9c, size 0x94, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetExternalVelocities() ;

/// @brief Method GetRootPose, addr 0xa492a28, size 0x118, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InjectAllControllerPoseInputDevice, addr 0xa492c30, size 0x4, virtual false, abstract: false, final false
inline void InjectAllControllerPoseInputDevice(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa492c34, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::Throw::ControllerPoseInputDevice* New_ctor() ;

/// @brief Method Start, addr 0xa492b98, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa492d04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa4928f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// @brief Method get_IsHighConfidence, addr 0xa492a24, size 0x4, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsInputValid, addr 0xa492908, size 0x11c, virtual true, abstract: false, final true
inline bool get_IsInputValid() ;

/// @brief Convert to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* i___Oculus__Interaction__Throw__IPoseInputDevice() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa492900, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerPoseInputDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerPoseInputDevice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerPoseInputDevice(ControllerPoseInputDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerPoseInputDevice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerPoseInputDevice(ControllerPoseInputDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16067};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::ControllerPoseInputDevice, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::ControllerPoseInputDevice, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::ControllerPoseInputDevice) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
