#pragma once
// IWYU pragma private; include "GorillaExtensions/UnityEventExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__UnityEventExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::UnityEventExtensions.InvokeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent*>*)>(&::GorillaExtensions::UnityEventExtensions::InvokeAll)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5cf75bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::UnityEventExtensions*>(),
                        {"InvokeAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaExtensions::UnityEventExtensions::InvokeAll(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent*>*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::UnityEventExtensions*>(),
                        {"InvokeAll", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, events);
}
template<typename TArg>
inline void GorillaExtensions::UnityEventExtensions::InvokeAll(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent_1<TArg>*>*  events, TArg  arg)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::UnityEventExtensions*>(),
                    {"InvokeAll", {::i2c::class_of<TArg>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Events::UnityEvent_1<TArg>*>*>(), ::i2c::type_of<TArg>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TArg>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, events, arg);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::UnityEventExtensions::UnityEventExtensions()   {
}
