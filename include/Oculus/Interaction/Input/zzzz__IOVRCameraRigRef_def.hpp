#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IOVRCameraRigRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOVRCameraRigRef)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRHand;
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
class IOVRCameraRigRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IOVRCameraRigRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IOVRCameraRigRef*, "Oculus.Interaction.Input", "IOVRCameraRigRef");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IOVRCameraRigRef
class CORDL_TYPE IOVRCameraRigRef {
public:
// Declarations
 __declspec(property(get=get_CameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  CameraRig;

 __declspec(property(get=get_LeftController)) ::UnityW<::UnityEngine::Transform>  LeftController;

 __declspec(property(get=get_LeftHand)) ::UnityW<::GlobalNamespace::OVRHand>  LeftHand;

 __declspec(property(get=get_RightController)) ::UnityW<::UnityEngine::Transform>  RightController;

 __declspec(property(get=get_RightHand)) ::UnityW<::GlobalNamespace::OVRHand>  RightHand;

/// [CompilerGenerated]
/// @brief Method add_WhenInputDataDirtied, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenInputDataDirtied(::System::Action_1<bool>*  value) ;

/// @brief Method get_CameraRig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::OVRCameraRig> get_CameraRig() ;

/// @brief Method get_LeftController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_LeftController() ;

/// @brief Method get_LeftHand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::OVRHand> get_LeftHand() ;

/// @brief Method get_RightController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_RightController() ;

/// @brief Method get_RightHand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::OVRHand> get_RightHand() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenInputDataDirtied, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenInputDataDirtied(::System::Action_1<bool>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IOVRCameraRigRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOVRCameraRigRef(IOVRCameraRigRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
