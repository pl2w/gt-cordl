#pragma once
// IWYU pragma private; include "GlobalNamespace/SetPrimaryAccountLinkResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__SetPrimaryAccountLinkResponse_def.hpp"
#include "GlobalNamespace/zzzz__AccountLinksVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x532fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SetPrimaryAccountLinkResponse*)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x532fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SetPrimaryAccountLinkResponse*)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x532fc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)(bool)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x532fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)(::StringW)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x532fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SetPrimaryAccountLinkResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x532ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.set_Links
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)(::GlobalNamespace::AccountLinksVector*)>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::set_Links)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5330098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"set_Links", {}, {::i2c::type_of<::GlobalNamespace::AccountLinksVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse.get_Links
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AccountLinksVector* (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)()>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::get_Links)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5330188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"get_Links", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPrimaryAccountLinkResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetPrimaryAccountLinkResponse::*)()>(&::GlobalNamespace::SetPrimaryAccountLinkResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5330294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SetPrimaryAccountLinkResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SetPrimaryAccountLinkResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SetPrimaryAccountLinkResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::SetPrimaryAccountLinkResponse::setStaticF_links_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "links_name", ::GlobalNamespace::SetPrimaryAccountLinkResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SetPrimaryAccountLinkResponse::getStaticF_links_name()  {
return ::cordl_internals::getStaticField<::StringW, "links_name", ::GlobalNamespace::SetPrimaryAccountLinkResponse*>();
}
inline void GlobalNamespace::SetPrimaryAccountLinkResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SetPrimaryAccountLinkResponse::getCPtr(::GlobalNamespace::SetPrimaryAccountLinkResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SetPrimaryAccountLinkResponse::swigRelease(::GlobalNamespace::SetPrimaryAccountLinkResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::SetPrimaryAccountLinkResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::SetPrimaryAccountLinkResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::SetPrimaryAccountLinkResponse* GlobalNamespace::SetPrimaryAccountLinkResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::SetPrimaryAccountLinkResponse::set_Links(::GlobalNamespace::AccountLinksVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"set_Links", {}, {::i2c::type_of<::GlobalNamespace::AccountLinksVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AccountLinksVector* GlobalNamespace::SetPrimaryAccountLinkResponse::get_Links()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {"get_Links", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AccountLinksVector*>(this, ___internal_method);
}
inline void GlobalNamespace::SetPrimaryAccountLinkResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetPrimaryAccountLinkResponse* GlobalNamespace::SetPrimaryAccountLinkResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetPrimaryAccountLinkResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::SetPrimaryAccountLinkResponse* GlobalNamespace::SetPrimaryAccountLinkResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetPrimaryAccountLinkResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetPrimaryAccountLinkResponse::SetPrimaryAccountLinkResponse()   {
}
