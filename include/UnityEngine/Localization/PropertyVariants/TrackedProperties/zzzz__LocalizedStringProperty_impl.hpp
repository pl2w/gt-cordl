#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/LocalizedStringProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__LocalizedStringProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty.get_LocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocalizedString* (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::get_LocalizedString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"get_LocalizedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty.set_LocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)(::UnityEngine::Localization::LocalizedString*)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::set_LocalizedString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"set_LocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty.get_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::get_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty.set_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::set_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty.HasVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::HasVariant)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb052d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb052d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocalizedString*& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_get_m_Localized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Localized;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_get_m_Localized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Localized;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_set_m_Localized(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Localized = value;
}
constexpr ::StringW& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_get_m_PropertyPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr ::StringW const& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_get_m_PropertyPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::__cordl_internal_set_m_PropertyPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyPath = value;
}
inline ::UnityEngine::Localization::LocalizedString* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::get_LocalizedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"get_LocalizedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedString*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::set_LocalizedString(::UnityEngine::Localization::LocalizedString*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"set_LocalizedString", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::get_PropertyPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::set_PropertyPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedStringProperty::LocalizedStringProperty()   {
}
