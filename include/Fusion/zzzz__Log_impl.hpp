#pragma once
// IWYU pragma private; include "Fusion/Log.hpp"
#include "Fusion/zzzz__LogSettings_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Log_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__LogFlags_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__LogSettings_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "Fusion/zzzz__Log_Factory_def.hpp"
#include "Fusion/zzzz__Log_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Log.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::Log::get_IsInitialized)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f44788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Fusion::Log::set_IsInitialized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f447d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LogSettings (*)()>(&::Fusion::Log::get_Settings)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f44820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LogSettings)>(&::Fusion::Log::set_Settings)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f44868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"set_Settings", {}, {::i2c::type_of<::Fusion::LogSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LogLevel, ::Fusion::Log_CreateLogStreamDelegate*, ::Fusion::TraceChannels)>(&::Fusion::Log::Initialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f448b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::Log_CreateLogStreamDelegate*>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.InitPartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Log_Factory>)>(&::Fusion::Log::InitPartial)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5f44a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"InitPartial", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Log_Factory>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.InitInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Log_Factory>)>(&::Fusion::Log::InitInternal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5f448e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"InitInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Log_Factory>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::Log::Warn)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f44ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::Log::Warn)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f44f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Fusion::Log::Error)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f44fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::Log::Error)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f4500c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Error", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Log::setStaticF__IsInitialized_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsInitialized>k__BackingField", ::Fusion::Log*>(std::forward<bool>(value));
}
inline bool Fusion::Log::getStaticF__IsInitialized_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsInitialized>k__BackingField", ::Fusion::Log*>();
}
inline void Fusion::Log::setStaticF__Settings_k__BackingField(::Fusion::LogSettings  value)  {
::cordl_internals::setStaticField<::Fusion::LogSettings, "<Settings>k__BackingField", ::Fusion::Log*>(std::forward<::Fusion::LogSettings>(value));
}
inline ::Fusion::LogSettings Fusion::Log::getStaticF__Settings_k__BackingField()  {
return ::cordl_internals::getStaticField<::Fusion::LogSettings, "<Settings>k__BackingField", ::Fusion::Log*>();
}
inline bool Fusion::Log::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Fusion::Log::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Fusion::LogSettings Fusion::Log::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LogSettings>(nullptr, ___internal_method);
}
inline void Fusion::Log::set_Settings(::Fusion::LogSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"set_Settings", {}, {::i2c::type_of<::Fusion::LogSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Fusion::Log::Initialize(::Fusion::LogLevel  logLevel, ::Fusion::Log_CreateLogStreamDelegate*  streamFactory, ::Fusion::TraceChannels  traceChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::Log_CreateLogStreamDelegate*>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel, streamFactory, traceChannels);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IDisposable*> && ::cordl_internals::reference_type_constraint<T>)
inline void Fusion::Log::DisposeAndNullify(::by_ref<T>  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Log*>(),
                    {"DisposeAndNullify", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Fusion::Log::InitPartial(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Log_Factory>  factory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"InitPartial", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Log_Factory>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, factory);
}
inline void Fusion::Log::InitInternal(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Log_Factory>  factory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"InitInternal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Log_Factory>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, factory);
}
inline void Fusion::Log::Warn(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Fusion::Log::Warn(::Fusion::ILogSource*  logSource, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logSource, message);
}
inline void Fusion::Log::Error(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Fusion::Log::Error(::Fusion::ILogSource*  logSource, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log*>(),
                        {"Error", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logSource, message);
}
// Ctor Parameters []
constexpr ::Fusion::Log::Log()   {
}
//  Writing Method size for method: ::Fusion::Log_CreateLogStreamDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Log_CreateLogStreamDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::Log_CreateLogStreamDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f45088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log_CreateLogStreamDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Log_CreateLogStreamDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LogStream* (::Fusion::Log_CreateLogStreamDelegate::*)(::Fusion::LogLevel, ::Fusion::LogFlags, ::Fusion::TraceChannels)>(&::Fusion::Log_CreateLogStreamDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f45128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Log_CreateLogStreamDelegate*>(),
                    {::i2c::class_of<::Fusion::Log_CreateLogStreamDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Log_CreateLogStreamDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Log_CreateLogStreamDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Fusion::LogStream* Fusion::Log_CreateLogStreamDelegate::Invoke(::Fusion::LogLevel  level, ::Fusion::LogFlags  flags, ::Fusion::TraceChannels  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Log_CreateLogStreamDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LogStream*>(this, ___internal_method, level, flags, channel);
}
inline ::Fusion::Log_CreateLogStreamDelegate* Fusion::Log_CreateLogStreamDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Log_CreateLogStreamDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::Log_CreateLogStreamDelegate::Log_CreateLogStreamDelegate()   {
}
