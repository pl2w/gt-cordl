#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomationListSubscriptionCatalogItemsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__AutomationListSubscriptionCatalogItemsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionCatalogItemVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x526ea58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x526eb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x526eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)(bool)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x526ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)(::GlobalNamespace::SubscriptionCatalogItemVector*)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x526ed54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionCatalogItemVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionCatalogItemVector* (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)()>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x526ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)(::StringW)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x526ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x526f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::*)()>(&::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x526f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::getCPtr(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::swigRelease(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::set_Results(::GlobalNamespace::SubscriptionCatalogItemVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionCatalogItemVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SubscriptionCatalogItemVector* GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionCatalogItemVector*>(this, ___internal_method);
}
inline bool GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse::AutomationListSubscriptionCatalogItemsResponse()   {
}
