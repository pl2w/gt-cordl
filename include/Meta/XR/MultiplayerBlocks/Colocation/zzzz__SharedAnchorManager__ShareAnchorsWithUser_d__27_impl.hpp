#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__ShareAnchorsWithUser_d__27.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager__ShareAnchorsWithUser_d__27_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::*)()>(&::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x9f79fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f7a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::SharedAnchorManager__ShareAnchorsWithUser_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this, uint64_t  userId, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->userId = userId;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27::SharedAnchorManager__ShareAnchorsWithUser_d__27()   {
}
