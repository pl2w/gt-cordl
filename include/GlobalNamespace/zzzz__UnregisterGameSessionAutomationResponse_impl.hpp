#pragma once
// IWYU pragma private; include "GlobalNamespace/UnregisterGameSessionAutomationResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UnregisterGameSessionAutomationResponse_def.hpp"
#include "GlobalNamespace/zzzz__GameSession_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x536dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UnregisterGameSessionAutomationResponse*)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x536de14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UnregisterGameSessionAutomationResponse*)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x536de54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)(bool)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x536def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)(::StringW)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x536e05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnregisterGameSessionAutomationResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x536e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)(::GlobalNamespace::GameSession*)>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::set_Result)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x536e258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameSession* (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)()>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::get_Result)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x536e36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnregisterGameSessionAutomationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnregisterGameSessionAutomationResponse::*)()>(&::GlobalNamespace::UnregisterGameSessionAutomationResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x536e478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UnregisterGameSessionAutomationResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UnregisterGameSessionAutomationResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UnregisterGameSessionAutomationResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UnregisterGameSessionAutomationResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UnregisterGameSessionAutomationResponse::getCPtr(::GlobalNamespace::UnregisterGameSessionAutomationResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UnregisterGameSessionAutomationResponse::swigRelease(::GlobalNamespace::UnregisterGameSessionAutomationResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UnregisterGameSessionAutomationResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::UnregisterGameSessionAutomationResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UnregisterGameSessionAutomationResponse* GlobalNamespace::UnregisterGameSessionAutomationResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UnregisterGameSessionAutomationResponse::set_Result(::GlobalNamespace::GameSession*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameSession* GlobalNamespace::UnregisterGameSessionAutomationResponse::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameSession*>(this, ___internal_method);
}
inline void GlobalNamespace::UnregisterGameSessionAutomationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnregisterGameSessionAutomationResponse* GlobalNamespace::UnregisterGameSessionAutomationResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UnregisterGameSessionAutomationResponse* GlobalNamespace::UnregisterGameSessionAutomationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnregisterGameSessionAutomationResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnregisterGameSessionAutomationResponse::UnregisterGameSessionAutomationResponse()   {
}
