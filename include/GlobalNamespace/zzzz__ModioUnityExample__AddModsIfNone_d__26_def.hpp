#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample__AddModsIfNone_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUnityExample__AddModsIfNone_d__26)
namespace GlobalNamespace {
struct ModioUnityExample_DummyModData;
}
namespace GlobalNamespace {
class ModioUnityExample;
}
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
struct ModioUnityExample__AddModsIfNone_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, "", "ModioUnityExample/<AddModsIfNone>d__26");
// [CompilerGenerated]
// Dependencies ModioUnityExample::DummyModData, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModioUnityExample/<AddModsIfNone>d__26
struct CORDL_TYPE ModioUnityExample__AddModsIfNone_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f986e0, size 0xbcc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f992ac, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample__AddModsIfNone_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModioUnityExample>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::ModioUnityExample_DummyModData", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::ArrayW<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModioUnityExample__AddModsIfNone_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap1, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap2, ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __u__2, ::ArrayW<::GlobalNamespace::ModioUnityExample_DummyModData>  __7__wrap4, int32_t  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this;

/// [TupleElementNames(new[] { "error", "page" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x20, def value: None
 ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x50, size: 0x20, def value: None
 ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x70, size: 0x20, def value: None
 ::GlobalNamespace::ModioUnityExample_DummyModData  __7__wrap3;

/// @brief Field <>u__2, offset: 0x90, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __u__2;

/// @brief Field <>7__wrap4, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ModioUnityExample_DummyModData>  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0xa0, size: 0x4, def value: None
 int32_t  __7__wrap5;

/// @brief Field <>u__3, offset: 0xa8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __7__wrap2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __7__wrap3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __u__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __7__wrap4) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __7__wrap5) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26, __u__3) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUnityExample__AddModsIfNone_d__26) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
