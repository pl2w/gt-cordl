#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRInputDeviceActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRInputDeviceActiveState)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRInputDeviceActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRInputDeviceActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRInputDeviceActiveState*, "Oculus.Interaction.Input", "OVRInputDeviceActiveState");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRInputDeviceActiveState
class CORDL_TYPE OVRInputDeviceActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field _controllerTypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerTypes, put=__cordl_internal_set__controllerTypes)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  _controllerTypes;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method InjectAllOVRInputDeviceActiveState, addr 0xa41fe4c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllOVRInputDeviceActiveState(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  controllerTypes) ;

/// @brief Method InjectControllerTypes, addr 0xa41fe54, size 0x8, virtual false, abstract: false, final false
inline void InjectControllerTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  controllerTypes) ;

static inline ::Oculus::Interaction::Input::OVRInputDeviceActiveState* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>* const& __cordl_internal_get__controllerTypes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*& __cordl_internal_get__controllerTypes() ;

constexpr void __cordl_internal_set__controllerTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  value) ;

/// @brief Method .ctor, addr 0xa41fe5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa41fcac, size 0x1a0, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRInputDeviceActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRInputDeviceActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRInputDeviceActiveState(OVRInputDeviceActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRInputDeviceActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRInputDeviceActiveState(OVRInputDeviceActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31151};

/// [SerializeField]
/// @brief Field _controllerTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_Controller>*  ____controllerTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OVRInputDeviceActiveState, ____controllerTypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OVRInputDeviceActiveState) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
