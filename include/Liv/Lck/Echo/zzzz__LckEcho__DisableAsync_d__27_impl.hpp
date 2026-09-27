#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/LckEcho__DisableAsync_d__27.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho__DisableAsync_d__27_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEcho__DisableAsync_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEcho__DisableAsync_d__27::*)()>(&::GlobalNamespace::LckEcho__DisableAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x9d4a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEcho__DisableAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEcho__DisableAsync_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEcho__DisableAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckEcho__DisableAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d4a83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEcho__DisableAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckEcho__DisableAsync_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEcho__DisableAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckEcho__DisableAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEcho__DisableAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckEcho__DisableAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckEcho__DisableAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Echo::LckEcho*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_echoContext_5__2", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEcho__DisableAsync_d__27::LckEcho__DisableAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>  __t__builder, ::Liv::Lck::Echo::LckEcho*  __4__this, ::System::IntPtr  _echoContext_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_echoContext_5__2 = _echoContext_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEcho__DisableAsync_d__27::LckEcho__DisableAsync_d__27()   {
}
