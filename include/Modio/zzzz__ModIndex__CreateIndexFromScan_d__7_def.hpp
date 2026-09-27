#pragma once
// IWYU pragma private; include "Modio/ModIndex__CreateIndexFromScan_d__7.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIndex__CreateIndexFromScan_d__7)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Users {
class UserSaveObject;
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
struct ModIndex__CreateIndexFromScan_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, "Modio", "ModIndex/<CreateIndexFromScan>d__7");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModIndex/<CreateIndexFromScan>d__7
struct CORDL_TYPE ModIndex__CreateIndexFromScan_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa005890, size 0x1430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa006d24, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIndex__CreateIndexFromScan_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_output_5__2", ty: "::Modio::ModIndex*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModIndex__CreateIndexFromScan_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>  __t__builder, ::Modio::ModIndex*  _output_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>  __t__builder;

/// @brief Field <output>5__2, offset: 0x20, size: 0x8, def value: None
 ::Modio::ModIndex*  _output_5__2;

/// [TupleElementNames(new[] { "error", "results" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>  __u__1;

/// [TupleElementNames(new[] { "error", "results", "modId", "modfileId" })]
/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>  __u__2;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__3, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, _output_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, __u__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7, __u__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
