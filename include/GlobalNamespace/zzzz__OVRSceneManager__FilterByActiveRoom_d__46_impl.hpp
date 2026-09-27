#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__FilterByActiveRoom_d__46.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__FilterByActiveRoom_d__46_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::*)()>(&::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x12f4;
  constexpr static std::size_t addrs = 0xa6335c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6348b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layouts", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_skipped_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_userPosition_5__3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_floorAndCeilingAnchors_5__4", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::OVRSceneManager__FilterByActiveRoom_d__46(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  layouts, int32_t  _skipped_5__2, ::UnityEngine::Vector3  _userPosition_5__3, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _floorAndCeilingAnchors_5__4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap6, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap7, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->rooms = rooms;
this->layouts = layouts;
this->_skipped_5__2 = _skipped_5__2;
this->_userPosition_5__3 = _userPosition_5__3;
this->_floorAndCeilingAnchors_5__4 = _floorAndCeilingAnchors_5__4;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__1 = __u__1;
this->__7__wrap6 = __7__wrap6;
this->__7__wrap7 = __7__wrap7;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46::OVRSceneManager__FilterByActiveRoom_d__46()   {
}
