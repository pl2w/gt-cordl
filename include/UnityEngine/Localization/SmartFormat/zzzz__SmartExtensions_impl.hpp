#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartExtensions_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Formatting/zzzz__FormatCache_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.AppendSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::AppendSmart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb02865c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"AppendSmart", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.AppendLineSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::AppendLineSmart)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb028888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"AppendLineSmart", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.WriteSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::WriteSmart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb0288ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"WriteSmart", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.WriteLineSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::WriteLineSmart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb028990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"WriteLineSmart", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.FormatSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::FormatSmart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb0289bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"FormatSmart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::SmartExtensions.FormatSmart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>, ::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::SmartExtensions::FormatSmart)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb028a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"FormatSmart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::SmartExtensions::AppendSmart(::System::Text::StringBuilder*  sb, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"AppendSmart", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, format, args);
}
inline void UnityEngine::Localization::SmartFormat::SmartExtensions::AppendLineSmart(::System::Text::StringBuilder*  sb, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"AppendLineSmart", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, format, args);
}
inline void UnityEngine::Localization::SmartFormat::SmartExtensions::WriteSmart(::System::IO::TextWriter*  writer, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"WriteSmart", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, format, args);
}
inline void UnityEngine::Localization::SmartFormat::SmartExtensions::WriteLineSmart(::System::IO::TextWriter*  writer, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"WriteLineSmart", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartExtensions::FormatSmart(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"FormatSmart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, args);
}
inline ::StringW UnityEngine::Localization::SmartFormat::SmartExtensions::FormatSmart(::StringW  format, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::SmartExtensions*>(),
                        {"FormatSmart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, cache, args);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::SmartExtensions::SmartExtensions()   {
}
