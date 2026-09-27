#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController__RepressButton_d__192.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController__RepressButton_d__192)
namespace GlobalNamespace {
class FittingRoomButton;
}
namespace GorillaNetworking {
class CosmeticsController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController__RepressButton_d__192;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController__RepressButton_d__192);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController__RepressButton_d__192, "GorillaNetworking", "CosmeticsController/<RepressButton>d__192");
// [CompilerGenerated]
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, UnityEngine.Awaitable::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/<RepressButton>d__192
struct CORDL_TYPE CosmeticsController__RepressButton_d__192 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c6f358, size 0x4f8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c6f850, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController__RepressButton_d__192() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "pressedButton", ty: "::UnityW<::GlobalNamespace::FittingRoomButton>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::CosmeticsController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeEntered_5__2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_maxTime_5__3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_itemSet_5__4", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController__RepressButton_d__192(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::FittingRoomButton>  pressedButton, ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this, bool  isLeftHand, float_t  _timeEntered_5__2, float_t  _maxTime_5__3, ::GlobalNamespace::CosmeticsController_CosmeticItem  _itemSet_5__4, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field pressedButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FittingRoomButton>  pressedButton;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  __4__this;

/// @brief Field isLeftHand, offset: 0x38, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field <timeEntered>5__2, offset: 0x3c, size: 0x4, def value: None
 float_t  _timeEntered_5__2;

/// @brief Field <maxTime>5__3, offset: 0x40, size: 0x4, def value: None
 float_t  _maxTime_5__3;

/// @brief Field <itemSet>5__4, offset: 0x48, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  _itemSet_5__4;

/// @brief Field <>u__1, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::Awaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, pressedButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, isLeftHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, _timeEntered_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, _maxTime_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, _itemSet_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController__RepressButton_d__192, __u__1) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController__RepressButton_d__192) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
