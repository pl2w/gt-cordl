#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__TryUpgradeSession_d__88.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__TryUpgradeSession_d__88)
namespace GlobalNamespace {
class UpgradeSessionData;
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
struct KIDManager__TryUpgradeSession_d__88;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88, "", "KIDManager/<TryUpgradeSession>d__88");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<TryUpgradeSession>d__88
struct CORDL_TYPE KIDManager__TryUpgradeSession_d__88 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a3c358, size 0x448, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a3c7a0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__TryUpgradeSession_d__88() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UpgradeSessionData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestedPermissions", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UpgradeSessionData*>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__TryUpgradeSession_d__88(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UpgradeSessionData*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  requestedPermissions, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UpgradeSessionData*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UpgradeSessionData*>  __t__builder;

/// @brief Field requestedPermissions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  requestedPermissions;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UpgradeSessionData*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88, requestedPermissions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__TryUpgradeSession_d__88) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
