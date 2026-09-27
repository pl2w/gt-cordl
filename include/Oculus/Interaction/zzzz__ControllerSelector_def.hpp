#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/zzzz__ControllerSelector_ControllerSelectorLogicOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerSelector)
namespace GlobalNamespace {
struct ControllerSelector_ControllerSelectorLogicOperator;
}
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class ControllerSelector___c;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ControllerSelector;
}
namespace Oculus::Interaction {
class ControllerSelector___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerSelector*);
MARK_REF_T(::Oculus::Interaction::ControllerSelector___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerSelector*, "Oculus.Interaction", "ControllerSelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerSelector___c*, "Oculus.Interaction", "ControllerSelector/<>c");
// Dependencies Oculus.Interaction.ControllerSelector::ControllerSelectorLogicOperator, Oculus.Interaction.Input.ControllerButtonUsage, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerSelector
class CORDL_TYPE ControllerSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ControllerSelectorLogicOperator = ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator;

using __c = ::Oculus::Interaction::ControllerSelector___c;

 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_ControllerButtonUsage, put=set_ControllerButtonUsage)) ::Oculus::Interaction::Input::ControllerButtonUsage  ControllerButtonUsage;

 __declspec(property(get=get_RequireButtonUsages, put=set_RequireButtonUsages)) ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  RequireButtonUsages;

/// @brief Field WhenSelected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelected, put=__cordl_internal_set_WhenSelected)) ::System::Action*  WhenSelected;

/// @brief Field WhenUnselected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUnselected, put=__cordl_internal_set_WhenUnselected)) ::System::Action*  WhenUnselected;

/// @brief Field <Controller>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _controllerButtonUsage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerButtonUsage, put=__cordl_internal_set__controllerButtonUsage)) ::Oculus::Interaction::Input::ControllerButtonUsage  _controllerButtonUsage;

/// @brief Field _requireButtonUsages, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__requireButtonUsages, put=__cordl_internal_set__requireButtonUsages)) ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  _requireButtonUsages;

/// @brief Field _selected, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) bool  _selected;

/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr operator  ::Oculus::Interaction::ISelector*() noexcept;

/// @brief Method Awake, addr 0xa47b1a8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerSelector, addr 0xa47b358, size 0x4, virtual false, abstract: false, final false
inline void InjectAllControllerSelector(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa47b35c, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::ControllerSelector* New_ctor() ;

/// @brief Method Start, addr 0xa47b200, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa47b204, size 0x154, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenSelected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenSelected() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUnselected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUnselected() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& __cordl_internal_get__controllerButtonUsage() const;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& __cordl_internal_get__controllerButtonUsage() ;

constexpr ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator const& __cordl_internal_get__requireButtonUsages() const;

constexpr ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator& __cordl_internal_get__requireButtonUsages() ;

constexpr bool const& __cordl_internal_get__selected() const;

constexpr bool& __cordl_internal_get__selected() ;

constexpr void __cordl_internal_set_WhenSelected(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUnselected(::System::Action*  value) ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__controllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

constexpr void __cordl_internal_set__requireButtonUsages(::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  value) ;

constexpr void __cordl_internal_set__selected(bool  value) ;

/// @brief Method .ctor, addr 0xa47b42c, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa47af38, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa47b070, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa47af28, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// @brief Method get_ControllerButtonUsage, addr 0xa47af08, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerButtonUsage get_ControllerButtonUsage() ;

/// @brief Method get_RequireButtonUsages, addr 0xa47af18, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator get_RequireButtonUsages() ;

/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* i___Oculus__Interaction__ISelector() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa47afd4, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa47b10c, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa47af30, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

/// @brief Method set_ControllerButtonUsage, addr 0xa47af10, size 0x8, virtual false, abstract: false, final false
inline void set_ControllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

/// @brief Method set_RequireButtonUsages, addr 0xa47af20, size 0x8, virtual false, abstract: false, final false
inline void set_RequireButtonUsages(::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerSelector(ControllerSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerSelector(ControllerSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15966};

/// [Tooltip("The controller to check.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [Tooltip("The buttons to check.")]
/// [SerializeField]
/// @brief Field _controllerButtonUsage, offset: 0x28, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerButtonUsage  ____controllerButtonUsage;

/// [Tooltip("Determines how many of the checked buttons must be pressed for the controller to be selecting. \'All\' requires all of the buttons to be pressed. \'Any\' requires only one to be pressed.")]
/// [SerializeField]
/// @brief Field _requireButtonUsages, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  ____requireButtonUsages;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenSelected, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___WhenSelected;

/// [CompilerGenerated]
/// @brief Field WhenUnselected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___WhenUnselected;

/// @brief Field _selected, offset: 0x48, size: 0x1, def value: None
 bool  ____selected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ____controllerButtonUsage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ____requireButtonUsages) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ____Controller_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ___WhenSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ___WhenUnselected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerSelector, ____selected) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerSelector) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerSelector/<>c
class CORDL_TYPE ControllerSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ControllerSelector___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Action*  __9__26_0;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::System::Action*  __9__26_1;

static inline ::Oculus::Interaction::ControllerSelector___c* New_ctor() ;

/// @brief Method <.ctor>b__26_0, addr 0xa47b628, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__26_0() ;

/// @brief Method <.ctor>b__26_1, addr 0xa47b62c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__26_1() ;

/// @brief Method .ctor, addr 0xa47b620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ControllerSelector___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__26_0() ;

static inline ::System::Action* getStaticF___9__26_1() ;

static inline void setStaticF___9(::Oculus::Interaction::ControllerSelector___c*  value) ;

static inline void setStaticF___9__26_0(::System::Action*  value) ;

static inline void setStaticF___9__26_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerSelector___c(ControllerSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerSelector___c(ControllerSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ControllerSelector___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
