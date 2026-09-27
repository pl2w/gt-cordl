#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IController)
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace Oculus::Interaction::Input {
struct ControllerInput;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IController;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IController*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IController*, "Oculus.Interaction.Input", "IController");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IController
class CORDL_TYPE IController {
public:
// Declarations
 __declspec(property(get=get_ControllerInput)) ::Oculus::Interaction::Input::ControllerInput  ControllerInput;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsPoseValid)) bool  IsPoseValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Method IsButtonUsageAllActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

/// @brief Method IsButtonUsageAnyActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

/// @brief Method TryGetPointerPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenUpdated(::System::Action*  value) ;

/// @brief Method get_ControllerInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::ControllerInput get_ControllerInput() ;

/// @brief Method get_Handedness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsPoseValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPoseValid() ;

/// @brief Method get_Scale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Scale() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenUpdated(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IController(IController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
