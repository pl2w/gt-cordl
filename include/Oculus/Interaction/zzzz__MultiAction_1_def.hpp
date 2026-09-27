#pragma once
// IWYU pragma private; include "Oculus/Interaction/MultiAction_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MultiAction_1)
namespace Oculus::Interaction {
template<typename T>
class MAction_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename T>
class MultiAction_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::MultiAction_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::MultiAction_1, "Oculus.Interaction", "MultiAction`1");
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.MultiAction`1<T>
class CORDL_TYPE MultiAction_1 : public ::System::Object {
public:
// Declarations
/// @brief Field actions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*  actions;

/// @brief Convert operator to "::Oculus::Interaction::MAction_1<T>"
constexpr operator  ::Oculus::Interaction::MAction_1<T>*() noexcept;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T  t) ;

static inline ::Oculus::Interaction::MultiAction_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>* const& __cordl_internal_get_actions() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*& __cordl_internal_get_actions() ;

constexpr void __cordl_internal_set_actions(::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_Action, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_Action(::System::Action_1<T>*  value) ;

/// @brief Convert to "::Oculus::Interaction::MAction_1<T>"
constexpr ::Oculus::Interaction::MAction_1<T>* i___Oculus__Interaction__MAction_1_T_() noexcept;

/// @brief Method remove_Action, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_Action(::System::Action_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiAction_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiAction_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiAction_1(MultiAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiAction_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiAction_1(MultiAction_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15797};

/// @brief Field actions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*  ___actions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
