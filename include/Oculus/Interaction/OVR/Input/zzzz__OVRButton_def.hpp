#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRButton)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::OVR::Input {
class OVRButton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVR::Input::OVRButton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::Input::OVRButton*, "Oculus.Interaction.OVR.Input", "OVRButton");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Button, OVRInput::Controller, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::OVR::Input {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.Input.OVRButton
class CORDL_TYPE OVRButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _button, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::GlobalNamespace::OVRInput_Button  _button;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::OVR::Input::OVRButton* New_ctor() ;

/// @brief Method Value, addr 0xa41b2b8, size 0x60, virtual true, abstract: false, final true
inline bool Value() ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__button() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__button() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr void __cordl_internal_set__button(::GlobalNamespace::OVRInput_Button  value) ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

/// @brief Method .ctor, addr 0xa41b318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRButton(OVRButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRButton(OVRButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31131};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _button, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRButton, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRButton, ____button) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::Input::OVRButton) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR::Input
