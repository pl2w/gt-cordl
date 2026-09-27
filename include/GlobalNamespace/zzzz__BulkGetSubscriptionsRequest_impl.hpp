#pragma once
// IWYU pragma private; include "GlobalNamespace/BulkGetSubscriptionsRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__BulkGetSubscriptionsRequest_def.hpp"
#include "GlobalNamespace/zzzz__PlatformAndSkuVector_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5273318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::BulkGetSubscriptionsRequest*)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52733cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::BulkGetSubscriptionsRequest*)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x527340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)(bool)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52734a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::BulkGetSubscriptionsRequest::*)()>(&::GlobalNamespace::BulkGetSubscriptionsRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5273614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.set_PlatformSkus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)(::GlobalNamespace::PlatformAndSkuVector*)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::set_PlatformSkus)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5273720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_PlatformSkus", {}, {::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.get_PlatformSkus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlatformAndSkuVector* (::GlobalNamespace::BulkGetSubscriptionsRequest::*)()>(&::GlobalNamespace::BulkGetSubscriptionsRequest::get_PlatformSkus)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5273810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_PlatformSkus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.set_CatalogIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)(::GlobalNamespace::StringVector*)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::set_CatalogIds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x527391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_CatalogIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.get_CatalogIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringVector* (::GlobalNamespace::BulkGetSubscriptionsRequest::*)()>(&::GlobalNamespace::BulkGetSubscriptionsRequest::get_CatalogIds)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5273a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_CatalogIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.set_PlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)(::GlobalNamespace::StringVector*)>(&::GlobalNamespace::BulkGetSubscriptionsRequest::set_PlayerIds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5273b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_PlayerIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest.get_PlayerIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringVector* (::GlobalNamespace::BulkGetSubscriptionsRequest::*)()>(&::GlobalNamespace::BulkGetSubscriptionsRequest::get_PlayerIds)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5273c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_PlayerIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BulkGetSubscriptionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BulkGetSubscriptionsRequest::*)()>(&::GlobalNamespace::BulkGetSubscriptionsRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5273d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::BulkGetSubscriptionsRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::BulkGetSubscriptionsRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::BulkGetSubscriptionsRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::BulkGetSubscriptionsRequest::getCPtr(::GlobalNamespace::BulkGetSubscriptionsRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::BulkGetSubscriptionsRequest::swigRelease(::GlobalNamespace::BulkGetSubscriptionsRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::BulkGetSubscriptionsRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::set_PlatformSkus(::GlobalNamespace::PlatformAndSkuVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_PlatformSkus", {}, {::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformAndSkuVector* GlobalNamespace::BulkGetSubscriptionsRequest::get_PlatformSkus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_PlatformSkus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformAndSkuVector*>(this, ___internal_method);
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::set_CatalogIds(::GlobalNamespace::StringVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_CatalogIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringVector* GlobalNamespace::BulkGetSubscriptionsRequest::get_CatalogIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_CatalogIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringVector*>(this, ___internal_method);
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::set_PlayerIds(::GlobalNamespace::StringVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"set_PlayerIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringVector* GlobalNamespace::BulkGetSubscriptionsRequest::get_PlayerIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {"get_PlayerIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringVector*>(this, ___internal_method);
}
inline void GlobalNamespace::BulkGetSubscriptionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BulkGetSubscriptionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BulkGetSubscriptionsRequest* GlobalNamespace::BulkGetSubscriptionsRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BulkGetSubscriptionsRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::BulkGetSubscriptionsRequest* GlobalNamespace::BulkGetSubscriptionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BulkGetSubscriptionsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BulkGetSubscriptionsRequest::BulkGetSubscriptionsRequest()   {
}
