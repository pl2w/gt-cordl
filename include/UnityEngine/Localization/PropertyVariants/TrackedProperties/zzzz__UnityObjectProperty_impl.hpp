#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/UnityObjectProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__UnityObjectProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedPropertyValue_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__UnityObjectProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.get_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::get_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.set_PropertyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::set_PropertyPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.get_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::get_PropertyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"get_PropertyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.set_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::System::Type*)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::set_PropertyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"set_PropertyType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.HasVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::HasVariant)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb053378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.RemoveVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::RemoveVariant)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb0533e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"RemoveVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::UnityEngine::Localization::LocaleIdentifier, ::by_ref<::UnityEngine::Object*>)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::GetValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb053448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::LocaleIdentifier, ::by_ref<::UnityEngine::Object*>)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::GetValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb053514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Object*)>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::SetValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb053614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"SetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb053740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb053968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb053b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_PropertyPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr ::StringW const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_PropertyPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_set_m_PropertyPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyPath = value;
}
constexpr ::StringW& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_TypeString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeString;
}
constexpr ::StringW const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_TypeString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TypeString;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_set_m_TypeString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TypeString = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_VariantData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_VariantData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantData;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_set_m_VariantData(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariantData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_VariantLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get_m_VariantLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantLookup;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_set_m_VariantLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariantLookup = value;
}
constexpr ::System::Type*& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get__PropertyType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyType_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_get__PropertyType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyType_k__BackingField;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::__cordl_internal_set__PropertyType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyType_k__BackingField = value;
}
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::get_PropertyPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::set_PropertyPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::get_PropertyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"get_PropertyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::set_PropertyType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"set_PropertyType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"RemoveVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<::UnityEngine::Object*>  foundValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, foundValue);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<::UnityEngine::Object*>  foundValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, fallback, foundValue);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Object*  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"SetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier, newValue);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyValue_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty::UnityObjectProperty()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_get_localeIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localeIdentifier;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_get_localeIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localeIdentifier;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_set_localeIdentifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localeIdentifier = value;
}
constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>> const& UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::__cordl_internal_set_value(::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair* UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair::UnityObjectProperty_LocaleIdentifierValuePair()   {
}
