#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeCollectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NativeCollectionExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NativeCollectionExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NativeCollectionExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeCollectionExtensions*, "", "NativeCollectionExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NativeCollectionExtensions
class CORDL_TYPE NativeCollectionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::ArrayW<T> ToArray(::Unity::Collections::NativeList_1<T>  list) ;

/// [Extension]
/// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::Collections::Generic::List_1<T>* ToList(::Unity::Collections::NativeList_1<T>  list) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeCollectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeCollectionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeCollectionExtensions(NativeCollectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeCollectionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeCollectionExtensions(NativeCollectionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{486};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NativeCollectionExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
