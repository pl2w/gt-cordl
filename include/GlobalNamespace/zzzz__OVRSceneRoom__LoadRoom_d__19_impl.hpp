#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneRoom__LoadRoom_d__19.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_HashSetScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneRoom__LoadRoom_d__19_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneRoom_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::*)()>(&::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x124c;
  constexpr static std::size_t addrs = 0xa63b1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa63c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "floor", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ceiling", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "walls", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneRoom>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anchors_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::OVRSceneRoom__LoadRoom_d__19(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder, ::System::Guid  floor, ::System::Guid  ceiling, ::ArrayW<::System::Guid>  walls, ::UnityW<::GlobalNamespace::OVRSceneRoom>  __4__this, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>  __7__wrap1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->floor = floor;
this->ceiling = ceiling;
this->walls = walls;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->_anchors_5__3 = _anchors_5__3;
this->__7__wrap3 = __7__wrap3;
this->__u__1 = __u__1;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19::OVRSceneRoom__LoadRoom_d__19()   {
}
