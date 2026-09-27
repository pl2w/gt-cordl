#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinableGameSession.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__JoinableGameSession_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t_def.hpp"
#include "GlobalNamespace/zzzz__StringKeyValueMap_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::System::IntPtr, bool)>(&::GlobalNamespace::JoinableGameSession::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x54453a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::JoinableGameSession*)>(&::GlobalNamespace::JoinableGameSession::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5445400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::JoinableGameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::JoinableGameSession*)>(&::GlobalNamespace::JoinableGameSession::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5445440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::JoinableGameSession*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5445544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                    {::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x54454d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(bool)>(&::GlobalNamespace::JoinableGameSession::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x54455d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                    {::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::StringW)>(&::GlobalNamespace::JoinableGameSession::set_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5445720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54457f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::StringW)>(&::GlobalNamespace::JoinableGameSession::set_game_session_name)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54458cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_game_session_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_game_session_name)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54459a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_game_session_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_current_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(int32_t)>(&::GlobalNamespace::JoinableGameSession::set_current_player_count)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5445a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_current_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_current_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_current_player_count)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5445b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_current_player_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(int32_t)>(&::GlobalNamespace::JoinableGameSession::set_max_player_count)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5445c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_max_player_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_max_player_count)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5445cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_max_player_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::StringW)>(&::GlobalNamespace::JoinableGameSession::set_region)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5445dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_region)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5445ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_region", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_created_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::StringW)>(&::GlobalNamespace::JoinableGameSession::set_created_at)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5445f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_created_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_created_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_created_at)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5446054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_created_at", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::StringW)>(&::GlobalNamespace::JoinableGameSession::set_updated_at)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5446128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_updated_at
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_updated_at)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5446200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_updated_at", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.set_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)(::GlobalNamespace::StringKeyValueMap*)>(&::GlobalNamespace::JoinableGameSession::set_extra_properties)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x54462d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.get_extra_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringKeyValueMap* (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::get_extra_properties)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x54463c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_extra_properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession.ParseFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinableGameSession::*)(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*)>(&::GlobalNamespace::JoinableGameSession::ParseFromJson)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x54464d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinableGameSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinableGameSession::*)()>(&::GlobalNamespace::JoinableGameSession::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x54465cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::JoinableGameSession::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::JoinableGameSession::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::JoinableGameSession::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::JoinableGameSession::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::JoinableGameSession::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::JoinableGameSession::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "id_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "id_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_game_session_name_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "game_session_name_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_game_session_name_name()  {
return ::cordl_internals::getStaticField<::StringW, "game_session_name_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_current_player_count_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "current_player_count_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_current_player_count_name()  {
return ::cordl_internals::getStaticField<::StringW, "current_player_count_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_max_player_count_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "max_player_count_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_max_player_count_name()  {
return ::cordl_internals::getStaticField<::StringW, "max_player_count_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_region_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "region_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_region_name()  {
return ::cordl_internals::getStaticField<::StringW, "region_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_created_at_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "created_at_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_created_at_name()  {
return ::cordl_internals::getStaticField<::StringW, "created_at_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_updated_at_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "updated_at_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_updated_at_name()  {
return ::cordl_internals::getStaticField<::StringW, "updated_at_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::setStaticF_extra_properties_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "extra_properties_name", ::GlobalNamespace::JoinableGameSession*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::JoinableGameSession::getStaticF_extra_properties_name()  {
return ::cordl_internals::getStaticField<::StringW, "extra_properties_name", ::GlobalNamespace::JoinableGameSession*>();
}
inline void GlobalNamespace::JoinableGameSession::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::JoinableGameSession::getCPtr(::GlobalNamespace::JoinableGameSession*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::JoinableGameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::JoinableGameSession::swigRelease(::GlobalNamespace::JoinableGameSession*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::JoinableGameSession*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::JoinableGameSession::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::JoinableGameSession::set_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::JoinableGameSession::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_game_session_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_game_session_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::JoinableGameSession::get_game_session_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_game_session_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_current_player_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_current_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::JoinableGameSession::get_current_player_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_current_player_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_max_player_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_max_player_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::JoinableGameSession::get_max_player_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_max_player_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_region(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_region", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::JoinableGameSession::get_region()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_region", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_created_at(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_created_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::JoinableGameSession::get_created_at()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_created_at", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_updated_at(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_updated_at", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::JoinableGameSession::get_updated_at()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_updated_at", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::JoinableGameSession::set_extra_properties(::GlobalNamespace::StringKeyValueMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"set_extra_properties", {}, {::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringKeyValueMap* GlobalNamespace::JoinableGameSession::get_extra_properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"get_extra_properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringKeyValueMap*>(this, ___internal_method);
}
inline bool GlobalNamespace::JoinableGameSession::ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, object_);
}
inline void GlobalNamespace::JoinableGameSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinableGameSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JoinableGameSession* GlobalNamespace::JoinableGameSession::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoinableGameSession*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::JoinableGameSession* GlobalNamespace::JoinableGameSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoinableGameSession*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::JoinableGameSession::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::JoinableGameSession::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinableGameSession::JoinableGameSession()   {
}
