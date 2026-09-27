#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPoolUtil_RentArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolUtil_RentArray_1)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class ArrayPool_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ArrayPoolUtil_RentArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ArrayPoolUtil_RentArray_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ArrayPoolUtil_RentArray_1, "Cysharp.Threading.Tasks.Internal", "ArrayPoolUtil/RentArray`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Internal.ArrayPoolUtil/RentArray`1<T>
struct CORDL_TYPE ArrayPoolUtil_RentArray_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeManually, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DisposeManually(bool  clearArray) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array, int32_t  length, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ArrayPoolUtil_RentArray_1() ;

// Ctor Parameters [CppParam { name: "Array", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pool", ty: "::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr ArrayPoolUtil_RentArray_1(::ArrayW<T>  Array, int32_t  Length, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Array, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  Array;

/// @brief Field Length, offset: 0x8, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field pool, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
