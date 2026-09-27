#pragma once
// IWYU pragma private; include "Oculus/Interaction/VirtualSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualSelector)
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
class VirtualSelector___c;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Interaction {
class VirtualSelector;
}
namespace Oculus::Interaction {
class VirtualSelector___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::VirtualSelector*);
MARK_REF_T(::Oculus::Interaction::VirtualSelector___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VirtualSelector*, "Oculus.Interaction", "VirtualSelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VirtualSelector___c*, "Oculus.Interaction", "VirtualSelector/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VirtualSelector
class CORDL_TYPE VirtualSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::VirtualSelector___c;

/// @brief Field WhenSelected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelected, put=__cordl_internal_set_WhenSelected)) ::System::Action*  WhenSelected;

/// @brief Field WhenUnselected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUnselected, put=__cordl_internal_set_WhenUnselected)) ::System::Action*  WhenUnselected;

/// @brief Field _currentlySelected, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentlySelected, put=__cordl_internal_set__currentlySelected)) bool  _currentlySelected;

/// @brief Field _selectFlag, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectFlag, put=__cordl_internal_set__selectFlag)) bool  _selectFlag;

/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr operator  ::Oculus::Interaction::ISelector*() noexcept;

static inline ::Oculus::Interaction::VirtualSelector* New_ctor() ;

/// @brief Method OnValidate, addr 0xa48234c, size 0x4, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Select, addr 0xa4822ec, size 0xc, virtual false, abstract: false, final false
inline void Select() ;

/// @brief Method Unselect, addr 0xa482344, size 0x8, virtual false, abstract: false, final false
inline void Unselect() ;

/// @brief Method UpdateSelection, addr 0xa4822f8, size 0x4c, virtual false, abstract: false, final false
inline void UpdateSelection() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenSelected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenSelected() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUnselected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUnselected() ;

constexpr bool const& __cordl_internal_get__currentlySelected() const;

constexpr bool& __cordl_internal_get__currentlySelected() ;

constexpr bool const& __cordl_internal_get__selectFlag() const;

constexpr bool& __cordl_internal_get__selectFlag() ;

constexpr void __cordl_internal_set_WhenSelected(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUnselected(::System::Action*  value) ;

constexpr void __cordl_internal_set__currentlySelected(bool  value) ;

constexpr void __cordl_internal_set__selectFlag(bool  value) ;

/// @brief Method .ctor, addr 0xa482350, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa48207c, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa4821b4, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUnselected(::System::Action*  value) ;

/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* i___Oculus__Interaction__ISelector() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa482118, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa482250, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUnselected(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualSelector(VirtualSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualSelector(VirtualSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15983};

/// [Tooltip("Toggles the selector from within the Unity inspector.")]
/// [SerializeField]
/// @brief Field _selectFlag, offset: 0x20, size: 0x1, def value: None
 bool  ____selectFlag;

/// [CompilerGenerated]
/// @brief Field WhenSelected, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___WhenSelected;

/// [CompilerGenerated]
/// @brief Field WhenUnselected, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___WhenUnselected;

/// @brief Field _currentlySelected, offset: 0x38, size: 0x1, def value: None
 bool  ____currentlySelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::VirtualSelector, ____selectFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualSelector, ___WhenSelected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualSelector, ___WhenUnselected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::VirtualSelector, ____currentlySelected) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::VirtualSelector) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VirtualSelector/<>c
class CORDL_TYPE VirtualSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::VirtualSelector___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Action*  __9__12_0;

/// @brief Field <>9__12_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_1, put=setStaticF___9__12_1)) ::System::Action*  __9__12_1;

static inline ::Oculus::Interaction::VirtualSelector___c* New_ctor() ;

/// @brief Method <.ctor>b__12_0, addr 0xa48254c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__12_0() ;

/// @brief Method <.ctor>b__12_1, addr 0xa482550, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__12_1() ;

/// @brief Method .ctor, addr 0xa482544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::VirtualSelector___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__12_0() ;

static inline ::System::Action* getStaticF___9__12_1() ;

static inline void setStaticF___9(::Oculus::Interaction::VirtualSelector___c*  value) ;

static inline void setStaticF___9__12_0(::System::Action*  value) ;

static inline void setStaticF___9__12_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualSelector___c(VirtualSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualSelector___c(VirtualSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::VirtualSelector___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
