#pragma once
// IWYU pragma private; include "System/Net/CallbackClosure.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CallbackClosure_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::System::Net::CallbackClosure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CallbackClosure::*)(::System::Threading::ExecutionContext*, ::System::AsyncCallback*)>(&::System::Net::CallbackClosure::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xada785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CallbackClosure.IsCompatible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CallbackClosure::*)(::System::AsyncCallback*)>(&::System::Net::CallbackClosure::IsCompatible)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xada7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"IsCompatible", {}, {::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CallbackClosure.get_AsyncCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AsyncCallback* (::System::Net::CallbackClosure::*)()>(&::System::Net::CallbackClosure::get_AsyncCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada7fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"get_AsyncCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CallbackClosure.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Net::CallbackClosure::*)()>(&::System::Net::CallbackClosure::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada7fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::AsyncCallback*& System::Net::CallbackClosure::__cordl_internal_get__savedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedCallback;
}
constexpr ::System::AsyncCallback* const& System::Net::CallbackClosure::__cordl_internal_get__savedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedCallback;
}
constexpr void System::Net::CallbackClosure::__cordl_internal_set__savedCallback(::System::AsyncCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedCallback = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Net::CallbackClosure::__cordl_internal_get__savedContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Net::CallbackClosure::__cordl_internal_get__savedContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedContext;
}
constexpr void System::Net::CallbackClosure::__cordl_internal_set__savedContext(::System::Threading::ExecutionContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedContext = value;
}
inline void System::Net::CallbackClosure::_ctor(::System::Threading::ExecutionContext*  context, ::System::AsyncCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, callback);
}
inline bool System::Net::CallbackClosure::IsCompatible(::System::AsyncCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"IsCompatible", {}, {::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback);
}
inline ::System::AsyncCallback* System::Net::CallbackClosure::get_AsyncCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"get_AsyncCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Net::CallbackClosure::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CallbackClosure*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline ::System::Net::CallbackClosure* System::Net::CallbackClosure::New_ctor(::System::Threading::ExecutionContext*  context, ::System::AsyncCallback*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CallbackClosure*>(context, callback));
}
// Ctor Parameters []
constexpr ::System::Net::CallbackClosure::CallbackClosure()   {
}
