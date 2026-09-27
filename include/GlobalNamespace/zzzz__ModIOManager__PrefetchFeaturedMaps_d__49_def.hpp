#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__PrefetchFeaturedMaps_d__49.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__PrefetchFeaturedMaps_d__49)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
template<typename T>
class ModioPage_1;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIOManager__PrefetchFeaturedMaps_d__49;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, "", "ModIOManager/<PrefetchFeaturedMaps>d__49");
// [CompilerGenerated]
// Dependencies Modio.Mods.Mod, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<PrefetchFeaturedMaps>d__49
struct CORDL_TYPE ModIOManager__PrefetchFeaturedMaps_d__49 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59ec5c0, size 0xb74, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59ed134, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__PrefetchFeaturedMaps_d__49() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modsPage_5__2", ty: "::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_downloadsQueued_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::ArrayW<::Modio::Mods::Mod*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_featuredMod_5__6", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_waitedSeconds_5__7", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__PrefetchFeaturedMaps_d__49(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*  _modsPage_5__2, int32_t  _downloadsQueued_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__2, ::ArrayW<::Modio::Mods::Mod*>  __7__wrap3, int32_t  __7__wrap4, ::Modio::Mods::Mod*  _featuredMod_5__6, float_t  _waitedSeconds_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2711};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <modsPage>5__2, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*  _modsPage_5__2;

/// @brief Field <downloadsQueued>5__3, offset: 0x30, size: 0x4, def value: None
 int32_t  _downloadsQueued_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// [TupleElementNames(new[] { "error", "modsPage" })]
/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__2;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::Mod*>  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <featuredMod>5__6, offset: 0x58, size: 0x8, def value: None
 ::Modio::Mods::Mod*  _featuredMod_5__6;

/// @brief Field <waitedSeconds>5__7, offset: 0x60, size: 0x4, def value: None
 float_t  _waitedSeconds_5__7;

/// @brief Field <>u__3, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3;

/// @brief Field <>u__4, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, _modsPage_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, _downloadsQueued_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __u__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, _featuredMod_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, _waitedSeconds_5__7) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __u__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49, __u__4) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__PrefetchFeaturedMaps_d__49) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
