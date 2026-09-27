#pragma once
// IWYU pragma private; include "Oculus/Platform/Request.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Request__Gen_d__8_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Request._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Request::*)(uint64_t)>(&::Oculus::Platform::Request::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa54ccec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.get_RequestID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Platform::Request::*)()>(&::Oculus::Platform::Request::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa54ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"get_RequestID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.set_RequestID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Request::*)(uint64_t)>(&::Oculus::Platform::Request::set_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa54ed7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"set_RequestID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (::Oculus::Platform::Request::*)(::Oculus::Platform::Message_Callback*)>(&::Oculus::Platform::Request::OnComplete)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa54ed84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"OnComplete", {}, {::i2c::type_of<::Oculus::Platform::Message_Callback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.Gen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* (::Oculus::Platform::Request::*)()>(&::Oculus::Platform::Request::Gen)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa54ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"Gen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> (::Oculus::Platform::Request::*)()>(&::Oculus::Platform::Request::GetAwaiter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa54ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.HandleMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Request::*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Request::HandleMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa54ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Request*>(),
                    {::i2c::class_of<::Oculus::Platform::Request*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Request.RunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Oculus::Platform::Request::RunCallbacks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa54f01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"RunCallbacks", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& Oculus::Platform::Request::__cordl_internal_get_tcs_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs_;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& Oculus::Platform::Request::__cordl_internal_get_tcs_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs_;
}
constexpr void Oculus::Platform::Request::__cordl_internal_set_tcs_(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs_ = value;
}
constexpr ::Oculus::Platform::Message_Callback*& Oculus::Platform::Request::__cordl_internal_get_callback_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_;
}
constexpr ::Oculus::Platform::Message_Callback* const& Oculus::Platform::Request::__cordl_internal_get_callback_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_;
}
constexpr void Oculus::Platform::Request::__cordl_internal_set_callback_(::Oculus::Platform::Message_Callback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback_ = value;
}
constexpr uint64_t& Oculus::Platform::Request::__cordl_internal_get__RequestID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestID_k__BackingField;
}
constexpr uint64_t const& Oculus::Platform::Request::__cordl_internal_get__RequestID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestID_k__BackingField;
}
constexpr void Oculus::Platform::Request::__cordl_internal_set__RequestID_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestID_k__BackingField = value;
}
inline void Oculus::Platform::Request::_ctor(uint64_t  requestID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestID);
}
inline uint64_t Oculus::Platform::Request::get_RequestID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"get_RequestID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Oculus::Platform::Request::set_RequestID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"set_RequestID", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Request::OnComplete(::Oculus::Platform::Message_Callback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"OnComplete", {}, {::i2c::type_of<::Oculus::Platform::Message_Callback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(this, ___internal_method, callback);
}
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Oculus::Platform::Request::Gen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"Gen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>*>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> Oculus::Platform::Request::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>>(this, ___internal_method);
}
inline void Oculus::Platform::Request::HandleMessage(::Oculus::Platform::Message*  msg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Request*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Request::RunCallbacks(uint32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Request*>(),
                        {"RunCallbacks", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, limit);
}
inline ::Oculus::Platform::Request* Oculus::Platform::Request::New_ctor(uint64_t  requestID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Request*>(requestID));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Request::Request()   {
}
