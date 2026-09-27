#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager__PurchaseResources_d__86.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager__PurchaseResources_d__86)
namespace GlobalNamespace {
class ProgressionManager_UserInventory;
}
namespace GlobalNamespace {
class ProgressionManager;
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
struct ProgressionManager__PurchaseResources_d__86;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, "", "ProgressionManager/<PurchaseResources>d__86");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/<PurchaseResources>d__86
struct CORDL_TYPE ProgressionManager__PurchaseResources_d__86 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x597c54c, size 0x2c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x597c80c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager__PurchaseResources_d__86() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ProgressionManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnSuccess", ty: "::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnFailure", ty: "::System::Action_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager__PurchaseResources_d__86(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionManager>  __4__this;

/// @brief Field OnSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess;

/// @brief Field OnFailure, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  OnFailure;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, OnSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, OnFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager__PurchaseResources_d__86) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
