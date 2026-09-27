#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ReflectionSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__ReflectionSource_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__ReflectionSource_def.hpp"
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource.get_TypeCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>* (::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::get_TypeCache)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb0416b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {"get_TypeCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::*)(::UnityEngine::Localization::SmartFormat::SmartFormatter*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb028144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource.TryEvaluateSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::TryEvaluateSelector)> {
  constexpr static std::size_t size = 0xb08;
  constexpr static std::size_t addrs = 0xb04173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::__cordl_internal_get_m_TypeCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>* const& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::__cordl_internal_get_m_TypeCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeCache;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::__cordl_internal_set_m_TypeCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TypeCache = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::setStaticF_k_Empty(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "k_Empty", ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::getStaticF_k_Empty()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "k_Empty", ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>();
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>* UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::get_TypeCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {"get_TypeCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::SmartFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(),
                        {"TryEvaluateSelector", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectorInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource* UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*>(formatter));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr  UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::operator ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource::ReflectionSource()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb042244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0._TryEvaluateSelector_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::*)(::System::Reflection::MemberInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::_TryEvaluateSelector_b__0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb0422c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*>(),
                        {"<TryEvaluateSelector>b__0", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_set_selector(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_get_selectorInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorInfo;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo* const& UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_get_selectorInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectorInfo;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::__cordl_internal_set_selectorInfo(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectorInfo = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::_TryEvaluateSelector_b__0(::System::Reflection::MemberInfo*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*>(),
                        {"<TryEvaluateSelector>b__0", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0* UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0::ReflectionSource___c__DisplayClass5_0()   {
}
