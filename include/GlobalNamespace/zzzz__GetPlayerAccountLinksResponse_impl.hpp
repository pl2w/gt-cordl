#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerAccountLinksResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetPlayerAccountLinksResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__PlayerIdentityVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerAccountLinksResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5413d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetPlayerAccountLinksResponse*)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5413e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetPlayerAccountLinksResponse*)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5413e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerAccountLinksResponse::*)(bool)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5413f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GetPlayerAccountLinksResponse::*)(::StringW)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5414094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetPlayerAccountLinksResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5414178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.set_Identities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerAccountLinksResponse::*)(::GlobalNamespace::PlayerIdentityVector*)>(&::GlobalNamespace::GetPlayerAccountLinksResponse::set_Identities)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5414290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"set_Identities", {}, {::i2c::type_of<::GlobalNamespace::PlayerIdentityVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse.get_Identities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerIdentityVector* (::GlobalNamespace::GetPlayerAccountLinksResponse::*)()>(&::GlobalNamespace::GetPlayerAccountLinksResponse::get_Identities)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5414380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"get_Identities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetPlayerAccountLinksResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetPlayerAccountLinksResponse::*)()>(&::GlobalNamespace::GetPlayerAccountLinksResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x541448c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetPlayerAccountLinksResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetPlayerAccountLinksResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetPlayerAccountLinksResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetPlayerAccountLinksResponse::setStaticF_identities_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "identities_name", ::GlobalNamespace::GetPlayerAccountLinksResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::GetPlayerAccountLinksResponse::getStaticF_identities_name()  {
return ::cordl_internals::getStaticField<::StringW, "identities_name", ::GlobalNamespace::GetPlayerAccountLinksResponse*>();
}
inline void GlobalNamespace::GetPlayerAccountLinksResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetPlayerAccountLinksResponse::getCPtr(::GlobalNamespace::GetPlayerAccountLinksResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetPlayerAccountLinksResponse::swigRelease(::GlobalNamespace::GetPlayerAccountLinksResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetPlayerAccountLinksResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::GetPlayerAccountLinksResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::GetPlayerAccountLinksResponse* GlobalNamespace::GetPlayerAccountLinksResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetPlayerAccountLinksResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::GetPlayerAccountLinksResponse::set_Identities(::GlobalNamespace::PlayerIdentityVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"set_Identities", {}, {::i2c::type_of<::GlobalNamespace::PlayerIdentityVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerIdentityVector* GlobalNamespace::GetPlayerAccountLinksResponse::get_Identities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {"get_Identities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerIdentityVector*>(this, ___internal_method);
}
inline void GlobalNamespace::GetPlayerAccountLinksResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetPlayerAccountLinksResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetPlayerAccountLinksResponse* GlobalNamespace::GetPlayerAccountLinksResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetPlayerAccountLinksResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetPlayerAccountLinksResponse* GlobalNamespace::GetPlayerAccountLinksResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetPlayerAccountLinksResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetPlayerAccountLinksResponse::GetPlayerAccountLinksResponse()   {
}
