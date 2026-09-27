#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/TrackedProperty_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackedProperty_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class IStringProperty;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedPropertyRemoveVariant;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename T>
class ITrackedPropertyValue_1;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename TPrimitive>
class TrackedProperty_1_LocaleIdentifierValuePair;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename TPrimitive>
class TrackedProperty_1;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename TPrimitive>
class TrackedProperty_1_LocaleIdentifierValuePair;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "TrackedProperty`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "TrackedProperty`1/LocaleIdentifierValuePair");
// Dependencies System.Object
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// cpp template
template<typename TPrimitive>
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1<TPrimitive>
class CORDL_TYPE TrackedProperty_1 : public ::System::Object {
public:
// Declarations
using LocaleIdentifierValuePair = ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>;

 __declspec(property(get=get_PropertyPath, put=set_PropertyPath)) ::StringW  PropertyPath;

/// @brief Field m_PropertyPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyPath, put=__cordl_internal_set_m_PropertyPath)) ::StringW  m_PropertyPath;

/// @brief Field m_VariantData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariantData, put=__cordl_internal_set_m_VariantData)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  m_VariantData;

/// @brief Field m_VariantLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariantLookup, put=__cordl_internal_set_m_VariantLookup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  m_VariantLookup;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>*() noexcept;

/// @brief Method ConvertFromString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TPrimitive ConvertFromString(::StringW  value) ;

/// @brief Method ConvertToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ConvertToString(TPrimitive  value) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<TPrimitive>  foundValue) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<TPrimitive>  foundValue) ;

/// @brief Method GetValueAsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method GetValueAsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback) ;

/// @brief Method HasVariant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<TPrimitive>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method RemoveVariant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, TPrimitive  value) ;

/// @brief Method SetValueFromString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetValueFromString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  stringValue) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_m_PropertyPath() const;

constexpr ::StringW& __cordl_internal_get_m_PropertyPath() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>* const& __cordl_internal_get_m_VariantData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*& __cordl_internal_get_m_VariantData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>* const& __cordl_internal_get_m_VariantLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*& __cordl_internal_get_m_VariantLookup() ;

constexpr void __cordl_internal_set_m_PropertyPath(::StringW  value) ;

constexpr void __cordl_internal_set_m_VariantData(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  value) ;

constexpr void __cordl_internal_set_m_VariantLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PropertyPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_PropertyPath() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__IStringProperty() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyRemoveVariant() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<TPrimitive>* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyValue_1_TPrimitive_() noexcept;

/// @brief Method set_PropertyPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_PropertyPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedProperty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedProperty_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedProperty_1(TrackedProperty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedProperty_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedProperty_1(TrackedProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25358};

/// [SerializeField]
/// @brief Field m_PropertyPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_PropertyPath;

/// [SerializeField]
/// @brief Field m_VariantData, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  ___m_VariantData;

/// @brief Field m_VariantLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>*>*  ___m_VariantLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
// Dependencies System.Object, UnityEngine.Localization.LocaleIdentifier
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// cpp template
template<typename TPrimitive>
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1/LocaleIdentifierValuePair<TPrimitive>
class CORDL_TYPE TrackedProperty_1_LocaleIdentifierValuePair : public ::System::Object {
public:
// Declarations
/// @brief Field localeIdentifier, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_localeIdentifier, put=__cordl_internal_set_localeIdentifier)) ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier;

/// @brief Field value, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) TPrimitive  value;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1_LocaleIdentifierValuePair<TPrimitive>* New_ctor() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_localeIdentifier() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_localeIdentifier() ;

constexpr TPrimitive const& __cordl_internal_get_value() const;

constexpr TPrimitive& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_localeIdentifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

constexpr void __cordl_internal_set_value(TPrimitive  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedProperty_1_LocaleIdentifierValuePair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedProperty_1_LocaleIdentifierValuePair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedProperty_1_LocaleIdentifierValuePair(TrackedProperty_1_LocaleIdentifierValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedProperty_1_LocaleIdentifierValuePair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedProperty_1_LocaleIdentifierValuePair(TrackedProperty_1_LocaleIdentifierValuePair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25357};

/// @brief Field localeIdentifier, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___localeIdentifier;

/// @brief Field value, offset: 0x20, size: 0x8, def value: None
 TPrimitive  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
