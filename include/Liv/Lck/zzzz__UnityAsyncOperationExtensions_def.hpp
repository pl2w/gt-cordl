#pragma once
// IWYU pragma private; include "Liv/Lck/UnityAsyncOperationExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityAsyncOperationExtensions)
namespace Liv::Lck {
class UnityAsyncOperationExtensions___c__DisplayClass0_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Liv::Lck {
class UnityAsyncOperationExtensions;
}
namespace Liv::Lck {
class UnityAsyncOperationExtensions___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UnityAsyncOperationExtensions*);
MARK_REF_T(::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UnityAsyncOperationExtensions*, "Liv.Lck", "UnityAsyncOperationExtensions");
DEFINE_IL2CPP_CLASS(::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*, "Liv.Lck", "UnityAsyncOperationExtensions/<>c__DisplayClass0_0");
// [Extension]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.UnityAsyncOperationExtensions
class CORDL_TYPE UnityAsyncOperationExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0;

/// [Extension]
/// @brief Method AsTask, addr 0x9d33acc, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* AsTask(::UnityEngine::AsyncOperation*  op) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncOperationExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncOperationExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncOperationExtensions(UnityAsyncOperationExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncOperationExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncOperationExtensions(UnityAsyncOperationExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::UnityAsyncOperationExtensions) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.UnityAsyncOperationExtensions/<>c__DisplayClass0_0
class CORDL_TYPE UnityAsyncOperationExtensions___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  tcs;

static inline ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <AsTask>b__0, addr 0x9d33c00, size 0x54, virtual false, abstract: false, final false
inline void _AsTask_b__0(::UnityEngine::AsyncOperation*  _) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x9d33bf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncOperationExtensions___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncOperationExtensions___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncOperationExtensions___c__DisplayClass0_0(UnityAsyncOperationExtensions___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncOperationExtensions___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncOperationExtensions___c__DisplayClass0_0(UnityAsyncOperationExtensions___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24805};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck
