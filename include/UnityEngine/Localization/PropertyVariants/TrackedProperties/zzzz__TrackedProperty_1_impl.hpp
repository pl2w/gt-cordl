#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/TrackedProperty_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__IStringProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedPropertyRemoveVariant_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedPropertyValue_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TPrimitive>
constexpr ::StringW& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_PropertyPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
template<typename TPrimitive>
constexpr ::StringW const& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_PropertyPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyPath;
}
template<typename TPrimitive>
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_set_m_PropertyPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyPath = value;
}
template<typename TPrimitive>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_VariantData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantData;
}
template<typename TPrimitive>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_VariantData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantData;
}
template<typename TPrimitive>
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_set_m_VariantData(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariantData = value;
}
template<typename TPrimitive>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_VariantLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantLookup;
}
template<typename TPrimitive>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>* const& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_get_m_VariantLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariantLookup;
}
template<typename TPrimitive>
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::__cordl_internal_set_m_VariantLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariantLookup = value;
}
template<typename TPrimitive>
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::get_PropertyPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"get_PropertyPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::set_PropertyPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"set_PropertyPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TPrimitive>
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"HasVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"RemoveVariant", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier);
}
template<typename TPrimitive>
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<TPrimitive>  foundValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<TPrimitive>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, foundValue);
}
template<typename TPrimitive>
inline bool UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<TPrimitive>  foundValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"GetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::by_ref<TPrimitive>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localeIdentifier, fallback, foundValue);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, TPrimitive  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"SetValue", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<TPrimitive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier, value);
}
template<typename TPrimitive>
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"GetValueAsString", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localeIdentifier);
}
template<typename TPrimitive>
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"GetValueAsString", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localeIdentifier, fallback);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::SetValueFromString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"SetValueFromString", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localeIdentifier, stringValue);
}
template<typename TPrimitive>
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::ConvertToString(TPrimitive  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template<typename TPrimitive>
inline TPrimitive UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::ConvertFromString(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<TPrimitive>(this, ___internal_method, value);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPrimitive>
inline ::StringW UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPrimitive>
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>"
template<typename TPrimitive>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>"
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyValue_1_TPrimitive_() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
template<typename TPrimitive>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty"
template<typename TPrimitive>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty"
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__IStringProperty() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TPrimitive>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TPrimitive>
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant"
template<typename TPrimitive>
constexpr  UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::operator ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant"
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyRemoveVariant() noexcept {
return static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>::TrackedProperty_1()   {
}
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_get_localeIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localeIdentifier;
}
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_get_localeIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localeIdentifier;
}
template<typename TPrimitive>
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_set_localeIdentifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localeIdentifier = value;
}
template<typename TPrimitive>
constexpr TPrimitive& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TPrimitive>
constexpr TPrimitive const& UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TPrimitive>
constexpr void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::__cordl_internal_set_value(TPrimitive  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename TPrimitive>
inline void UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPrimitive>
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>* UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>());
}
// Ctor Parameters []
template<typename TPrimitive>
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>::TrackedProperty_1_LocaleIdentifierValuePair()   {
}
