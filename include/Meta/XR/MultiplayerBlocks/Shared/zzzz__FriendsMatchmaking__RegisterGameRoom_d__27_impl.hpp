#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking__RegisterGameRoom_d__27.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking__RegisterGameRoom_d__27_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__FriendsMatchmaking_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::*)()>(&::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x9f6eb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f6ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::FriendsMatchmaking__RegisterGameRoom_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>  __4__this, ::StringW  roomId, ::StringW  roomPassword, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->roomId = roomId;
this->roomPassword = roomPassword;
this->_i_5__2 = _i_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendsMatchmaking__RegisterGameRoom_d__27::FriendsMatchmaking__RegisterGameRoom_d__27()   {
}
