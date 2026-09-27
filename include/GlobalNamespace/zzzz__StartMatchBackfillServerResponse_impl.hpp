#pragma once
// IWYU pragma private; include "GlobalNamespace/StartMatchBackfillServerResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__StartMatchBackfillServerResponse_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingTicket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMatchBackfillServerResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::StartMatchBackfillServerResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x533d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::StartMatchBackfillServerResponse*)>(&::GlobalNamespace::StartMatchBackfillServerResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x533d494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillServerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::StartMatchBackfillServerResponse*)>(&::GlobalNamespace::StartMatchBackfillServerResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x533d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillServerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMatchBackfillServerResponse::*)(bool)>(&::GlobalNamespace::StartMatchBackfillServerResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x533d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StartMatchBackfillServerResponse::*)(::StringW)>(&::GlobalNamespace::StartMatchBackfillServerResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x533d6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StartMatchBackfillServerResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::StartMatchBackfillServerResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x533d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.set_Ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMatchBackfillServerResponse::*)(::GlobalNamespace::MatchmakingTicket*)>(&::GlobalNamespace::StartMatchBackfillServerResponse::set_Ticket)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x533d8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"set_Ticket", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse.get_Ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchmakingTicket* (::GlobalNamespace::StartMatchBackfillServerResponse::*)()>(&::GlobalNamespace::StartMatchBackfillServerResponse::get_Ticket)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x533d9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"get_Ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMatchBackfillServerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMatchBackfillServerResponse::*)()>(&::GlobalNamespace::StartMatchBackfillServerResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x533daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::StartMatchBackfillServerResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::StartMatchBackfillServerResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::StartMatchBackfillServerResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::StartMatchBackfillServerResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::StartMatchBackfillServerResponse::getCPtr(::GlobalNamespace::StartMatchBackfillServerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillServerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::StartMatchBackfillServerResponse::swigRelease(::GlobalNamespace::StartMatchBackfillServerResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillServerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::StartMatchBackfillServerResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::StartMatchBackfillServerResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::StartMatchBackfillServerResponse* GlobalNamespace::StartMatchBackfillServerResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StartMatchBackfillServerResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::StartMatchBackfillServerResponse::set_Ticket(::GlobalNamespace::MatchmakingTicket*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"set_Ticket", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MatchmakingTicket* GlobalNamespace::StartMatchBackfillServerResponse::get_Ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {"get_Ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchmakingTicket*>(this, ___internal_method);
}
inline void GlobalNamespace::StartMatchBackfillServerResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StartMatchBackfillServerResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartMatchBackfillServerResponse* GlobalNamespace::StartMatchBackfillServerResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartMatchBackfillServerResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::StartMatchBackfillServerResponse* GlobalNamespace::StartMatchBackfillServerResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartMatchBackfillServerResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartMatchBackfillServerResponse::StartMatchBackfillServerResponse()   {
}
