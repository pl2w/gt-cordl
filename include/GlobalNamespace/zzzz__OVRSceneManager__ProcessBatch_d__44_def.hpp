#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__ProcessBatch_d__44.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_DictionaryScope_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_Metrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager__ProcessBatch_d__44)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
namespace GlobalNamespace {
class OVRSceneManager;
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
struct OVRSceneManager__ProcessBatch_d__44;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, "", "OVRSceneManager/<ProcessBatch>d__44");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::DictionaryScope`2<TKey, TValue>, OVRObjectPool::ListScope`1<T>, OVRSceneManager::LoadSceneModelResult, OVRSceneManager::Metrics, OVRSceneManager::RoomLayoutUuids, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<ProcessBatch>d__44
struct CORDL_TYPE OVRSceneManager__ProcessBatch_d__44 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa635988, size 0x1100, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa636bb0, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__ProcessBatch_d__44() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "startingIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_metrics_5__2", ty: "::GlobalNamespace::OVRSceneManager_Metrics", modifiers: "", def_value: None, comment: None }, CppParam { name: "_candidateRooms_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_layoutUuids_5__5", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_taskResults_5__7", ty: "::System::Collections::Generic::List_1<bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap7", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap8", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager__ProcessBatch_d__44(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::GlobalNamespace::OVRSceneManager_Metrics  _metrics_5__2, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _candidateRooms_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  _layoutUuids_5__5, ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __u__1, ::System::Collections::Generic::List_1<bool>*  _taskResults_5__7, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap7, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap8, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>  __t__builder;

/// @brief Field rooms, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms;

/// @brief Field startingIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  startingIndex;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field <metrics>5__2, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::OVRSceneManager_Metrics  _metrics_5__2;

/// @brief Field <candidateRooms>5__3, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _candidateRooms_5__3;

/// @brief Field <>7__wrap3, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3;

/// @brief Field <layoutUuids>5__5, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  _layoutUuids_5__5;

/// @brief Field <>7__wrap5, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>  __7__wrap5;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __u__1;

/// @brief Field <taskResults>5__7, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<bool>*  _taskResults_5__7;

/// @brief Field <>7__wrap7, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap7;

/// @brief Field <>7__wrap8, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap8;

/// @brief Field <>u__2, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2;

/// @brief Size padding 0xb0 - 0xa8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, rooms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, startingIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _metrics_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _candidateRooms_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _layoutUuids_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, _taskResults_5__7) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap7) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __7__wrap8) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44, __u__2) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
