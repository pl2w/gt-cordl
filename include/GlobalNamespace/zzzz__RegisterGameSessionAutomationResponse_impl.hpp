#pragma once
// IWYU pragma private; include "GlobalNamespace/RegisterGameSessionAutomationResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__RegisterGameSessionAutomationResponse_def.hpp"
#include "GlobalNamespace/zzzz__GameSession_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x530f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RegisterGameSessionAutomationResponse*)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x530f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RegisterGameSessionAutomationResponse*)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x530f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)(bool)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x530f65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)(::StringW)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x530f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RegisterGameSessionAutomationResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x530f8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)(::GlobalNamespace::GameSession*)>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::set_Result)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x530f9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameSession* (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)()>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::get_Result)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x530fad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RegisterGameSessionAutomationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RegisterGameSessionAutomationResponse::*)()>(&::GlobalNamespace::RegisterGameSessionAutomationResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x530fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::RegisterGameSessionAutomationResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::RegisterGameSessionAutomationResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::RegisterGameSessionAutomationResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::RegisterGameSessionAutomationResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RegisterGameSessionAutomationResponse::getCPtr(::GlobalNamespace::RegisterGameSessionAutomationResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RegisterGameSessionAutomationResponse::swigRelease(::GlobalNamespace::RegisterGameSessionAutomationResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::RegisterGameSessionAutomationResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::RegisterGameSessionAutomationResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::RegisterGameSessionAutomationResponse* GlobalNamespace::RegisterGameSessionAutomationResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::RegisterGameSessionAutomationResponse::set_Result(::GlobalNamespace::GameSession*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameSession* GlobalNamespace::RegisterGameSessionAutomationResponse::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameSession*>(this, ___internal_method);
}
inline void GlobalNamespace::RegisterGameSessionAutomationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RegisterGameSessionAutomationResponse* GlobalNamespace::RegisterGameSessionAutomationResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RegisterGameSessionAutomationResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::RegisterGameSessionAutomationResponse* GlobalNamespace::RegisterGameSessionAutomationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RegisterGameSessionAutomationResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RegisterGameSessionAutomationResponse::RegisterGameSessionAutomationResponse()   {
}
