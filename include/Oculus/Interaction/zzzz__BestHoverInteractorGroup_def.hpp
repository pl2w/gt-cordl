#pragma once
// IWYU pragma private; include "Oculus/Interaction/BestHoverInteractorGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BestHoverInteractorGroup)
namespace Oculus::Interaction {
class BestHoverInteractorGroup___c;
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
class BestHoverInteractorGroup;
}
namespace Oculus::Interaction {
class BestHoverInteractorGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::BestHoverInteractorGroup*);
MARK_REF_T(::Oculus::Interaction::BestHoverInteractorGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BestHoverInteractorGroup*, "Oculus.Interaction", "BestHoverInteractorGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::BestHoverInteractorGroup___c*, "Oculus.Interaction", "BestHoverInteractorGroup/<>c");
// Dependencies Oculus.Interaction.InteractorGroup
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BestHoverInteractorGroup
class CORDL_TYPE BestHoverInteractorGroup : public ::Oculus::Interaction::InteractorGroup {
public:
// Declarations
using __c = ::Oculus::Interaction::BestHoverInteractorGroup___c;

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

/// @brief Method Disable, addr 0xa40f154, size 0x18, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0xa40f0a4, size 0xb0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method HandleBestInteractorStateChanged, addr 0xa40f070, size 0x34, virtual false, abstract: false, final false
inline void HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method Hover, addr 0xa40e568, size 0x2c, virtual true, abstract: false, final false
inline void Hover() ;

/// @brief Method HoverAtIndex, addr 0xa40e6d4, size 0x214, virtual false, abstract: false, final false
inline void HoverAtIndex(int32_t  interactorIndex) ;

/// @brief Method InjectAllInteractorGroupBestHover, addr 0xa40f5e4, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorGroupBestHover(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

static inline ::Oculus::Interaction::BestHoverInteractorGroup* New_ctor() ;

/// @brief Method Preprocess, addr 0xa40eda0, size 0x1f8, virtual true, abstract: false, final false
inline void Preprocess() ;

/// @brief Method Process, addr 0xa40ef98, size 0xd8, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method Select, addr 0xa40eb94, size 0xc8, virtual true, abstract: false, final false
inline void Select() ;

/// @brief Method TryHover, addr 0xa40e594, size 0x140, virtual false, abstract: false, final false
inline bool TryHover(int32_t  betterThan) ;

/// @brief Method TryReplaceHover, addr 0xa40e8e8, size 0x58, virtual false, abstract: false, final false
inline bool TryReplaceHover() ;

/// @brief Method Unhover, addr 0xa40ea50, size 0x144, virtual true, abstract: false, final false
inline void Unhover() ;

/// @brief Method Unselect, addr 0xa40ec5c, size 0x144, virtual true, abstract: false, final false
inline void Unselect() ;

/// @brief Method UnsuscribeBestInteractor, addr 0xa40e940, size 0x110, virtual false, abstract: false, final false
inline void UnsuscribeBestInteractor() ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get__bestInteractor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get__bestInteractor() ;

constexpr int32_t const& __cordl_internal_get__bestInteractorIndex() const;

constexpr int32_t& __cordl_internal_get__bestInteractorIndex() ;

constexpr void __cordl_internal_set__bestInteractor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set__bestInteractorIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa40f5e8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_IsNormalAndShouldHoverPredicate() ;

/// @brief Method get_CandidateProperties, addr 0xa40f3b8, size 0x22c, virtual true, abstract: false, final false
inline ::System::Object* get_CandidateProperties() ;

/// @brief Method get_HasCandidate, addr 0xa40f16c, size 0xec, virtual true, abstract: false, final false
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0xa40f258, size 0xb0, virtual true, abstract: false, final false
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0xa40f308, size 0xb0, virtual true, abstract: false, final false
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_ShouldHover, addr 0xa40e2bc, size 0x78, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0xa40e3f0, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0xa40e334, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0xa40e4ac, size 0xbc, virtual true, abstract: false, final false
inline bool get_ShouldUnselect() ;

static inline void setStaticF_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BestHoverInteractorGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BestHoverInteractorGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BestHoverInteractorGroup(BestHoverInteractorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BestHoverInteractorGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BestHoverInteractorGroup(BestHoverInteractorGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15744};

/// @brief Field _bestInteractor, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ____bestInteractor;

/// @brief Field _bestInteractorIndex, offset: 0x98, size: 0x4, def value: None
 int32_t  ____bestInteractorIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::BestHoverInteractorGroup, ____bestInteractor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::BestHoverInteractorGroup, ____bestInteractorIndex) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::BestHoverInteractorGroup) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.BestHoverInteractorGroup/<>c
class CORDL_TYPE BestHoverInteractorGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::BestHoverInteractorGroup___c*  __9;

static inline ::Oculus::Interaction::BestHoverInteractorGroup___c* New_ctor() ;

/// @brief Method <.cctor>b__34_0, addr 0xa40f780, size 0x124, virtual false, abstract: false, final false
inline bool __cctor_b__34_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method .ctor, addr 0xa40f778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::BestHoverInteractorGroup___c* getStaticF___9() ;

static inline void setStaticF___9(::Oculus::Interaction::BestHoverInteractorGroup___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BestHoverInteractorGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BestHoverInteractorGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BestHoverInteractorGroup___c(BestHoverInteractorGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BestHoverInteractorGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BestHoverInteractorGroup___c(BestHoverInteractorGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::BestHoverInteractorGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
