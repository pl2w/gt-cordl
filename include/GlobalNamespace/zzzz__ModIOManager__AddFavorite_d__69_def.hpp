#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__AddFavorite_d__69.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__AddFavorite_d__69)
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
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIOManager__AddFavorite_d__69;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__AddFavorite_d__69);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__AddFavorite_d__69, "", "ModIOManager/<AddFavorite>d__69");
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<AddFavorite>d__69
struct CORDL_TYPE ModIOManager__AddFavorite_d__69 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59cd2e0, size 0x3d4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59cd6b4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__AddFavorite_d__69() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "modId", ty: "::Modio::Mods::ModId", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_1<::Modio::Error*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__AddFavorite_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field modId, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::ModId  modId;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Modio::Error*>*  callback;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__AddFavorite_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AddFavorite_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AddFavorite_d__69, modId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AddFavorite_d__69, callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__AddFavorite_d__69, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__AddFavorite_d__69) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
