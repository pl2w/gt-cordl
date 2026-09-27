#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsListScreen__RetrieveSubscribedMods_d__105.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsListScreen__RetrieveSubscribedMods_d__105)
namespace GlobalNamespace {
class CustomMapsListScreen;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsListScreen__RetrieveSubscribedMods_d__105;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105, "", "CustomMapsListScreen/<RetrieveSubscribedMods>d__105");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsListScreen/<RetrieveSubscribedMods>d__105
struct CORDL_TYPE CustomMapsListScreen__RetrieveSubscribedMods_d__105 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a033e8, size 0x454, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a0383c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsListScreen__RetrieveSubscribedMods_d__105() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomMapsListScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsListScreen__RetrieveSubscribedMods_d__105(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::CustomMapsListScreen>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsListScreen>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsListScreen__RetrieveSubscribedMods_d__105) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
