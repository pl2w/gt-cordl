#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__GetInstalledMods_d__72.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__GetInstalledMods_d__72)
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
// Forward declare root types
namespace GlobalNamespace {
struct ModIOManager__GetInstalledMods_d__72;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, "", "ModIOManager/<GetInstalledMods>d__72");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<GetInstalledMods>d__72
struct CORDL_TYPE ModIOManager__GetInstalledMods_d__72 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59cfafc, size 0x8e8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59d03e4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__GetInstalledMods_d__72() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceRefresh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__GetInstalledMods_d__72(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>  __t__builder, bool  forceRefresh, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2694};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "installedMods" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>  __t__builder;

/// @brief Field forceRefresh, offset: 0x20, size: 0x1, def value: None
 bool  forceRefresh;

/// @brief Field <>u__1, offset: 0x21, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, forceRefresh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, __u__1) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72, __u__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__GetInstalledMods_d__72) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
