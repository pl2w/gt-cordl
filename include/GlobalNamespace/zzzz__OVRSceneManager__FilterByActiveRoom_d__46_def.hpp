#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__FilterByActiveRoom_d__46.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager__FilterByActiveRoom_d__46)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
struct OVRSceneManager__FilterByActiveRoom_d__46;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, "", "OVRSceneManager/<FilterByActiveRoom>d__46");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Guid, System.ValueTuple`2<T1, T2>, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<FilterByActiveRoom>d__46
struct CORDL_TYPE OVRSceneManager__FilterByActiveRoom_d__46 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa6335c0, size 0x12f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa6348b4, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__FilterByActiveRoom_d__46() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layouts", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_skipped_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_userPosition_5__3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_floorAndCeilingAnchors_5__4", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap6", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap7", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager__FilterByActiveRoom_d__46(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  layouts, int32_t  _skipped_5__2, ::UnityEngine::Vector3  _userPosition_5__3, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _floorAndCeilingAnchors_5__4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap6, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap7, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __t__builder;

/// @brief Field rooms, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms;

/// @brief Field layouts, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  layouts;

/// @brief Field <skipped>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _skipped_5__2;

/// @brief Field <userPosition>5__3, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  _userPosition_5__3;

/// @brief Field <floorAndCeilingAnchors>5__4, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _floorAndCeilingAnchors_5__4;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap5;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>7__wrap6, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap6;

/// @brief Field <>7__wrap7, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap7;

/// @brief Field <>u__2, offset: 0x78, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2;

/// @brief Size padding 0x90 - 0x88 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, rooms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, layouts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _skipped_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _userPosition_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, _floorAndCeilingAnchors_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __7__wrap7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46, __u__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
