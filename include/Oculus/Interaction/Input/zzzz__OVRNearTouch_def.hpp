#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRNearTouch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_NearTouch_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRNearTouch)
namespace Oculus::Interaction::Input {
class IButton;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRNearTouch;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRNearTouch*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRNearTouch*, "Oculus.Interaction.Input", "OVRNearTouch");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Controller, OVRInput::NearTouch, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRNearTouch
class CORDL_TYPE OVRNearTouch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _nearTouch, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__nearTouch, put=__cordl_internal_set__nearTouch)) ::GlobalNamespace::OVRInput_NearTouch  _nearTouch;

/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr operator  ::Oculus::Interaction::Input::IButton*() noexcept;

static inline ::Oculus::Interaction::Input::OVRNearTouch* New_ctor() ;

/// @brief Method Value, addr 0xa41fe64, size 0x60, virtual true, abstract: false, final true
inline bool Value() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr ::GlobalNamespace::OVRInput_NearTouch const& __cordl_internal_get__nearTouch() const;

constexpr ::GlobalNamespace::OVRInput_NearTouch& __cordl_internal_get__nearTouch() ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__nearTouch(::GlobalNamespace::OVRInput_NearTouch  value) ;

/// @brief Method .ctor, addr 0xa41fec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* i___Oculus__Interaction__Input__IButton() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRNearTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRNearTouch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRNearTouch(OVRNearTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRNearTouch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRNearTouch(OVRNearTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31152};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _nearTouch, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_NearTouch  ____nearTouch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OVRNearTouch, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OVRNearTouch, ____nearTouch) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OVRNearTouch) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
