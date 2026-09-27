#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__ShareAnchorsWithUser_d__27.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedAnchorManager__ShareAnchorsWithUser_d__27)
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass27_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct SharedAnchorManager__ShareAnchorsWithUser_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<ShareAnchorsWithUser>d__27");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<ShareAnchorsWithUser>d__27
struct CORDL_TYPE SharedAnchorManager__ShareAnchorsWithUser_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f79fcc, size 0x6a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f7a670, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager__ShareAnchorsWithUser_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "userId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr SharedAnchorManager__ShareAnchorsWithUser_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this, uint64_t  userId, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30693};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field userId, offset: 0x28, size: 0x8, def value: None
 uint64_t  userId;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
