#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/DictionarySource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__DictionarySource_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__DictionarySource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb027ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource.TryEvaluateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::TryEvaluateSelector)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0xb03bd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource* UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*>(formatter));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource::DictionarySource()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb03c454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0._TryEvaluateSelector_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>)>(&::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::_TryEvaluateSelector_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb03c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*>(),
                        {"<TryEvaluateSelector>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_set_selector(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*& UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_get_selectorInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorInfo;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo* const& UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_get_selectorInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorInfo;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::__cordl_internal_set_selectorInfo(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectorInfo = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::_TryEvaluateSelector_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*>(),
                        {"<TryEvaluateSelector>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0* UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0::DictionarySource___c__DisplayClass1_0()   {
}
