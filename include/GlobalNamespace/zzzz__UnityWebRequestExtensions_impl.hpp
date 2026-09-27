#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityWebRequestExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityWebRequestExtensions_def.hpp"
#include "GlobalNamespace/zzzz__UnityWebRequestExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityWebRequestExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::GlobalNamespace::UnityWebRequestExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5a5bb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*> GlobalNamespace::UnityWebRequestExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOp);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityWebRequestExtensions::UnityWebRequestExtensions()   {
}
//  Writing Method size for method: ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::*)()>(&::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5bcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0._GetAwaiter_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::_GetAwaiter_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a5bcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*>(),
                        {"<GetAwaiter>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*& GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>* const& GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::__cordl_internal_set_asyncOp(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
inline void GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::_GetAwaiter_b__0(::UnityEngine::AsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*>(),
                        {"<GetAwaiter>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0* GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityWebRequestExtensions___c__DisplayClass0_0::UnityWebRequestExtensions___c__DisplayClass0_0()   {
}
