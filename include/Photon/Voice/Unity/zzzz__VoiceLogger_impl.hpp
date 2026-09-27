#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceLogger.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::UnityEngine::Object*, ::StringW, ::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceLogger::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7835bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW, ::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceLogger::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa783614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_Tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.set_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW)>(&::Photon::Voice::Unity::VoiceLogger::set_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"set_Tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_LogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_LogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceLogger::set_LogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_IsErrorEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_IsErrorEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa783670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsErrorEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_IsWarningEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_IsWarningEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa78343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsWarningEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_IsInfoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_IsInfoEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa783320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsInfoEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.get_IsDebugEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::get_IsDebugEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa783680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsDebugEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::VoiceLogger::LogError)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa783690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::VoiceLogger::LogWarning)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa78344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.LogInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::VoiceLogger::LogInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa783330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::Unity::VoiceLogger::LogDebug)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa783804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.GetFormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::VoiceLogger::*)(::StringW)>(&::Photon::Voice::Unity::VoiceLogger::GetFormatString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa783798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"GetFormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceLogger.GetTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::VoiceLogger::*)()>(&::Photon::Voice::Unity::VoiceLogger::GetTimestamp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa783818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"GetTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get__Tag_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tag_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get__Tag_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tag_k__BackingField;
}
constexpr void Photon::Voice::Unity::VoiceLogger::__cordl_internal_set__Tag_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tag_k__BackingField = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get__LogLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogLevel_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get__LogLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogLevel_k__BackingField;
}
constexpr void Photon::Voice::Unity::VoiceLogger::__cordl_internal_set__LogLevel_k__BackingField(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogLevel_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::UnityW<::UnityEngine::Object> const& Photon::Voice::Unity::VoiceLogger::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void Photon::Voice::Unity::VoiceLogger::__cordl_internal_set_context(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
inline void Photon::Voice::Unity::VoiceLogger::_ctor(::UnityEngine::Object*  context, ::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, tag, level);
}
inline void Photon::Voice::Unity::VoiceLogger::_ctor(::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, level);
}
inline ::StringW Photon::Voice::Unity::VoiceLogger::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_Tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceLogger::set_Tag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"set_Tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::VoiceLogger::get_LogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_LogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceLogger::set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::VoiceLogger::get_IsErrorEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsErrorEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::VoiceLogger::get_IsWarningEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsWarningEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::VoiceLogger::get_IsInfoEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsInfoEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::VoiceLogger::get_IsDebugEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"get_IsDebugEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceLogger::LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::VoiceLogger::LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::VoiceLogger::LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::Unity::VoiceLogger::LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline ::StringW Photon::Voice::Unity::VoiceLogger::GetFormatString(::StringW  fmt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"GetFormatString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, fmt);
}
inline ::StringW Photon::Voice::Unity::VoiceLogger::GetTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceLogger*>(),
                        {"GetTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Unity::VoiceLogger::New_ctor(::UnityEngine::Object*  context, ::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceLogger*>(context, tag, level));
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Unity::VoiceLogger::New_ctor(::StringW  tag, ::ExitGames::Client::Photon::DebugLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceLogger*>(tag, level));
}
/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr  Photon::Voice::Unity::VoiceLogger::operator ::Photon::Voice::ILogger*() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* Photon::Voice::Unity::VoiceLogger::i___Photon__Voice__ILogger() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceLogger::VoiceLogger()   {
}
