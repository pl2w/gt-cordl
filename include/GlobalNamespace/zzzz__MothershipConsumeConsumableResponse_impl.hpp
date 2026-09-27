#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipConsumeConsumableResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipConsumeConsumableResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipEntitlementCatalogItem_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipConsumeConsumableResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x529b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipConsumeConsumableResponse*)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x529b49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipConsumeConsumableResponse*)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x529b4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipConsumeConsumableResponse::*)(bool)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x529b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.set_Entitlement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipConsumeConsumableResponse::*)(::GlobalNamespace::MothershipEntitlementCatalogItem*)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::set_Entitlement)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x529b888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"set_Entitlement", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.get_Entitlement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipEntitlementCatalogItem* (::GlobalNamespace::MothershipConsumeConsumableResponse::*)()>(&::GlobalNamespace::MothershipConsumeConsumableResponse::get_Entitlement)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x529b9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"get_Entitlement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.set_NewQuantity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipConsumeConsumableResponse::*)(int32_t)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::set_NewQuantity)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x529bb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"set_NewQuantity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.get_NewQuantity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MothershipConsumeConsumableResponse::*)()>(&::GlobalNamespace::MothershipConsumeConsumableResponse::get_NewQuantity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x529bbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"get_NewQuantity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipConsumeConsumableResponse::*)(::StringW)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x529bcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipConsumeConsumableResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::MothershipConsumeConsumableResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x529bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipConsumeConsumableResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipConsumeConsumableResponse::*)()>(&::GlobalNamespace::MothershipConsumeConsumableResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x529bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipConsumeConsumableResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipConsumeConsumableResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipConsumeConsumableResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MothershipConsumeConsumableResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipConsumeConsumableResponse::getCPtr(::GlobalNamespace::MothershipConsumeConsumableResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipConsumeConsumableResponse::swigRelease(::GlobalNamespace::MothershipConsumeConsumableResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipConsumeConsumableResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipConsumeConsumableResponse::set_Entitlement(::GlobalNamespace::MothershipEntitlementCatalogItem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"set_Entitlement", {}, {::i2c::type_of<::GlobalNamespace::MothershipEntitlementCatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* GlobalNamespace::MothershipConsumeConsumableResponse::get_Entitlement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"get_Entitlement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipEntitlementCatalogItem*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipConsumeConsumableResponse::set_NewQuantity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"set_NewQuantity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MothershipConsumeConsumableResponse::get_NewQuantity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"get_NewQuantity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MothershipConsumeConsumableResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::MothershipConsumeConsumableResponse* GlobalNamespace::MothershipConsumeConsumableResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipConsumeConsumableResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::MothershipConsumeConsumableResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipConsumeConsumableResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipConsumeConsumableResponse* GlobalNamespace::MothershipConsumeConsumableResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipConsumeConsumableResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipConsumeConsumableResponse* GlobalNamespace::MothershipConsumeConsumableResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipConsumeConsumableResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipConsumeConsumableResponse::MothershipConsumeConsumableResponse()   {
}
