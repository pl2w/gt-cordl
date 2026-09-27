#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchmakingConnectionInformation.hpp"
#include "GlobalNamespace/zzzz__GameSessionConnectionInformation_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MatchmakingConnectionInformation_def.hpp"
#include "GlobalNamespace/zzzz__MatchedPlayerSessionMap_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingConnectionInformation::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MatchmakingConnectionInformation::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x557e6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MatchmakingConnectionInformation*)>(&::GlobalNamespace::MatchmakingConnectionInformation::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x557e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MatchmakingConnectionInformation*)>(&::GlobalNamespace::MatchmakingConnectionInformation::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x557e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingConnectionInformation::*)(bool)>(&::GlobalNamespace::MatchmakingConnectionInformation::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x557e85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                    {::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.set_matched_player_sessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingConnectionInformation::*)(::GlobalNamespace::MatchedPlayerSessionMap*)>(&::GlobalNamespace::MatchmakingConnectionInformation::set_matched_player_sessions)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x557e9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"set_matched_player_sessions", {}, {::i2c::type_of<::GlobalNamespace::MatchedPlayerSessionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.get_matched_player_sessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MatchedPlayerSessionMap* (::GlobalNamespace::MatchmakingConnectionInformation::*)()>(&::GlobalNamespace::MatchmakingConnectionInformation::get_matched_player_sessions)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x557eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"get_matched_player_sessions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation.ParseFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MatchmakingConnectionInformation::*)(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*)>(&::GlobalNamespace::MatchmakingConnectionInformation::ParseFromJson)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x557ebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchmakingConnectionInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchmakingConnectionInformation::*)()>(&::GlobalNamespace::MatchmakingConnectionInformation::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x557eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MatchmakingConnectionInformation::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MatchmakingConnectionInformation::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MatchmakingConnectionInformation::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MatchmakingConnectionInformation::setStaticF_matched_player_sessions_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "matched_player_sessions_name", ::GlobalNamespace::MatchmakingConnectionInformation*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MatchmakingConnectionInformation::getStaticF_matched_player_sessions_name()  {
return ::cordl_internals::getStaticField<::StringW, "matched_player_sessions_name", ::GlobalNamespace::MatchmakingConnectionInformation*>();
}
inline void GlobalNamespace::MatchmakingConnectionInformation::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MatchmakingConnectionInformation::getCPtr(::GlobalNamespace::MatchmakingConnectionInformation*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MatchmakingConnectionInformation::swigRelease(::GlobalNamespace::MatchmakingConnectionInformation*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MatchmakingConnectionInformation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MatchmakingConnectionInformation::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MatchmakingConnectionInformation::set_matched_player_sessions(::GlobalNamespace::MatchedPlayerSessionMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"set_matched_player_sessions", {}, {::i2c::type_of<::GlobalNamespace::MatchedPlayerSessionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MatchedPlayerSessionMap* GlobalNamespace::MatchmakingConnectionInformation::get_matched_player_sessions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"get_matched_player_sessions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MatchedPlayerSessionMap*>(this, ___internal_method);
}
inline bool GlobalNamespace::MatchmakingConnectionInformation::ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {"ParseFromJson", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, object_);
}
inline void GlobalNamespace::MatchmakingConnectionInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchmakingConnectionInformation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MatchmakingConnectionInformation* GlobalNamespace::MatchmakingConnectionInformation::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MatchmakingConnectionInformation*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MatchmakingConnectionInformation* GlobalNamespace::MatchmakingConnectionInformation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MatchmakingConnectionInformation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchmakingConnectionInformation::MatchmakingConnectionInformation()   {
}
