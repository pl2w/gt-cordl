#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking__StopAdvertisingColocationSession_d__20.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRColocationSession_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMatchmaking__StopAdvertisingColocationSession_d__20)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalMatchmaking__StopAdvertisingColocationSession_d__20;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<StopAdvertisingColocationSession>d__20");
// [CompilerGenerated]
// Dependencies OVRColocationSession::Result, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StopAdvertisingColocationSession>d__20
struct CORDL_TYPE LocalMatchmaking__StopAdvertisingColocationSession_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f71150, size 0x2d4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f71424, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalMatchmaking__StopAdvertisingColocationSession_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>", modifiers: "", def_value: None, comment: None }]
constexpr LocalMatchmaking__StopAdvertisingColocationSession_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalMatchmaking__StopAdvertisingColocationSession_d__20) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
