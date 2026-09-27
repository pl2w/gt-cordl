#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__ShareRoomsAsync_d__76.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__ShareRoomsAsync_d__76_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MRUK__ShareRoomsAsync_d__76.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::*)()>(&::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::MoveNext)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x9f2e008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__ShareRoomsAsync_d__76>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MRUK__ShareRoomsAsync_d__76.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f2eba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__ShareRoomsAsync_d__76>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MRUK__ShareRoomsAsync_d__76::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__ShareRoomsAsync_d__76>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MRUK__ShareRoomsAsync_d__76::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MRUK__ShareRoomsAsync_d__76>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MRUK__ShareRoomsAsync_d__76::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MRUK__ShareRoomsAsync_d__76::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rooms", ty: "::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_roomAnchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::ArrayW<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::MRUK__ShareRoomsAsync_d__76(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __t__builder, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _roomAnchors_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::ArrayW<bool>>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->rooms = rooms;
this->groupUuid = groupUuid;
this->_roomAnchors_5__2 = _roomAnchors_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK__ShareRoomsAsync_d__76::MRUK__ShareRoomsAsync_d__76()   {
}
