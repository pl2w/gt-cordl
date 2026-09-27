#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckRecorder__StartRecordingAsync_d__33.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder__StartRecordingAsync_d__33_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::*)()>(&::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::MoveNext)> {
  constexpr static std::size_t size = 0xdc8;
  constexpr static std::size_t addrs = 0x9d63190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d63f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Recorder::LckRecorder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e_5__4", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::LckRecorder__StartRecordingAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Liv::Lck::Recorder::LckRecorder*  __4__this, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1, ::System::Exception*  _e_5__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->_e_5__4 = _e_5__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33::LckRecorder__StartRecordingAsync_d__33()   {
}
