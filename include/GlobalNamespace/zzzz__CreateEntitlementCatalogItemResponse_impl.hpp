#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateEntitlementCatalogItemResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__CreateEntitlementCatalogItemResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipEntitlementCatalogItem_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5288fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateEntitlementCatalogItemResponse*)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x528907c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateEntitlementCatalogItemResponse*)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x52890bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)(bool)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5289158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52892c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreateEntitlementCatalogItemResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x52893a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.set_catalogItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)(::GlobalNamespace::MothershipEntitlementCatalogItem*)>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::set_catalogItem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52894c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"set_catalogItem", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse.get_catalogItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipEntitlementCatalogItem* (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)()>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::get_catalogItem)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52895b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"get_catalogItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateEntitlementCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateEntitlementCatalogItemResponse::*)()>(&::GlobalNamespace::CreateEntitlementCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52896bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::CreateEntitlementCatalogItemResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::CreateEntitlementCatalogItemResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::CreateEntitlementCatalogItemResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::CreateEntitlementCatalogItemResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateEntitlementCatalogItemResponse::getCPtr(::GlobalNamespace::CreateEntitlementCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateEntitlementCatalogItemResponse::swigRelease(::GlobalNamespace::CreateEntitlementCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::CreateEntitlementCatalogItemResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::CreateEntitlementCatalogItemResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* GlobalNamespace::CreateEntitlementCatalogItemResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::CreateEntitlementCatalogItemResponse::set_catalogItem(::GlobalNamespace::MothershipEntitlementCatalogItem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"set_catalogItem", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* GlobalNamespace::CreateEntitlementCatalogItemResponse::get_catalogItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {"get_catalogItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipEntitlementCatalogItem*>(this, ___internal_method);
}
inline void GlobalNamespace::CreateEntitlementCatalogItemResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* GlobalNamespace::CreateEntitlementCatalogItemResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* GlobalNamespace::CreateEntitlementCatalogItemResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateEntitlementCatalogItemResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateEntitlementCatalogItemResponse::CreateEntitlementCatalogItemResponse()   {
}
