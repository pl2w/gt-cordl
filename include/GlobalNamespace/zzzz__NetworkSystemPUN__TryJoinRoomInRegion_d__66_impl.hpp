#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__TryJoinRoomInRegion_d__66.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__TryJoinRoomInRegion_d__66_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_def.hpp"
#include "GlobalNamespace/zzzz__RoomConfig_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::*)()>(&::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x570c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x570cb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "regionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "opts", ty: "::GlobalNamespace::RoomConfig*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_foundRoom_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::NetworkSystemPUN__TryJoinRoomInRegion_d__66(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, int32_t  regionIndex, ::GlobalNamespace::RoomConfig*  opts, ::StringW  roomName, bool  _foundRoom_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->regionIndex = regionIndex;
this->opts = opts;
this->roomName = roomName;
this->_foundRoom_5__2 = _foundRoom_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN__TryJoinRoomInRegion_d__66::NetworkSystemPUN__TryJoinRoomInRegion_d__66()   {
}
