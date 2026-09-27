#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/UnityObjectProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityObjectProperty)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename T>
class ITrackedPropertyValue_1;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class UnityObjectProperty_LocaleIdentifierValuePair;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class UnityObjectProperty;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class UnityObjectProperty_LocaleIdentifierValuePair;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*);
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "UnityObjectProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "UnityObjectProperty/LocaleIdentifierValuePair");
// Dependencies System.Object
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.UnityObjectProperty
class CORDL_TYPE UnityObjectProperty : public ::System::Object {
public:
// Declarations
using LocaleIdentifierValuePair = ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair;

 __declspec(property(get=get_PropertyPath, put=set_PropertyPath)) ::StringW  PropertyPath;

 __declspec(property(get=get_PropertyType, put=set_PropertyType)) ::System::Type*  PropertyType;

/// @brief Field <PropertyType>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyType_k__BackingField, put=__cordl_internal_set__PropertyType_k__BackingField)) ::System::Type*  _PropertyType_k__BackingField;

/// @brief Field m_PropertyPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyPath, put=__cordl_internal_set_m_PropertyPath)) ::StringW  m_PropertyPath;

/// @brief Field m_TypeString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TypeString, put=__cordl_internal_set_m_TypeString)) ::StringW  m_TypeString;

/// @brief Field m_VariantData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariantData, put=__cordl_internal_set_m_VariantData)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  m_VariantData;

/// @brief Field m_VariantLookup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariantLookup, put=__cordl_internal_set_m_VariantLookup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  m_VariantLookup;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Method GetValue, addr 0xb053514, size 0x100, virtual true, abstract: false, final true
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<::UnityEngine::Object*>  foundValue) ;

/// @brief Method GetValue, addr 0xb053448, size 0xcc, virtual true, abstract: false, final true
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<::UnityEngine::Object*>  foundValue) ;

/// @brief Method HasVariant, addr 0xb053378, size 0x68, virtual true, abstract: false, final true
inline bool HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb053968, size 0x1f8, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb053740, size 0x228, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method RemoveVariant, addr 0xb0533e0, size 0x68, virtual false, abstract: false, final false
inline void RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method SetValue, addr 0xb053614, size 0x124, virtual true, abstract: false, final true
inline void SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Object*  newValue) ;

constexpr ::System::Type* const& __cordl_internal_get__PropertyType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__PropertyType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_PropertyPath() const;

constexpr ::StringW& __cordl_internal_get_m_PropertyPath() ;

constexpr ::StringW const& __cordl_internal_get_m_TypeString() const;

constexpr ::StringW& __cordl_internal_get_m_TypeString() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>* const& __cordl_internal_get_m_VariantData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*& __cordl_internal_get_m_VariantData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>* const& __cordl_internal_get_m_VariantLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*& __cordl_internal_get_m_VariantLookup() ;

constexpr void __cordl_internal_set__PropertyType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_PropertyPath(::StringW  value) ;

constexpr void __cordl_internal_set_m_TypeString(::StringW  value) ;

constexpr void __cordl_internal_set_m_VariantData(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  value) ;

constexpr void __cordl_internal_set_m_VariantLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  value) ;

/// @brief Method .ctor, addr 0xb053b60, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PropertyPath, addr 0xb053358, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_PropertyPath() ;

/// [CompilerGenerated]
/// @brief Method get_PropertyType, addr 0xb053368, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_PropertyType() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1<::UnityW<::UnityEngine::Object>>* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedPropertyValue_1___UnityW___UnityEngine__Object__() noexcept;

/// @brief Method set_PropertyPath, addr 0xb053360, size 0x8, virtual true, abstract: false, final true
inline void set_PropertyPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PropertyType, addr 0xb053370, size 0x8, virtual false, abstract: false, final false
inline void set_PropertyType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectProperty(UnityObjectProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectProperty(UnityObjectProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25375};

/// [SerializeField]
/// @brief Field m_PropertyPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_PropertyPath;

/// [SerializeField]
/// @brief Field m_TypeString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_TypeString;

/// [SerializeField]
/// @brief Field m_VariantData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  ___m_VariantData;

/// @brief Field m_VariantLookup, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Localization::LocaleIdentifier,::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair*>*  ___m_VariantLookup;

/// [CompilerGenerated]
/// @brief Field <PropertyType>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Type*  ____PropertyType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty, ___m_PropertyPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty, ___m_TypeString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty, ___m_VariantData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty, ___m_VariantLookup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty, ____PropertyType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
// Dependencies System.Object, UnityEngine.LazyLoadReference`1<T>, UnityEngine.Localization.LocaleIdentifier
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.UnityObjectProperty/LocaleIdentifierValuePair
class CORDL_TYPE UnityObjectProperty_LocaleIdentifierValuePair : public ::System::Object {
public:
// Declarations
/// @brief Field localeIdentifier, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_localeIdentifier, put=__cordl_internal_set_localeIdentifier)) ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier;

/// @brief Field value, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  value;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair* New_ctor() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_localeIdentifier() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_localeIdentifier() ;

constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_value() const;

constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_localeIdentifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

constexpr void __cordl_internal_set_value(::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  value) ;

/// @brief Method .ctor, addr 0xb053738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectProperty_LocaleIdentifierValuePair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectProperty_LocaleIdentifierValuePair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectProperty_LocaleIdentifierValuePair(UnityObjectProperty_LocaleIdentifierValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectProperty_LocaleIdentifierValuePair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectProperty_LocaleIdentifierValuePair(UnityObjectProperty_LocaleIdentifierValuePair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25374};

/// @brief Field localeIdentifier, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___localeIdentifier;

/// @brief Field value, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair, ___localeIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair, ___value) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UnityObjectProperty_LocaleIdentifierValuePair) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
