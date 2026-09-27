#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent__SerializeToStreamAsync_d__8.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Net/Http/zzzz__MultipartContent__SerializeToStreamAsync_d__8_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__MultipartContent_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::*)()>(&::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xe68;
  constexpr static std::size_t addrs = 0xa9e3c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa9e4af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::MultipartContent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "context", ty: "::System::Net::TransportContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_c_5__4", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::MultipartContent__SerializeToStreamAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Http::MultipartContent*  __4__this, ::System::IO::Stream*  stream, ::System::Net::TransportContext*  context, ::System::Text::StringBuilder*  _sb_5__2, int32_t  _i_5__3, ::System::Net::Http::HttpContent*  _c_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->stream = stream;
this->context = context;
this->_sb_5__2 = _sb_5__2;
this->_i_5__3 = _i_5__3;
this->_c_5__4 = _c_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8::MultipartContent__SerializeToStreamAsync_d__8()   {
}
