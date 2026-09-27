#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRTouch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRTouch)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRTouch;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRTouch*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRTouch*, "Oculus.Interaction.Input", "OVRTouch");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Controller, OVRInput::Touch, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRTouch
class CORDL_TYPE OVRTouch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _touch, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__touch, put=__cordl_internal_set__touch)) ::GlobalNamespace::OVRInput_Touch  _touch;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::Input::OVRTouch* New_ctor() ;

/// @brief Method Value, addr 0xa4212e4, size 0x60, virtual true, abstract: false, final true
inline bool Value() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr ::GlobalNamespace::OVRInput_Touch const& __cordl_internal_get__touch() const;

constexpr ::GlobalNamespace::OVRInput_Touch& __cordl_internal_get__touch() ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__touch(::GlobalNamespace::OVRInput_Touch  value) ;

/// @brief Method .ctor, addr 0xa421344, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTouch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTouch(OVRTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTouch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTouch(OVRTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31154};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _touch, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Touch  ____touch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OVRTouch, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRTouch, ____touch) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OVRTouch) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
