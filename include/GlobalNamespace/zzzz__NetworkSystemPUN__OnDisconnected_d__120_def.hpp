#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__OnDisconnected_d__120.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN__OnDisconnected_d__120)
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN__OnDisconnected_d__120;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, "", "NetworkSystemPUN/<OnDisconnected>d__120");
// [CompilerGenerated]
// Dependencies Photon.Realtime.DisconnectCause, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/<OnDisconnected>d__120
struct CORDL_TYPE NetworkSystemPUN__OnDisconnected_d__120 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570b550, size 0x2dc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570b838, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN__OnDisconnected_d__120() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "cause", ty: "::Photon::Realtime::DisconnectCause", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN__OnDisconnected_d__120(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Photon::Realtime::DisconnectCause  cause, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field cause, offset: 0x28, size: 0x4, def value: None
 ::Photon::Realtime::DisconnectCause  cause;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, cause) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN__OnDisconnected_d__120) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
