#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLoggerBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_def.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_LogContext_def.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_def.hpp"
#include "Fusion/zzzz__LogFlags_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLoggerBase::*)(::System::Threading::Thread*, bool)>(&::Fusion::FusionUnityLoggerBase::_ctor)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5f45280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.get_IsInMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionUnityLoggerBase::*)()>(&::Fusion::FusionUnityLoggerBase::get_IsInMainThread)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f45644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_IsInMainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLoggerBase::*)()>(&::Fusion::FusionUnityLoggerBase::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f45664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.CreateLogStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LogStream* (::Fusion::FusionUnityLoggerBase::*)(::Fusion::LogLevel, ::Fusion::LogFlags, ::Fusion::TraceChannels)>(&::Fusion::FusionUnityLoggerBase::CreateLogStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f456b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"CreateLogStream", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::LogFlags>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.CreateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> (::Fusion::FusionUnityLoggerBase::*)(::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>)>(&::Fusion::FusionUnityLoggerBase::CreateMessage)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5f45818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                    {::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.GetThreadSafeStringBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::Fusion::FusionUnityLoggerBase::*)(::by_ref<bool>)>(&::Fusion::FusionUnityLoggerBase::GetThreadSafeStringBuilder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f45f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetThreadSafeStringBuilder", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.AppendPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLoggerBase::*)(::System::Text::StringBuilder*, ::Fusion::LogFlags, ::StringW)>(&::Fusion::FusionUnityLoggerBase::AppendPrefix)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f45b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"AppendPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::LogFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.AppendNameThreadSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLoggerBase::*)(::System::Text::StringBuilder*, ::UnityEngine::Object*)>(&::Fusion::FusionUnityLoggerBase::AppendNameThreadSafe)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f45d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"AppendNameThreadSafe", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.GetColorFromHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FusionUnityLoggerBase::*)(::StringW)>(&::Fusion::FusionUnityLoggerBase::GetColorFromHash)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f46008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetColorFromHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.GetRandomColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Color32, ::UnityEngine::Color32)>(&::Fusion::FusionUnityLoggerBase::GetRandomColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f46084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetRandomColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.Color32ToRGB24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Color32)>(&::Fusion::FusionUnityLoggerBase::Color32ToRGB24)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f461a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Color32ToRGB24", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.Color32ToRGBString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Color32)>(&::Fusion::FusionUnityLoggerBase::Color32ToRGBString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f455c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Color32ToRGBString", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.get_DefaultLightPrefixColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::Fusion::FusionUnityLoggerBase::get_DefaultLightPrefixColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f45584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_DefaultLightPrefixColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase.get_DefaultDarkPrefixColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::Fusion::FusionUnityLoggerBase::get_DefaultDarkPrefixColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f455a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_DefaultDarkPrefixColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase._GetRandomColor_g__NextSplitMix64_22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<uint64_t>)>(&::Fusion::FusionUnityLoggerBase::_GetRandomColor_g__NextSplitMix64_22_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f46148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"<GetRandomColor>g__NextSplitMix64|22_0", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Thread*& Fusion::FusionUnityLoggerBase::__cordl_internal_get__mainThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainThread;
}
constexpr ::System::Threading::Thread* const& Fusion::FusionUnityLoggerBase::__cordl_internal_get__mainThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainThread;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set__mainThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainThread = value;
}
constexpr ::System::Text::StringBuilder*& Fusion::FusionUnityLoggerBase::__cordl_internal_get__mainThreadBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainThreadBuilder;
}
constexpr ::System::Text::StringBuilder* const& Fusion::FusionUnityLoggerBase::__cordl_internal_get__mainThreadBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainThreadBuilder;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set__mainThreadBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainThreadBuilder = value;
}
constexpr ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*& Fusion::FusionUnityLoggerBase::__cordl_internal_get__threadedStringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadedStringBuilder;
}
constexpr ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>* const& Fusion::FusionUnityLoggerBase::__cordl_internal_get__threadedStringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadedStringBuilder;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set__threadedStringBuilder(::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threadedStringBuilder = value;
}
constexpr bool& Fusion::FusionUnityLoggerBase::__cordl_internal_get_AddHashCodePrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddHashCodePrefix;
}
constexpr bool const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_AddHashCodePrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddHashCodePrefix;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_AddHashCodePrefix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddHashCodePrefix = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_GlobalPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalPrefix;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_GlobalPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalPrefix;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_GlobalPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalPrefix = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_GlobalPrefixColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalPrefixColor;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_GlobalPrefixColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalPrefixColor;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_GlobalPrefixColor(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalPrefixColor = value;
}
constexpr ::UnityEngine::Color32& Fusion::FusionUnityLoggerBase::__cordl_internal_get_MaxRandomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRandomColor;
}
constexpr ::UnityEngine::Color32 const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_MaxRandomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRandomColor;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_MaxRandomColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRandomColor = value;
}
constexpr ::UnityEngine::Color32& Fusion::FusionUnityLoggerBase::__cordl_internal_get_MinRandomColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinRandomColor;
}
constexpr ::UnityEngine::Color32 const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_MinRandomColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinRandomColor;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_MinRandomColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinRandomColor = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_NameUnavailableInWorkerThreadLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameUnavailableInWorkerThreadLabel;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_NameUnavailableInWorkerThreadLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameUnavailableInWorkerThreadLabel;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_NameUnavailableInWorkerThreadLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameUnavailableInWorkerThreadLabel = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_NameUnavailableObjectDestroyedLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameUnavailableObjectDestroyedLabel;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_NameUnavailableObjectDestroyedLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NameUnavailableObjectDestroyedLabel;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_NameUnavailableObjectDestroyedLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NameUnavailableObjectDestroyedLabel = value;
}
constexpr bool& Fusion::FusionUnityLoggerBase::__cordl_internal_get_UseColorTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseColorTags;
}
constexpr bool const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_UseColorTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseColorTags;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_UseColorTags(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseColorTags = value;
}
constexpr bool& Fusion::FusionUnityLoggerBase::__cordl_internal_get_UseGlobalPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseGlobalPrefix;
}
constexpr bool const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_UseGlobalPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseGlobalPrefix;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_UseGlobalPrefix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseGlobalPrefix = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_DebugPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPrefix;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_DebugPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugPrefix;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_DebugPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugPrefix = value;
}
constexpr ::StringW& Fusion::FusionUnityLoggerBase::__cordl_internal_get_TracePrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TracePrefix;
}
constexpr ::StringW const& Fusion::FusionUnityLoggerBase::__cordl_internal_get_TracePrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TracePrefix;
}
constexpr void Fusion::FusionUnityLoggerBase::__cordl_internal_set_TracePrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TracePrefix = value;
}
inline void Fusion::FusionUnityLoggerBase::_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainThread, isDarkMode);
}
inline bool Fusion::FusionUnityLoggerBase::get_IsInMainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_IsInMainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionUnityLoggerBase::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::LogStream* Fusion::FusionUnityLoggerBase::CreateLogStream(::Fusion::LogLevel  logLevel, ::Fusion::LogFlags  flags, ::Fusion::TraceChannels  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"CreateLogStream", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::LogFlags>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LogStream*>(this, ___internal_method, logLevel, flags, channel);
}
inline ::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> Fusion::FusionUnityLoggerBase::CreateMessage(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>>>(this, ___internal_method, context);
}
inline ::System::Text::StringBuilder* Fusion::FusionUnityLoggerBase::GetThreadSafeStringBuilder(::by_ref<bool>  isMainThread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetThreadSafeStringBuilder", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, isMainThread);
}
inline void Fusion::FusionUnityLoggerBase::AppendPrefix(::System::Text::StringBuilder*  sb, ::Fusion::LogFlags  flags, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"AppendPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::LogFlags>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, flags, prefix);
}
inline void Fusion::FusionUnityLoggerBase::AppendNameThreadSafe(::System::Text::StringBuilder*  builder, ::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"AppendNameThreadSafe", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, obj);
}
inline int32_t Fusion::FusionUnityLoggerBase::GetColorFromHash(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetColorFromHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t Fusion::FusionUnityLoggerBase::GetRandomColor(int32_t  seed, ::UnityEngine::Color32  min, ::UnityEngine::Color32  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"GetRandomColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, seed, min, max);
}
inline int32_t Fusion::FusionUnityLoggerBase::Color32ToRGB24(::UnityEngine::Color32  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Color32ToRGB24", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline ::StringW Fusion::FusionUnityLoggerBase::Color32ToRGBString(::UnityEngine::Color32  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"Color32ToRGBString", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color Fusion::FusionUnityLoggerBase::get_DefaultLightPrefixColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_DefaultLightPrefixColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color Fusion::FusionUnityLoggerBase::get_DefaultDarkPrefixColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"get_DefaultDarkPrefixColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline uint64_t Fusion::FusionUnityLoggerBase::_GetRandomColor_g__NextSplitMix64_22_0(::by_ref<uint64_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase*>(),
                        {"<GetRandomColor>g__NextSplitMix64|22_0", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline ::Fusion::FusionUnityLoggerBase* Fusion::FusionUnityLoggerBase::New_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionUnityLoggerBase*>(mainThread, isDarkMode));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::FusionUnityLoggerBase::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::FusionUnityLoggerBase::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionUnityLoggerBase::FusionUnityLoggerBase()   {
}
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLoggerBase___c::*)()>(&::Fusion::FusionUnityLoggerBase___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLoggerBase___c.__ctor_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::Fusion::FusionUnityLoggerBase___c::*)()>(&::Fusion::FusionUnityLoggerBase___c::__ctor_b__12_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f4627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase___c*>(),
                        {"<.ctor>b__12_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionUnityLoggerBase___c::setStaticF___9(::Fusion::FusionUnityLoggerBase___c*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionUnityLoggerBase___c*, "<>9", ::Fusion::FusionUnityLoggerBase___c*>(std::forward<::Fusion::FusionUnityLoggerBase___c*>(value));
}
inline ::Fusion::FusionUnityLoggerBase___c* Fusion::FusionUnityLoggerBase___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::FusionUnityLoggerBase___c*, "<>9", ::Fusion::FusionUnityLoggerBase___c*>();
}
inline void Fusion::FusionUnityLoggerBase___c::setStaticF___9__12_0(::System::Func_1<::System::Text::StringBuilder*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Text::StringBuilder*>*, "<>9__12_0", ::Fusion::FusionUnityLoggerBase___c*>(std::forward<::System::Func_1<::System::Text::StringBuilder*>*>(value));
}
inline ::System::Func_1<::System::Text::StringBuilder*>* Fusion::FusionUnityLoggerBase___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Text::StringBuilder*>*, "<>9__12_0", ::Fusion::FusionUnityLoggerBase___c*>();
}
inline void Fusion::FusionUnityLoggerBase___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* Fusion::FusionUnityLoggerBase___c::__ctor_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLoggerBase___c*>(),
                        {"<.ctor>b__12_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline ::Fusion::FusionUnityLoggerBase___c* Fusion::FusionUnityLoggerBase___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionUnityLoggerBase___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionUnityLoggerBase___c::FusionUnityLoggerBase___c()   {
}
