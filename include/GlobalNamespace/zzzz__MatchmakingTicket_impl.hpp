#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingTicket.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MatchmakingTicket_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingConnectionInformation_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingTicketPlayerMap_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MatchmakingTicket::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x558217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MatchmakingTicket*)>(&::GlobalNamespace::MatchmakingTicket::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x55821dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MatchmakingTicket*)>(&::GlobalNamespace::MatchmakingTicket::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x558221c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5582320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                    {::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55822b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(bool)>(&::GlobalNamespace::MatchmakingTicket::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55823b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                    {::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_ticket_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::StringW)>(&::GlobalNamespace::MatchmakingTicket::set_ticket_id)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55824fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_ticket_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_ticket_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_ticket_id)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55825cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_ticket_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::StringW)>(&::GlobalNamespace::MatchmakingTicket::set_status)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5582698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_status)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5582768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_start_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::StringW)>(&::GlobalNamespace::MatchmakingTicket::set_start_time)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5582834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_start_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_start_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_start_time)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5582904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_start_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_estimated_wait_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(int32_t)>(&::GlobalNamespace::MatchmakingTicket::set_estimated_wait_time)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55829d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_estimated_wait_time", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_estimated_wait_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_estimated_wait_time)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5582aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_estimated_wait_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_connection_information
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::GlobalNamespace::MatchmakingConnectionInformation*)>(&::GlobalNamespace::MatchmakingTicket::set_connection_information)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5582b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_connection_information", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_connection_information
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchmakingConnectionInformation* (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_connection_information)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5582c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_connection_information", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.set_players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)(::GlobalNamespace::MatchmakingTicketPlayerMap*)>(&::GlobalNamespace::MatchmakingTicket::set_players)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5582d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_players", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicketPlayerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.get_players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchmakingTicketPlayerMap* (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::get_players)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5582e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_players", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket.ParseFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MatchmakingTicket::*)(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*)>(&::GlobalNamespace::MatchmakingTicket::ParseFromJson)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5582ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingTicket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingTicket::*)()>(&::GlobalNamespace::MatchmakingTicket::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55830ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MatchmakingTicket::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MatchmakingTicket::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MatchmakingTicket::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MatchmakingTicket::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MatchmakingTicket::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MatchmakingTicket::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_ticket_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ticket_id_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_ticket_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "ticket_id_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_status_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "status_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_status_name()  {
return ::cordl_internals::getStaticField<::StringW, "status_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_start_time_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "start_time_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_start_time_name()  {
return ::cordl_internals::getStaticField<::StringW, "start_time_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_estimated_wait_time_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "estimated_wait_time_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_estimated_wait_time_name()  {
return ::cordl_internals::getStaticField<::StringW, "estimated_wait_time_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_connection_information_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "connection_information_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_connection_information_name()  {
return ::cordl_internals::getStaticField<::StringW, "connection_information_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::setStaticF_players_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "players_name", ::GlobalNamespace::MatchmakingTicket*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingTicket::getStaticF_players_name()  {
return ::cordl_internals::getStaticField<::StringW, "players_name", ::GlobalNamespace::MatchmakingTicket*>();
}
inline void GlobalNamespace::MatchmakingTicket::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MatchmakingTicket::getCPtr(::GlobalNamespace::MatchmakingTicket*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MatchmakingTicket::swigRelease(::GlobalNamespace::MatchmakingTicket*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MatchmakingTicket::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MatchmakingTicket::set_ticket_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_ticket_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MatchmakingTicket::get_ticket_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_ticket_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::set_status(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_status", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MatchmakingTicket::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::set_start_time(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_start_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MatchmakingTicket::get_start_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_start_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::set_estimated_wait_time(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_estimated_wait_time", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MatchmakingTicket::get_estimated_wait_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_estimated_wait_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::set_connection_information(::GlobalNamespace::MatchmakingConnectionInformation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_connection_information", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MatchmakingConnectionInformation* GlobalNamespace::MatchmakingTicket::get_connection_information()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_connection_information", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchmakingConnectionInformation*>(this, ___internal_method);
}
inline void GlobalNamespace::MatchmakingTicket::set_players(::GlobalNamespace::MatchmakingTicketPlayerMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"set_players", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingTicketPlayerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MatchmakingTicketPlayerMap* GlobalNamespace::MatchmakingTicket::get_players()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"get_players", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchmakingTicketPlayerMap*>(this, ___internal_method);
}
inline bool GlobalNamespace::MatchmakingTicket::ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, object_);
}
inline void GlobalNamespace::MatchmakingTicket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingTicket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MatchmakingTicket* GlobalNamespace::MatchmakingTicket::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MatchmakingTicket*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MatchmakingTicket* GlobalNamespace::MatchmakingTicket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MatchmakingTicket*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MatchmakingTicket::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MatchmakingTicket::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchmakingTicket::MatchmakingTicket()   {
}
