#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34)
namespace GlobalNamespace {
class LckEntitlementsManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, "", "LckEntitlementsManager/<GetCosmeticsForPlayersAsync>d__34");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckEntitlementsManager/<GetCosmeticsForPlayersAsync>d__34
struct CORDL_TYPE LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56c7bb4, size 0x58c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56c8140, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LckEntitlementsManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "userIdList", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "methodNameForLogging", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this, ::System::Collections::Generic::List_1<::StringW>*  userIdList, ::StringW  methodNameForLogging, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckEntitlementsManager>  __4__this;

/// @brief Field userIdList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  userIdList;

/// @brief Field methodNameForLogging, offset: 0x30, size: 0x8, def value: None
 ::StringW  methodNameForLogging;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, userIdList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, methodNameForLogging) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
