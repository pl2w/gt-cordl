#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomationGetSubscriptionsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__AutomationGetSubscriptionsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__SubscriptionsVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x526ce44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AutomationGetSubscriptionsResponse*)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x526cef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::AutomationGetSubscriptionsResponse*)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x526cf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)(bool)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x526cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)(::GlobalNamespace::SubscriptionsVector*)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x526d140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionsVector* (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)()>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x526d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)(::StringW)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x526d33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AutomationGetSubscriptionsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x526d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomationGetSubscriptionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomationGetSubscriptionsResponse::*)()>(&::GlobalNamespace::AutomationGetSubscriptionsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x526d538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::AutomationGetSubscriptionsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::AutomationGetSubscriptionsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::AutomationGetSubscriptionsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::AutomationGetSubscriptionsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AutomationGetSubscriptionsResponse::getCPtr(::GlobalNamespace::AutomationGetSubscriptionsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::AutomationGetSubscriptionsResponse::swigRelease(::GlobalNamespace::AutomationGetSubscriptionsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AutomationGetSubscriptionsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::AutomationGetSubscriptionsResponse::set_Results(::GlobalNamespace::SubscriptionsVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionsVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SubscriptionsVector* GlobalNamespace::AutomationGetSubscriptionsResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionsVector*>(this, ___internal_method);
}
inline bool GlobalNamespace::AutomationGetSubscriptionsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::AutomationGetSubscriptionsResponse* GlobalNamespace::AutomationGetSubscriptionsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::AutomationGetSubscriptionsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutomationGetSubscriptionsResponse* GlobalNamespace::AutomationGetSubscriptionsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutomationGetSubscriptionsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::AutomationGetSubscriptionsResponse* GlobalNamespace::AutomationGetSubscriptionsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutomationGetSubscriptionsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomationGetSubscriptionsResponse::AutomationGetSubscriptionsResponse()   {
}
