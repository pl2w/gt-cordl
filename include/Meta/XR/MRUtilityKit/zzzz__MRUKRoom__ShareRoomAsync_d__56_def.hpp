#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom__ShareRoomAsync_d__56.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKRoom__ShareRoomAsync_d__56)
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKRoom__ShareRoomAsync_d__56;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, "Meta.XR.MRUtilityKit", "MRUKRoom/<ShareRoomAsync>d__56");
// [CompilerGenerated]
// Dependencies OVRAnchor::ShareResult, OVRResult`1<TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKRoom/<ShareRoomAsync>d__56
struct CORDL_TYPE MRUKRoom__ShareRoomAsync_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f39c5c, size 0x580, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f3a1dc, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUKRoom__ShareRoomAsync_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: None, comment: None }]
constexpr MRUKRoom__ShareRoomAsync_d__56(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  __4__this, ::System::Guid  groupUuid, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  __4__this;

/// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__2;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
