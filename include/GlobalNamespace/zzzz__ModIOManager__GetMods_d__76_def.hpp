#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__GetMods_d__76.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__GetMods_d__76)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
struct ModIOManager__GetMods_d__76;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__GetMods_d__76);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__GetMods_d__76, "", "ModIOManager/<GetMods>d__76");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<GetMods>d__76
struct CORDL_TYPE ModIOManager__GetMods_d__76 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59d17d8, size 0x504, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59d1cdc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__GetMods_d__76() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "modIds", ty: "::System::Collections::Generic::ICollection_1<int64_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceRefresh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__GetMods_d__76(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder, ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*  callback, ::System::Collections::Generic::ICollection_1<int64_t>*  modIds, bool  forceRefresh, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "mods" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder;

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*  callback;

/// @brief Field modIds, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<int64_t>*  modIds;

/// @brief Field forceRefresh, offset: 0x30, size: 0x1, def value: None
 bool  forceRefresh;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, modIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, forceRefresh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetMods_d__76, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__GetMods_d__76) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
