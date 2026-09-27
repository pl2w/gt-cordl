#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPoolUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolUtil)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class ArrayPool_1;
}
namespace GlobalNamespace {
template<typename T>
struct ArrayPoolUtil_RentArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class ArrayPoolUtil;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil*, "Cysharp.Threading.Tasks.Internal", "ArrayPoolUtil");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ArrayPoolUtil
class CORDL_TYPE ArrayPoolUtil : public ::System::Object {
public:
// Declarations
template<typename T>
using RentArray_1 = ::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>;

/// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCapacity(::by_ref<::ArrayW<T>>  array, int32_t  index, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool) ;

/// @brief Method EnsureCapacityCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureCapacityCore(::by_ref<::ArrayW<T>>  array, int32_t  index, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool) ;

/// @brief Method Materialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::ArrayPoolUtil_RentArray_1<T> Materialize(::System::Collections::Generic::IEnumerable_1<T>*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayPoolUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPoolUtil(ArrayPoolUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPoolUtil(ArrayPoolUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
