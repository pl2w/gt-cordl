#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateGameSessionServerResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateGameSessionServerResponse_def.hpp"
#include "GlobalNamespace/zzzz__GameSession_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateGameSessionServerResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::UpdateGameSessionServerResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x537cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateGameSessionServerResponse*)>(&::GlobalNamespace::UpdateGameSessionServerResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x537cdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionServerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::UpdateGameSessionServerResponse*)>(&::GlobalNamespace::UpdateGameSessionServerResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x537ce14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionServerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateGameSessionServerResponse::*)(bool)>(&::GlobalNamespace::UpdateGameSessionServerResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x537ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UpdateGameSessionServerResponse::*)(::StringW)>(&::GlobalNamespace::UpdateGameSessionServerResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x537d01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UpdateGameSessionServerResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::UpdateGameSessionServerResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x537d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateGameSessionServerResponse::*)(::GlobalNamespace::GameSession*)>(&::GlobalNamespace::UpdateGameSessionServerResponse::set_Result)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x537d218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameSession* (::GlobalNamespace::UpdateGameSessionServerResponse::*)()>(&::GlobalNamespace::UpdateGameSessionServerResponse::get_Result)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x537d32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UpdateGameSessionServerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpdateGameSessionServerResponse::*)()>(&::GlobalNamespace::UpdateGameSessionServerResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x537d438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::UpdateGameSessionServerResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::UpdateGameSessionServerResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::UpdateGameSessionServerResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::UpdateGameSessionServerResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateGameSessionServerResponse::getCPtr(::GlobalNamespace::UpdateGameSessionServerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionServerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::UpdateGameSessionServerResponse::swigRelease(::GlobalNamespace::UpdateGameSessionServerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionServerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UpdateGameSessionServerResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::UpdateGameSessionServerResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::UpdateGameSessionServerResponse* GlobalNamespace::UpdateGameSessionServerResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UpdateGameSessionServerResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::UpdateGameSessionServerResponse::set_Result(::GlobalNamespace::GameSession*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::GameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameSession* GlobalNamespace::UpdateGameSessionServerResponse::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameSession*>(this, ___internal_method);
}
inline void GlobalNamespace::UpdateGameSessionServerResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpdateGameSessionServerResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpdateGameSessionServerResponse* GlobalNamespace::UpdateGameSessionServerResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateGameSessionServerResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::UpdateGameSessionServerResponse* GlobalNamespace::UpdateGameSessionServerResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpdateGameSessionServerResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateGameSessionServerResponse::UpdateGameSessionServerResponse()   {
}
