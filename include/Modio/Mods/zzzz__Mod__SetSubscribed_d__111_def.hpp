#pragma once
// IWYU pragma private; include "Modio/Mods/Mod__SetSubscribed_d__111.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Response204_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mod__SetSubscribed_d__111)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Mod__SetSubscribed_d__111;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mod__SetSubscribed_d__111);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mod__SetSubscribed_d__111, "Modio.Mods", "Mod/<SetSubscribed>d__111");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.ModObject, Modio.API.SchemaDefinitions.Response204, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Mod/<SetSubscribed>d__111
struct CORDL_TYPE Mod__SetSubscribed_d__111 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa02e6c4, size 0xc94, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa02f460, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mod__SetSubscribed_d__111() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "subscribed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "includeDependencies", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr Mod__SetSubscribed_d__111(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::Mod*  __4__this, bool  subscribed, bool  includeDependencies, ::Modio::Error*  _error_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Mod*  __4__this;

/// @brief Field subscribed, offset: 0x28, size: 0x1, def value: None
 bool  subscribed;

/// @brief Field includeDependencies, offset: 0x29, size: 0x1, def value: None
 bool  includeDependencies;

/// @brief Field <error>5__2, offset: 0x30, size: 0x8, def value: None
 ::Modio::Error*  _error_5__2;

/// [TupleElementNames(new[] { "error", "modObject" })]
/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>  __u__1;

/// [TupleElementNames(new[] { "error", "response204" })]
/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__2;

/// @brief Field <>u__3, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3;

/// [TupleElementNames(new[] { "error", "results" })]
/// @brief Field <>u__4, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, subscribed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, includeDependencies) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, _error_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __u__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __u__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__SetSubscribed_d__111, __u__4) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mod__SetSubscribed_d__111) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
