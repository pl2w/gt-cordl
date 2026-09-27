#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController__PurchaseBundle_d__207.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController__PurchaseBundle_d__207)
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
class NexusManager_MemberCode;
}
namespace GorillaNetworking::Store {
class StoreBundle;
}
namespace GorillaNetworking {
class CosmeticsController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController__PurchaseBundle_d__207;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, "GorillaNetworking", "CosmeticsController/<PurchaseBundle>d__207");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/<PurchaseBundle>d__207
struct CORDL_TYPE CosmeticsController__PurchaseBundle_d__207 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c6ec04, size 0x748, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c6f34c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController__PurchaseBundle_d__207() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundleToPurchase", ty: "::GorillaNetworking::Store::StoreBundle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ccp", ty: "::Cosmetics::ICreatorCodeProvider*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::CosmeticsController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController__PurchaseBundle_d__207(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GorillaNetworking::Store::StoreBundle*  bundleToPurchase, ::Cosmetics::ICreatorCodeProvider*  ccp, ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field bundleToPurchase, offset: 0x28, size: 0x8, def value: None
 ::GorillaNetworking::Store::StoreBundle*  bundleToPurchase;

/// @brief Field ccp, offset: 0x30, size: 0x8, def value: None
 ::Cosmetics::ICreatorCodeProvider*  ccp;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, bundleToPurchase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, ccp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController__PurchaseBundle_d__207) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
