#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerAxis2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerAxis2D)
namespace Oculus::Interaction::Input {
struct ControllerAxis2DUsage;
}
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction {
class ControllerAxis2D;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerAxis2D*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerAxis2D*, "Oculus.Interaction", "ControllerAxis2D");
// Dependencies Oculus.Interaction.Input.ControllerAxis2DUsage, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerAxis2D
class CORDL_TYPE ControllerAxis2D : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Axis, put=set_Axis)) ::Oculus::Interaction::Input::ControllerAxis2DUsage  Axis;

 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _axis, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::Oculus::Interaction::Input::ControllerAxis2DUsage  _axis;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _started, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis2D"
constexpr operator  ::Oculus::Interaction::Input::IAxis2D*() noexcept;

/// @brief Method Awake, addr 0xa411b3c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerAxis2DActiveState, addr 0xa411d44, size 0x4, virtual false, abstract: false, final false
inline void InjectAllControllerAxis2DActiveState(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa411d48, size 0xcc, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::ControllerAxis2D* New_ctor() ;

/// @brief Method Start, addr 0xa411b94, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Value, addr 0xa411bb8, size 0x18c, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Value() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage const& __cordl_internal_get__axis() const;

constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage& __cordl_internal_get__axis() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__axis(::Oculus::Interaction::Input::ControllerAxis2DUsage  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa411e14, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Axis, addr 0xa411b2c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerAxis2DUsage get_Axis() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa411b1c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis2D"
constexpr ::Oculus::Interaction::Input::IAxis2D* i___Oculus__Interaction__Input__IAxis2D() noexcept;

/// @brief Method set_Axis, addr 0xa411b34, size 0x8, virtual false, abstract: false, final false
inline void set_Axis(::Oculus::Interaction::Input::ControllerAxis2DUsage  value) ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa411b24, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAxis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAxis2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAxis2D(ControllerAxis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAxis2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAxis2D(ControllerAxis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15751};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// [SerializeField]
/// @brief Field _axis, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerAxis2DUsage  ____axis;

/// @brief Field _started, offset: 0x34, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerAxis2D, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerAxis2D, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerAxis2D, ____axis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerAxis2D, ____started) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerAxis2D) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
