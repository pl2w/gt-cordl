#pragma once
// IWYU pragma private; include "Oculus/Interaction/FinalAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FinalAction)
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Interaction {
class FinalAction;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FinalAction*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FinalAction*, "Oculus.Interaction", "FinalAction");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FinalAction
class CORDL_TYPE FinalAction : public ::System::Object {
public:
// Declarations
/// @brief Field _action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__action, put=__cordl_internal_set__action)) ::System::Action*  _action;

/// @brief Field _cancelled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__cancelled, put=__cordl_internal_set__cancelled)) bool  _cancelled;

/// @brief Method Cancel, addr 0xa48ba30, size 0xc, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Finalize, addr 0xa48ba3c, size 0xd4, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Oculus::Interaction::FinalAction* New_ctor(::System::Action*  action) ;

constexpr ::System::Action* const& __cordl_internal_get__action() const;

constexpr ::System::Action*& __cordl_internal_get__action() ;

constexpr bool const& __cordl_internal_get__cancelled() const;

constexpr bool& __cordl_internal_get__cancelled() ;

constexpr void __cordl_internal_set__action(::System::Action*  value) ;

constexpr void __cordl_internal_set__cancelled(bool  value) ;

/// @brief Method .ctor, addr 0xa48ba00, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalAction(FinalAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalAction(FinalAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16026};

/// @brief Field _action, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ____action;

/// @brief Field _cancelled, offset: 0x18, size: 0x1, def value: None
 bool  ____cancelled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FinalAction, ____action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FinalAction, ____cancelled) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FinalAction) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
