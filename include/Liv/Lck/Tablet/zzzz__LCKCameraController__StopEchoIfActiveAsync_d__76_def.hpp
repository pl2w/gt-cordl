#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKCameraController__StopEchoIfActiveAsync_d__76.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LCKCameraController__StopEchoIfActiveAsync_d__76)
namespace Liv::Lck::Tablet {
class LCKCameraController;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LCKCameraController__StopEchoIfActiveAsync_d__76;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76, "Liv.Lck.Tablet", "LCKCameraController/<StopEchoIfActiveAsync>d__76");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Tablet.LCKCameraController/<StopEchoIfActiveAsync>d__76
struct CORDL_TYPE LCKCameraController__StopEchoIfActiveAsync_d__76 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d56b7c, size 0x394, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d56f10, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LCKCameraController__StopEchoIfActiveAsync_d__76() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Liv::Lck::Tablet::LCKCameraController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }]
constexpr LCKCameraController__StopEchoIfActiveAsync_d__76(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
