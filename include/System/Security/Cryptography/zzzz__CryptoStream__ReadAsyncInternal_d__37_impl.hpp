#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream__ReadAsyncInternal_d__37.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__ReadAsyncInternal_d__37_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::*)()>(&::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xa15d504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa15d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::CryptoStream__ReadAsyncInternal_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Security::Cryptography::CryptoStream*  __4__this, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::SemaphoreSlim*  _semaphore_5__2, ::System::Threading::Tasks::ForceAsyncAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->count = count;
this->cancellationToken = cancellationToken;
this->_semaphore_5__2 = _semaphore_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CryptoStream__ReadAsyncInternal_d__37::CryptoStream__ReadAsyncInternal_d__37()   {
}
