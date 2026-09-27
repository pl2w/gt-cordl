#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/LocalizedAssetProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__LocalizedAssetProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAssetBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty.get_LocalizedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocalizedAssetBase* (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::get_LocalizedObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"get_LocalizedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty.set_LocalizedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)(::UnityEngine::Localization::LocalizedAssetBase*)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::set_LocalizedObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"set_LocalizedObject", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedAssetBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty.get_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::get_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty.set_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::set_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty.HasVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::HasVariant)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb052d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocalizedAssetBase*& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_get_m_Localized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Localized;
}
constexpr ::UnityEngine::Localization::LocalizedAssetBase* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_get_m_Localized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Localized;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_set_m_Localized(::UnityEngine::Localization::LocalizedAssetBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Localized = value;
}
constexpr ::StringW& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_get_m_PropertyPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr ::StringW const& UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_get_m_PropertyPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::__cordl_internal_set_m_PropertyPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyPath = value;
}
inline ::UnityEngine::Localization::LocalizedAssetBase* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::get_LocalizedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"get_LocalizedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedAssetBase*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::set_LocalizedObject(::UnityEngine::Localization::LocalizedAssetBase*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"set_LocalizedObject", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedAssetBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::get_PropertyPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::set_PropertyPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty::LocalizedAssetProperty()   {
}
