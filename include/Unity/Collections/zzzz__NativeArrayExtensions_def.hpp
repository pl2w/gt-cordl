#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayExtensions)
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeArrayExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Collections::NativeArrayExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeArrayExtensions*, "Unity.Collections", "NativeArrayExtensions");
// [Extension]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.IEquatable`1<T>, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeArrayExtensions
class CORDL_TYPE NativeArrayExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool Contains(::GlobalNamespace::NativeArray_1_ReadOnly<T>  array, U  value) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool Contains(::Unity::Collections::NativeArray_1<T>  array, U  value) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t IndexOf(void*  ptr, int32_t  length, U  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeArrayExtensions(NativeArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeArrayExtensions(NativeArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::NativeArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
