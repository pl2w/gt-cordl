#pragma once
// IWYU pragma private; include "GlobalNamespace/GetEntitlementCatalogItemResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetEntitlementCatalogItemResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipEntitlementCatalogItem_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5408e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetEntitlementCatalogItemResponse*)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5408f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetEntitlementCatalogItemResponse*)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5408f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)(bool)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5408ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5409168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetEntitlementCatalogItemResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x540924c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.set_result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)(::GlobalNamespace::MothershipEntitlementCatalogItem*)>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::set_result)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5409364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"set_result", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse.get_result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipEntitlementCatalogItem* (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)()>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::get_result)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5409454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"get_result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementCatalogItemResponse::*)()>(&::GlobalNamespace::GetEntitlementCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5409560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetEntitlementCatalogItemResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetEntitlementCatalogItemResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetEntitlementCatalogItemResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetEntitlementCatalogItemResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetEntitlementCatalogItemResponse::getCPtr(::GlobalNamespace::GetEntitlementCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetEntitlementCatalogItemResponse::swigRelease(::GlobalNamespace::GetEntitlementCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetEntitlementCatalogItemResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::GetEntitlementCatalogItemResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::GetEntitlementCatalogItemResponse* GlobalNamespace::GetEntitlementCatalogItemResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::GetEntitlementCatalogItemResponse::set_result(::GlobalNamespace::MothershipEntitlementCatalogItem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"set_result", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* GlobalNamespace::GetEntitlementCatalogItemResponse::get_result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {"get_result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipEntitlementCatalogItem*>(this, ___internal_method);
}
inline void GlobalNamespace::GetEntitlementCatalogItemResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetEntitlementCatalogItemResponse* GlobalNamespace::GetEntitlementCatalogItemResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetEntitlementCatalogItemResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetEntitlementCatalogItemResponse* GlobalNamespace::GetEntitlementCatalogItemResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetEntitlementCatalogItemResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetEntitlementCatalogItemResponse::GetEntitlementCatalogItemResponse()   {
}
