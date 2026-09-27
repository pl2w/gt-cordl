#pragma once
// IWYU pragma private; include "Unity/Collections/ListExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Unity::Collections {
class ListExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::ListExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::ListExtensions*, "Unity.Collections", "ListExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.ListExtensions
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RemoveAtSwapBack(::System::Collections::Generic::List_1<T>*  list, int32_t  index) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::ListExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
