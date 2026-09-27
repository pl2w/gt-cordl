#pragma once
// IWYU pragma private; include "Oculus/Interaction/BestSelectInteractorGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BestSelectInteractorGroup)
namespace Oculus::Interaction {
class BestSelectInteractorGroup___c;
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
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class BestSelectInteractorGroup;
}
namespace Oculus::Interaction {
class BestSelectInteractorGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::BestSelectInteractorGroup*);
MARK_REF_T(::Oculus::Interaction::BestSelectInteractorGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BestSelectInteractorGroup*, "Oculus.Interaction", "BestSelectInteractorGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BestSelectInteractorGroup___c*, "Oculus.Interaction", "BestSelectInteractorGroup/<>c");
// Dependencies Oculus.Interaction.InteractorGroup
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BestSelectInteractorGroup
class CORDL_TYPE BestSelectInteractorGroup : public ::Oculus::Interaction::InteractorGroup {
public:
// Declarations
using __c = ::Oculus::Interaction::BestSelectInteractorGroup___c;

 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

 __declspec(property(get=get_HasCandidate)) bool  HasCandidate;

 __declspec(property(get=get_HasInteractable)) bool  HasInteractable;

 __declspec(property(get=get_HasSelectedInteractable)) bool  HasSelectedInteractable;

/// @brief Field IsHover, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsHover, put=setStaticF_IsHover)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  IsHover;

/// @brief Field IsHoverAndShouldSelectPredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsHoverAndShouldSelectPredicate, put=setStaticF_IsHoverAndShouldSelectPredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  IsHoverAndShouldSelectPredicate;

/// @brief Field IsHoverAndShouldUnhoverPredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsHoverAndShouldUnhoverPredicate, put=setStaticF_IsHoverAndShouldUnhoverPredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  IsHoverAndShouldUnhoverPredicate;

/// @brief Field IsNormalAndShouldHoverPredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsNormalAndShouldHoverPredicate, put=setStaticF_IsNormalAndShouldHoverPredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  IsNormalAndShouldHoverPredicate;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldSelect)) bool  ShouldSelect;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

 __declspec(property(get=get_ShouldUnselect)) bool  ShouldUnselect;

/// @brief Field _bestInteractor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__bestInteractor, put=__cordl_internal_set__bestInteractor)) ::Oculus::Interaction::IInteractor*  _bestInteractor;

/// @brief Method Disable, addr 0xa410924, size 0x18, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xa410874, size 0xb0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method HandleBestInteractorStateChanged, addr 0xa410a50, size 0x3c, virtual false, abstract: false, final false
inline void HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method Hover, addr 0xa40fb04, size 0x2c, virtual true, abstract: false, final false
inline void Hover() ;

/// @brief Method InjectAllInteractorGroupBestSelect, addr 0xa410f34, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorGroupBestSelect(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

static inline ::Oculus::Interaction::BestSelectInteractorGroup* New_ctor() ;

/// @brief Method Preprocess, addr 0xa4102c8, size 0x21c, virtual true, abstract: false, final false
inline void Preprocess() ;

/// @brief Method Process, addr 0xa4104e4, size 0x390, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method Select, addr 0xa40ff24, size 0x260, virtual true, abstract: false, final false
inline void Select() ;

/// @brief Method TryHover, addr 0xa40fb30, size 0x220, virtual false, abstract: false, final false
inline bool TryHover(::System::Action_1<::Oculus::Interaction::IInteractor*>*  whenHover) ;

/// @brief Method Unhover, addr 0xa40fd50, size 0x1d4, virtual true, abstract: false, final false
inline void Unhover() ;

/// @brief Method Unselect, addr 0xa410184, size 0x144, virtual true, abstract: false, final false
inline void Unselect() ;

/// @brief Method UnsuscribeBestInteractor, addr 0xa41093c, size 0x114, virtual false, abstract: false, final false
inline void UnsuscribeBestInteractor() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get__bestInteractor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get__bestInteractor() ;

constexpr void __cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value) ;

/// @brief Method .ctor, addr 0xa410f38, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsHover() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsHoverAndShouldSelectPredicate() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsHoverAndShouldUnhoverPredicate() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsNormalAndShouldHoverPredicate() ;

/// @brief Method get_CandidateProperties, addr 0xa410d08, size 0x22c, virtual true, abstract: false, final false
inline ::System::Object* get_CandidateProperties() ;

/// @brief Method get_HasCandidate, addr 0xa410a8c, size 0xec, virtual true, abstract: false, final false
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0xa410b78, size 0xe0, virtual true, abstract: false, final false
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0xa410c58, size 0xb0, virtual true, abstract: false, final false
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_ShouldHover, addr 0xa40f8a4, size 0x78, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0xa40f9cc, size 0x7c, virtual true, abstract: false, final false
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0xa40f91c, size 0xb0, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0xa40fa48, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldUnselect() ;

static inline void setStaticF_IsHover(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

static inline void setStaticF_IsHoverAndShouldSelectPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

static inline void setStaticF_IsHoverAndShouldUnhoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

static inline void setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BestSelectInteractorGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BestSelectInteractorGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BestSelectInteractorGroup(BestSelectInteractorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BestSelectInteractorGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BestSelectInteractorGroup(BestSelectInteractorGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15746};

/// @brief Field _bestInteractor, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ____bestInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::BestSelectInteractorGroup, ____bestInteractor) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::BestSelectInteractorGroup) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BestSelectInteractorGroup/<>c
class CORDL_TYPE BestSelectInteractorGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::BestSelectInteractorGroup___c*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Action_1<::Oculus::Interaction::IInteractor*>*  __9__18_0;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action_1<::Oculus::Interaction::IInteractor*>*  __9__19_0;

static inline ::Oculus::Interaction::BestSelectInteractorGroup___c* New_ctor() ;

/// @brief Method <Preprocess>b__18_0, addr 0xa4111bc, size 0xa0, virtual false, abstract: false, final false
inline void _Preprocess_b__18_0(::Oculus::Interaction::IInteractor*  interactor) ;

/// @brief Method <Process>b__19_0, addr 0xa41125c, size 0xa0, virtual false, abstract: false, final false
inline void _Process_b__19_0(::Oculus::Interaction::IInteractor*  interactor) ;

/// @brief Method <.cctor>b__34_0, addr 0xa4112fc, size 0x124, virtual false, abstract: false, final false
inline bool __cctor_b__34_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.cctor>b__34_1, addr 0xa411420, size 0x128, virtual false, abstract: false, final false
inline bool __cctor_b__34_1(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.cctor>b__34_2, addr 0xa411548, size 0x128, virtual false, abstract: false, final false
inline bool __cctor_b__34_2(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.cctor>b__34_3, addr 0xa411670, size 0xac, virtual false, abstract: false, final false
inline bool __cctor_b__34_3(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method .ctor, addr 0xa4111b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::BestSelectInteractorGroup___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractor*>* getStaticF___9__18_0() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractor*>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Oculus::Interaction::BestSelectInteractorGroup___c*  value) ;

static inline void setStaticF___9__18_0(::System::Action_1<::Oculus::Interaction::IInteractor*>*  value) ;

static inline void setStaticF___9__19_0(::System::Action_1<::Oculus::Interaction::IInteractor*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BestSelectInteractorGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BestSelectInteractorGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BestSelectInteractorGroup___c(BestSelectInteractorGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BestSelectInteractorGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BestSelectInteractorGroup___c(BestSelectInteractorGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::BestSelectInteractorGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
