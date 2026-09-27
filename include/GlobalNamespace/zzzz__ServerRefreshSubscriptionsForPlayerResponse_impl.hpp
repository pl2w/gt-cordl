#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerRefreshSubscriptionsForPlayerResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ServerRefreshSubscriptionsForPlayerResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x532aca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x532ad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x532ad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)(bool)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x532ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x532afa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsVector* (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)()>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x532b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)(::StringW)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x532b19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x532b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::*)()>(&::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x532b398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::getCPtr(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::swigRelease(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::set_Results(::GlobalNamespace::SubscriptionsVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsVector*>(this, ___internal_method);
}
inline bool GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse* GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerRefreshSubscriptionsForPlayerResponse::ServerRefreshSubscriptionsForPlayerResponse()   {
}
