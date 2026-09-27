#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__GetMod_d__77.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__GetMod_d__77)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIOManager__GetMod_d__77;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__GetMod_d__77);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__GetMod_d__77, "", "ModIOManager/<GetMod>d__77");
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<GetMod>d__77
struct CORDL_TYPE ModIOManager__GetMod_d__77 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59d0460, size 0x710, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59d0b70, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__GetMod_d__77() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "modId", ty: "::Modio::Mods::ModId", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceUpdate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_retrievedMod_5__3", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__GetMod_d__77(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __t__builder, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback, ::Modio::Mods::ModId  modId, bool  forceUpdate, ::Modio::Error*  _error_5__2, ::Modio::Mods::Mod*  _retrievedMod_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __t__builder;

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback;

/// @brief Field modId, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::ModId  modId;

/// @brief Field forceUpdate, offset: 0x30, size: 0x1, def value: None
 bool  forceUpdate;

/// @brief Field <error>5__2, offset: 0x38, size: 0x8, def value: None
 ::Modio::Error*  _error_5__2;

/// @brief Field <retrievedMod>5__3, offset: 0x40, size: 0x8, def value: None
 ::Modio::Mods::Mod*  _retrievedMod_5__3;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, modId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, forceUpdate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, _error_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, _retrievedMod_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMod_d__77, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__GetMod_d__77) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
