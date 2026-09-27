#pragma once
// IWYU pragma private; include "Modio/ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, "Modio", "ModIndex/<UpdateIndexWithMissingEntriesFromScan>d__8");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModIndex/<UpdateIndexWithMissingEntriesFromScan>d__8
struct CORDL_TYPE ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa007c9c, size 0xb48, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0087e4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::ModIndex*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Modio::ModIndex*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::ModIndex*  __4__this;

/// [TupleElementNames(new[] { "error", "results", "modId", "modfileId" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>  __u__1;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
