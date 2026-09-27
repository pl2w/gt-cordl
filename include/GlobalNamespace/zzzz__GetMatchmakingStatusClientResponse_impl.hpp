#pragma once
// IWYU pragma private; include "GlobalNamespace/GetMatchmakingStatusClientResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetMatchmakingStatusClientResponse_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingTicket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x540ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetMatchmakingStatusClientResponse*)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x540efe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetMatchmakingStatusClientResponse*)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x540f024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)(bool)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x540f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)(::StringW)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x540f22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GetMatchmakingStatusClientResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x540f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)(::GlobalNamespace::MatchmakingTicket*)>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::set_ticket)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x540f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"set_ticket", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchmakingTicket* (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)()>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::get_ticket)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x540f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetMatchmakingStatusClientResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetMatchmakingStatusClientResponse::*)()>(&::GlobalNamespace::GetMatchmakingStatusClientResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x540f648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetMatchmakingStatusClientResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetMatchmakingStatusClientResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetMatchmakingStatusClientResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetMatchmakingStatusClientResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetMatchmakingStatusClientResponse::getCPtr(::GlobalNamespace::GetMatchmakingStatusClientResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetMatchmakingStatusClientResponse::swigRelease(::GlobalNamespace::GetMatchmakingStatusClientResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetMatchmakingStatusClientResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::GetMatchmakingStatusClientResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* GlobalNamespace::GetMatchmakingStatusClientResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::GetMatchmakingStatusClientResponse::set_ticket(::GlobalNamespace::MatchmakingTicket*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"set_ticket", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MatchmakingTicket* GlobalNamespace::GetMatchmakingStatusClientResponse::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchmakingTicket*>(this, ___internal_method);
}
inline void GlobalNamespace::GetMatchmakingStatusClientResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* GlobalNamespace::GetMatchmakingStatusClientResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetMatchmakingStatusClientResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetMatchmakingStatusClientResponse* GlobalNamespace::GetMatchmakingStatusClientResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetMatchmakingStatusClientResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetMatchmakingStatusClientResponse::GetMatchmakingStatusClientResponse()   {
}
