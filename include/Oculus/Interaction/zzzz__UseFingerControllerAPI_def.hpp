#pragma once
// IWYU pragma private; include "Oculus/Interaction/UseFingerControllerAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UseFingerControllerAPI)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class IFingerUseAPI;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class UseFingerControllerAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UseFingerControllerAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UseFingerControllerAPI*, "Oculus.Interaction", "UseFingerControllerAPI");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UseFingerControllerAPI
class CORDL_TYPE UseFingerControllerAPI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr operator  ::Oculus::Interaction::IFingerUseAPI*() noexcept;

/// @brief Method Awake, addr 0xa46a4f8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerUseStrength, addr 0xa46a57c, size 0x240, virtual true, abstract: false, final true
inline float_t GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InjectAllUseFingerRawPinchAPI, addr 0xa46a7bc, size 0x4, virtual false, abstract: false, final false
inline void InjectAllUseFingerRawPinchAPI(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa46a7c0, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::UseFingerControllerAPI* New_ctor() ;

/// @brief Method Start, addr 0xa46a550, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46a890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa46a4e8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* i___Oculus__Interaction__IFingerUseAPI() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa46a4f0, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UseFingerControllerAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UseFingerControllerAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UseFingerControllerAPI(UseFingerControllerAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UseFingerControllerAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UseFingerControllerAPI(UseFingerControllerAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15897};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UseFingerControllerAPI, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerControllerAPI, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerControllerAPI, ____started) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UseFingerControllerAPI) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
