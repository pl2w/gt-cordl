#pragma once
// IWYU pragma private; include "GorillaExtensions/ListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaExtensions {
class ListExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::ListExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::ListExtensions*, "GorillaExtensions", "ListExtensions");
// [Extension]
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.ListExtensions
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ShuffleIntoCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TCol,typename TVal>
requires(::cordl_internals::type_constraint<TCol, ::System::Collections::Generic::ICollection_1<TVal>*> && ::cordl_internals::default_constructor_constraint<TCol>)
static inline TCol ShuffleIntoCollection(::System::Collections::Generic::List_1<TVal>*  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListExtensions(ListExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListExtensions(ListExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::ListExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
