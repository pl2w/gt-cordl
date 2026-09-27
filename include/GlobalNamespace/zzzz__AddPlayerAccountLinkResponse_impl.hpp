#pragma once
// IWYU pragma private; include "GlobalNamespace/AddPlayerAccountLinkResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__AddPlayerAccountLinkResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__PlayerIdentityVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddPlayerAccountLinkResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5260524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AddPlayerAccountLinkResponse*)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52605d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AddPlayerAccountLinkResponse*)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5260618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddPlayerAccountLinkResponse::*)(bool)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52606b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AddPlayerAccountLinkResponse::*)(::StringW)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5260820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AddPlayerAccountLinkResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5260904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.set_Identities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddPlayerAccountLinkResponse::*)(::GlobalNamespace::PlayerIdentityVector*)>(&::GlobalNamespace::AddPlayerAccountLinkResponse::set_Identities)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5260a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"set_Identities", {}, {::i2c::type_of<::GlobalNamespace::PlayerIdentityVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse.get_Identities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerIdentityVector* (::GlobalNamespace::AddPlayerAccountLinkResponse::*)()>(&::GlobalNamespace::AddPlayerAccountLinkResponse::get_Identities)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5260b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"get_Identities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddPlayerAccountLinkResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddPlayerAccountLinkResponse::*)()>(&::GlobalNamespace::AddPlayerAccountLinkResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5260c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::AddPlayerAccountLinkResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::AddPlayerAccountLinkResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::AddPlayerAccountLinkResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::AddPlayerAccountLinkResponse::setStaticF_identities_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "identities_name", ::GlobalNamespace::AddPlayerAccountLinkResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AddPlayerAccountLinkResponse::getStaticF_identities_name()  {
return ::cordl_internals::getStaticField<::StringW, "identities_name", ::GlobalNamespace::AddPlayerAccountLinkResponse*>();
}
inline void GlobalNamespace::AddPlayerAccountLinkResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AddPlayerAccountLinkResponse::getCPtr(::GlobalNamespace::AddPlayerAccountLinkResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AddPlayerAccountLinkResponse::swigRelease(::GlobalNamespace::AddPlayerAccountLinkResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AddPlayerAccountLinkResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::AddPlayerAccountLinkResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::AddPlayerAccountLinkResponse* GlobalNamespace::AddPlayerAccountLinkResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AddPlayerAccountLinkResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::AddPlayerAccountLinkResponse::set_Identities(::GlobalNamespace::PlayerIdentityVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"set_Identities", {}, {::i2c::type_of<::GlobalNamespace::PlayerIdentityVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerIdentityVector* GlobalNamespace::AddPlayerAccountLinkResponse::get_Identities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {"get_Identities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerIdentityVector*>(this, ___internal_method);
}
inline void GlobalNamespace::AddPlayerAccountLinkResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddPlayerAccountLinkResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AddPlayerAccountLinkResponse* GlobalNamespace::AddPlayerAccountLinkResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddPlayerAccountLinkResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::AddPlayerAccountLinkResponse* GlobalNamespace::AddPlayerAccountLinkResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddPlayerAccountLinkResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddPlayerAccountLinkResponse::AddPlayerAccountLinkResponse()   {
}
