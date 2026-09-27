#pragma once
// IWYU pragma private; include "Liv/Lck/UnityAsyncOperationExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__UnityAsyncOperationExtensions_def.hpp"
#include "Liv/Lck/zzzz__UnityAsyncOperationExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UnityAsyncOperationExtensions.AsTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::UnityEngine::AsyncOperation*)>(&::Liv::Lck::UnityAsyncOperationExtensions::AsTask)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d33acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions*>(),
                        {"AsTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Liv::Lck::UnityAsyncOperationExtensions::AsTask(::UnityEngine::AsyncOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions*>(),
                        {"AsTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::Liv::Lck::UnityAsyncOperationExtensions::UnityAsyncOperationExtensions()   {
}
//  Writing Method size for method: ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::*)()>(&::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d33bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0._AsTask_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::*)(::UnityEngine::AsyncOperation*)>(&::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::_AsTask_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d33c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*>(),
                        {"<AsTask>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::_AsTask_b__0(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*>(),
                        {"<AsTask>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0* Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UnityAsyncOperationExtensions___c__DisplayClass0_0::UnityAsyncOperationExtensions___c__DisplayClass0_0()   {
}
