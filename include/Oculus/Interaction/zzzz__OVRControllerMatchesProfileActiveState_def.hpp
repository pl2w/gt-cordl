#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVRControllerMatchesProfileActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InteractionProfile_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerMatchesProfileActiveState)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction {
class IActiveState;
}
// Forward declare root types
namespace Oculus::Interaction {
class OVRControllerMatchesProfileActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVRControllerMatchesProfileActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVRControllerMatchesProfileActiveState*, "Oculus.Interaction", "OVRControllerMatchesProfileActiveState");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Controller, OVRInput::InteractionProfile, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OVRControllerMatchesProfileActiveState
class CORDL_TYPE OVRControllerMatchesProfileActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _profile, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__profile, put=__cordl_internal_set__profile)) ::GlobalNamespace::OVRInput_InteractionProfile  _profile;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method InjectAllOVRControllerSupportsPressure, addr 0xa41a138, size 0x8, virtual false, abstract: false, final false
inline void InjectAllOVRControllerSupportsPressure(::GlobalNamespace::OVRInput_Controller  controller) ;

static inline ::Oculus::Interaction::OVRControllerMatchesProfileActiveState* New_ctor() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr ::GlobalNamespace::OVRInput_InteractionProfile const& __cordl_internal_get__profile() const;

constexpr ::GlobalNamespace::OVRInput_InteractionProfile& __cordl_internal_get__profile() ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__profile(::GlobalNamespace::OVRInput_InteractionProfile  value) ;

/// @brief Method .ctor, addr 0xa41a140, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa41a0c4, size 0x74, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerMatchesProfileActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerMatchesProfileActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerMatchesProfileActiveState(OVRControllerMatchesProfileActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerMatchesProfileActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerMatchesProfileActiveState(OVRControllerMatchesProfileActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31122};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _profile, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_InteractionProfile  ____profile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVRControllerMatchesProfileActiveState, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRControllerMatchesProfileActiveState, ____profile) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVRControllerMatchesProfileActiveState) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
