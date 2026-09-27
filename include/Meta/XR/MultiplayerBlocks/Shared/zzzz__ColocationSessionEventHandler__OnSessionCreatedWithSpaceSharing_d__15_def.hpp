#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15)
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/<OnSessionCreatedWithSpaceSharing>d__15");
// [CompilerGenerated]
// Dependencies OVRAnchor::ShareResult, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<OnSessionCreatedWithSpaceSharing>d__15
struct CORDL_TYPE ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f67fb4, size 0x57c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f68530, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentRoom_5__2", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: None, comment: None }]
constexpr ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Guid  groupUuid, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>  __4__this, ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _currentRoom_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>  __4__this;

/// @brief Field <currentRoom>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _currentRoom_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, _currentRoom_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing_d__15) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
