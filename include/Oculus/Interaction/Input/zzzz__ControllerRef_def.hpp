#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerRef)
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace Oculus::Interaction::Input {
struct ControllerInput;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ControllerRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerRef*, "Oculus.Interaction.Input", "ControllerRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerRef
class CORDL_TYPE ControllerRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_ControllerInput)) ::Oculus::Interaction::Input::ControllerInput  ControllerInput;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsPoseValid)) bool  IsPoseValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::IController"
constexpr operator  ::Oculus::Interaction::Input::IController*() noexcept;

/// @brief Method Awake, addr 0xa505a50, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerRef, addr 0xa50621c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllControllerRef(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa506220, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method IsButtonUsageAllActive, addr 0xa506170, size 0xac, virtual true, abstract: false, final true
inline bool IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

/// @brief Method IsButtonUsageAnyActive, addr 0xa5060c4, size 0xac, virtual true, abstract: false, final true
inline bool IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

static inline ::Oculus::Interaction::Input::ControllerRef* New_ctor() ;

/// @brief Method Start, addr 0xa505ab8, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetPointerPose, addr 0xa505f74, size 0xac, virtual true, abstract: false, final true
inline bool TryGetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetPose, addr 0xa505ec8, size 0xac, virtual true, abstract: false, final true
inline bool TryGetPose(::by_ref<::UnityEngine::Pose>  pose) ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get_Controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get_Controller() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr void __cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa5062f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenUpdated, addr 0xa505d6c, size 0xac, virtual true, abstract: false, final true
inline void add_WhenUpdated(::System::Action*  value) ;

/// @brief Method get_Active, addr 0xa505ec4, size 0x4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_ControllerInput, addr 0xa505ca4, size 0xc8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::ControllerInput get_ControllerInput() ;

/// @brief Method get_Handedness, addr 0xa505abc, size 0xa0, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0xa505b5c, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_IsPoseValid, addr 0xa505c00, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsPoseValid() ;

/// @brief Method get_Scale, addr 0xa506020, size 0xa4, virtual true, abstract: false, final true
inline float_t get_Scale() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::IController"
constexpr ::Oculus::Interaction::Input::IController* i___Oculus__Interaction__Input__IController() noexcept;

/// @brief Method remove_WhenUpdated, addr 0xa505e18, size 0xac, virtual true, abstract: false, final true
inline void remove_WhenUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerRef(ControllerRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerRef(ControllerRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16460};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// @brief Field Controller, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ___Controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerRef, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerRef, ___Controller) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
