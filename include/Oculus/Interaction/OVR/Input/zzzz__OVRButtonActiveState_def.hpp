#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRButtonActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRButtonActiveState)
namespace Oculus::Interaction {
class IActiveState;
}
// Forward declare root types
namespace Oculus::Interaction::OVR::Input {
class OVRButtonActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVR::Input::OVRButtonActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::Input::OVRButtonActiveState*, "Oculus.Interaction.OVR.Input", "OVRButtonActiveState");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Button, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::OVR::Input {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.Input.OVRButtonActiveState
class CORDL_TYPE OVRButtonActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field _button, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::GlobalNamespace::OVRInput_Button  _button;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

static inline ::Oculus::Interaction::OVR::Input::OVRButtonActiveState* New_ctor() ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__button() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__button() ;

constexpr void __cordl_internal_set__button(::GlobalNamespace::OVRInput_Button  value) ;

/// @brief Method .ctor, addr 0xa41b380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa41b320, size 0x60, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRButtonActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRButtonActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRButtonActiveState(OVRButtonActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRButtonActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRButtonActiveState(OVRButtonActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31132};

/// [SerializeField]
/// @brief Field _button, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRButtonActiveState, ____button) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::Input::OVRButtonActiveState) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR::Input
