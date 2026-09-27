#pragma once
// IWYU pragma private; include "Modio/Users/User__SyncEntitlements_d__61.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(User__SyncEntitlements_d__61)
namespace Modio::Users {
class User;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct User__SyncEntitlements_d__61;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::User__SyncEntitlements_d__61);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::User__SyncEntitlements_d__61, "Modio.Users", "User/<SyncEntitlements>d__61");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Users.User/<SyncEntitlements>d__61
struct CORDL_TYPE User__SyncEntitlements_d__61 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0217d8, size 0x844, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa02201c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr User__SyncEntitlements_d__61() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Users::User*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr User__SyncEntitlements_d__61(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Users::User*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Users::User*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::User__SyncEntitlements_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::User__SyncEntitlements_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::User__SyncEntitlements_d__61, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::User__SyncEntitlements_d__61, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::User__SyncEntitlements_d__61) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
