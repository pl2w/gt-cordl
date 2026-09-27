#pragma once
// IWYU pragma private; include "GlobalNamespace/InitSteamSubscriptionPurchaseResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__InitSteamSubscriptionPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x54419e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5441a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5441adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)(bool)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5441b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.set_SteamOrderId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)(::StringW)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::set_SteamOrderId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5441ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"set_SteamOrderId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.get_SteamOrderId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)()>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::get_SteamOrderId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5441dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"get_SteamOrderId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.set_SteamTransactionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)(::StringW)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::set_SteamTransactionId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5441e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"set_SteamTransactionId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.get_SteamTransactionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)()>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::get_SteamTransactionId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5441f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"get_SteamTransactionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)(::StringW)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x544203c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5442120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::*)()>(&::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5442238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::InitSteamSubscriptionPurchaseResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::InitSteamSubscriptionPurchaseResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::InitSteamSubscriptionPurchaseResponse::getCPtr(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::InitSteamSubscriptionPurchaseResponse::swigRelease(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::set_SteamOrderId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"set_SteamOrderId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InitSteamSubscriptionPurchaseResponse::get_SteamOrderId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"get_SteamOrderId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::set_SteamTransactionId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"set_SteamTransactionId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InitSteamSubscriptionPurchaseResponse::get_SteamTransactionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"get_SteamTransactionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::InitSteamSubscriptionPurchaseResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* GlobalNamespace::InitSteamSubscriptionPurchaseResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::InitSteamSubscriptionPurchaseResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* GlobalNamespace::InitSteamSubscriptionPurchaseResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* GlobalNamespace::InitSteamSubscriptionPurchaseResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse::InitSteamSubscriptionPurchaseResponse()   {
}
