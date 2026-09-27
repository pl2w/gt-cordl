#pragma once
// IWYU pragma private; include "GlobalNamespace/ArrayUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArrayUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArrayUtils*, "", "ArrayUtils");
// [Extension]
// Dependencies System.IComparable`1<T>, System.Object, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArrayUtils
class CORDL_TYPE ArrayUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
static inline int32_t BinarySearch(::ArrayW<T>  array, T  value) ;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Clone(::ArrayW<T>  source) ;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* Clone(::System::Collections::Generic::List_1<T>*  source) ;

/// @brief Method GTEnsureNoNulls, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline bool GTEnsureNoNulls(::by_ref<::ArrayW<T>>  unityObjs) ;

/// [Extension]
/// @brief Method IndexOfRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline int32_t IndexOfRef(::ArrayW<T>  array, T  value) ;

/// [Extension]
/// @brief Method IndexOfRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline int32_t IndexOfRef(::System::Collections::Generic::List_1<T>*  list, T  value) ;

/// [Extension]
/// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrEmpty(::ArrayW<T>  array) ;

/// [Extension]
/// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrEmpty(::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::ArrayW<T>  array, int32_t  from, int32_t  to) ;

/// [Extension]
/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::System::Collections::Generic::List_1<T>*  list, int32_t  from, int32_t  to) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayUtils(ArrayUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayUtils(ArrayUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ArrayUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
