#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__ProcessBatch_d__44.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_DictionaryScope_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_Metrics_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__ProcessBatch_d__44_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::*)()>(&::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x1100;
  constexpr static std::size_t addrs = 0xa635988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa636bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startingIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_metrics_5__2", ty: "::GlobalNamespace::OVRSceneManager_Metrics", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_candidateRooms_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_layoutUuids_5__5", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_taskResults_5__7", ty: "::System::Collections::Generic::List_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::OVRSceneManager__ProcessBatch_d__44(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRSceneManager_Metrics>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::GlobalNamespace::OVRSceneManager_Metrics  _metrics_5__2, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _candidateRooms_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  _layoutUuids_5__5, ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __u__1, ::System::Collections::Generic::List_1<bool>*  _taskResults_5__7, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap7, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap8, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->rooms = rooms;
this->startingIndex = startingIndex;
this->__4__this = __4__this;
this->_metrics_5__2 = _metrics_5__2;
this->_candidateRooms_5__3 = _candidateRooms_5__3;
this->__7__wrap3 = __7__wrap3;
this->_layoutUuids_5__5 = _layoutUuids_5__5;
this->__7__wrap5 = __7__wrap5;
this->__u__1 = __u__1;
this->_taskResults_5__7 = _taskResults_5__7;
this->__7__wrap7 = __7__wrap7;
this->__7__wrap8 = __7__wrap8;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44::OVRSceneManager__ProcessBatch_d__44()   {
}
