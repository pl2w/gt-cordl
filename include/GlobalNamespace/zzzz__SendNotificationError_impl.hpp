#pragma once
// IWYU pragma private; include "GlobalNamespace/SendNotificationError.hpp"
#include "GlobalNamespace/zzzz__MothershipError_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__SendNotificationError_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendNotificationError::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SendNotificationError::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x531eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SendNotificationError*)>(&::GlobalNamespace::SendNotificationError::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x531ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SendNotificationError*)>(&::GlobalNamespace::SendNotificationError::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x531ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendNotificationError::*)(bool)>(&::GlobalNamespace::SendNotificationError::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x531ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                    {::i2c::class_of<::GlobalNamespace::SendNotificationError*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendNotificationError::*)(::StringW, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::SendNotificationError::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x531ee1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendNotificationError::*)(::StringW, int32_t, ::StringW)>(&::GlobalNamespace::SendNotificationError::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x531ef18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SendNotificationError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SendNotificationError::*)(::StringW, int32_t)>(&::GlobalNamespace::SendNotificationError::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x531f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SendNotificationError::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SendNotificationError::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SendNotificationError::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::SendNotificationError::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SendNotificationError::getCPtr(::GlobalNamespace::SendNotificationError*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SendNotificationError::swigRelease(::GlobalNamespace::SendNotificationError*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::SendNotificationError::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SendNotificationError*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::SendNotificationError::_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, statusCode, traceId, mothershipErrorCode);
}
inline void GlobalNamespace::SendNotificationError::_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, statusCode, traceId);
}
inline void GlobalNamespace::SendNotificationError::_ctor(::StringW  message, int32_t  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SendNotificationError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, statusCode);
}
inline ::GlobalNamespace::SendNotificationError* GlobalNamespace::SendNotificationError::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SendNotificationError*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::SendNotificationError* GlobalNamespace::SendNotificationError::New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId, ::StringW  mothershipErrorCode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SendNotificationError*>(message, statusCode, traceId, mothershipErrorCode));
}
inline ::GlobalNamespace::SendNotificationError* GlobalNamespace::SendNotificationError::New_ctor(::StringW  message, int32_t  statusCode, ::StringW  traceId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SendNotificationError*>(message, statusCode, traceId));
}
inline ::GlobalNamespace::SendNotificationError* GlobalNamespace::SendNotificationError::New_ctor(::StringW  message, int32_t  statusCode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SendNotificationError*>(message, statusCode));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SendNotificationError::SendNotificationError()   {
}
