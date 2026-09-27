#pragma once
// IWYU pragma private; include "Oculus/Interaction/FirstHoverInteractorGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirstHoverInteractorGroup)
namespace Oculus::Interaction {
class FirstHoverInteractorGroup___c;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
class InteractorGroup_InteractorPredicate;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class FirstHoverInteractorGroup;
}
namespace Oculus::Interaction {
class FirstHoverInteractorGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FirstHoverInteractorGroup*);
MARK_REF_T(::Oculus::Interaction::FirstHoverInteractorGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FirstHoverInteractorGroup*, "Oculus.Interaction", "FirstHoverInteractorGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FirstHoverInteractorGroup___c*, "Oculus.Interaction", "FirstHoverInteractorGroup/<>c");
// Dependencies Oculus.Interaction.InteractorGroup
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FirstHoverInteractorGroup
class CORDL_TYPE FirstHoverInteractorGroup : public ::Oculus::Interaction::InteractorGroup {
public:
// Declarations
using __c = ::Oculus::Interaction::FirstHoverInteractorGroup___c;

 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

 __declspec(property(get=get_HasCandidate)) bool  HasCandidate;

 __declspec(property(get=get_HasInteractable)) bool  HasInteractable;

 __declspec(property(get=get_HasSelectedInteractable)) bool  HasSelectedInteractable;

/// @brief Field IsNormalAndShouldHoverPredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsNormalAndShouldHoverPredicate, put=setStaticF_IsNormalAndShouldHoverPredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  IsNormalAndShouldHoverPredicate;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldSelect)) bool  ShouldSelect;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

 __declspec(property(get=get_ShouldUnselect)) bool  ShouldUnselect;

/// @brief Field _bestInteractor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__bestInteractor, put=__cordl_internal_set__bestInteractor)) ::Oculus::Interaction::IInteractor*  _bestInteractor;

/// @brief Field _bestInteractorIndex, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__bestInteractorIndex, put=__cordl_internal_set__bestInteractorIndex)) int32_t  _bestInteractorIndex;

/// @brief Method Disable, addr 0xa412f28, size 0x18, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xa412e78, size 0xb0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method HandleBestInteractorStateChanged, addr 0xa412e44, size 0x34, virtual false, abstract: false, final false
inline void HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method Hover, addr 0xa4124ec, size 0x2c, virtual true, abstract: false, final false
inline void Hover() ;

/// @brief Method HoverAtIndex, addr 0xa4125b0, size 0x214, virtual false, abstract: false, final false
inline void HoverAtIndex(int32_t  interactorIndex) ;

/// @brief Method InjectAllInteractorGroupFirstHover, addr 0xa4133b8, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorGroupFirstHover(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

static inline ::Oculus::Interaction::FirstHoverInteractorGroup* New_ctor() ;

/// @brief Method Preprocess, addr 0xa412c4c, size 0x1f8, virtual true, abstract: false, final false
inline void Preprocess() ;

/// @brief Method Select, addr 0xa412a40, size 0xc8, virtual true, abstract: false, final false
inline void Select() ;

/// @brief Method TryHover, addr 0xa412518, size 0x98, virtual false, abstract: false, final false
inline bool TryHover(int32_t  skipIndex) ;

/// @brief Method Unhover, addr 0xa4128d4, size 0x16c, virtual true, abstract: false, final false
inline void Unhover() ;

/// @brief Method Unselect, addr 0xa412b08, size 0x144, virtual true, abstract: false, final false
inline void Unselect() ;

/// @brief Method UnsuscribeBestInteractor, addr 0xa4127c4, size 0x110, virtual false, abstract: false, final false
inline void UnsuscribeBestInteractor() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get__bestInteractor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get__bestInteractor() ;

constexpr int32_t const& __cordl_internal_get__bestInteractorIndex() const;

constexpr int32_t& __cordl_internal_get__bestInteractorIndex() ;

constexpr void __cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__bestInteractorIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4133bc, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsNormalAndShouldHoverPredicate() ;

/// @brief Method get_CandidateProperties, addr 0xa41318c, size 0x22c, virtual true, abstract: false, final false
inline ::System::Object* get_CandidateProperties() ;

/// @brief Method get_HasCandidate, addr 0xa412f40, size 0xec, virtual true, abstract: false, final false
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0xa41302c, size 0xb0, virtual true, abstract: false, final false
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0xa4130dc, size 0xb0, virtual true, abstract: false, final false
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_ShouldHover, addr 0xa412240, size 0x78, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0xa412374, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0xa4122b8, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0xa412430, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldUnselect() ;

static inline void setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstHoverInteractorGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstHoverInteractorGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstHoverInteractorGroup(FirstHoverInteractorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstHoverInteractorGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstHoverInteractorGroup(FirstHoverInteractorGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15754};

/// @brief Field _bestInteractor, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ____bestInteractor;

/// @brief Field _bestInteractorIndex, offset: 0x98, size: 0x4, def value: None
 int32_t  ____bestInteractorIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FirstHoverInteractorGroup, ____bestInteractor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FirstHoverInteractorGroup, ____bestInteractorIndex) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FirstHoverInteractorGroup) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FirstHoverInteractorGroup/<>c
class CORDL_TYPE FirstHoverInteractorGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::FirstHoverInteractorGroup___c*  __9;

static inline ::Oculus::Interaction::FirstHoverInteractorGroup___c* New_ctor() ;

/// @brief Method <.cctor>b__32_0, addr 0xa413554, size 0x124, virtual false, abstract: false, final false
inline bool __cctor_b__32_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method .ctor, addr 0xa41354c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::FirstHoverInteractorGroup___c* getStaticF___9() ;

static inline void setStaticF___9(::Oculus::Interaction::FirstHoverInteractorGroup___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstHoverInteractorGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstHoverInteractorGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstHoverInteractorGroup___c(FirstHoverInteractorGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstHoverInteractorGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstHoverInteractorGroup___c(FirstHoverInteractorGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::FirstHoverInteractorGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
