#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateTransactionCatalogItemSunsetStatusResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateTransactionCatalogItemSunsetStatusResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipTransactionCatalogItem_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x539ba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x539bb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x539bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)(bool)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x539bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)(::StringW)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x539bd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x539be5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.set_item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)(::GlobalNamespace::MothershipTransactionCatalogItem*)>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::set_item)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x539bf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"set_item", {}, {::i2c::type_of<::GlobalNamespace::MothershipTransactionCatalogItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse.get_item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipTransactionCatalogItem* (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)()>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::get_item)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x539c064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"get_item", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::*)()>(&::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x539c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::getCPtr(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::swigRelease(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::set_item(::GlobalNamespace::MothershipTransactionCatalogItem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"set_item", {}, {::i2c::type_of<::GlobalNamespace::MothershipTransactionCatalogItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipTransactionCatalogItem* GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::get_item()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {"get_item", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipTransactionCatalogItem*>(this, ___internal_method);
}
inline void GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse::UpdateTransactionCatalogItemSunsetStatusResponse()   {
}
