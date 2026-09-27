#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ListFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__ListFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatterLiteralExtractor_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__SmartSettings_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb027e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb03cff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.TryEvaluateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::TryEvaluateSelector)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0xb03d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.get_CollectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::get_CollectionIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb03d6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"get_CollectionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.set_CollectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::set_CollectionIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb03d720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"set_CollectionIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0xe08;
  constexpr static std::size_t addrs = 0xb03d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter.WriteAllLiterals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::WriteAllLiterals)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xb03e68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::__cordl_internal_get_m_SmartSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmartSettings;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::__cordl_internal_get_m_SmartSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmartSettings;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::__cordl_internal_set_m_SmartSettings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmartSettings = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::setStaticF__CollectionIndex_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<CollectionIndex>k__BackingField", ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::getStaticF__CollectionIndex_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<CollectionIndex>k__BackingField", ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>();
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorInfo);
}
inline int32_t UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::get_CollectionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"get_CollectionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::set_CollectionIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"set_CollectionIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(),
                        {"WriteAllLiterals", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter* UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter*>(formatter));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::ListFormatter::ListFormatter()   {
}
