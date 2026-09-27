#pragma once
// IWYU pragma private; include "GlobalNamespace/FinalizeSteamSubscriptionPurchaseRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__FinalizeSteamSubscriptionPurchaseRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53fd8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*)>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53fd970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*)>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53fd9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)(bool)>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53fda4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.set_SteamOrderId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)(::StringW)>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::set_SteamOrderId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53fdbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"set_SteamOrderId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.get_SteamOrderId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)()>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::get_SteamOrderId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53fdc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"get_SteamOrderId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)()>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53fdd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::*)()>(&::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53fde70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::getCPtr(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::swigRelease(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::set_SteamOrderId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"set_SteamOrderId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::get_SteamOrderId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {"get_SteamOrderId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest* GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest* GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FinalizeSteamSubscriptionPurchaseRequest::FinalizeSteamSubscriptionPurchaseRequest()   {
}
