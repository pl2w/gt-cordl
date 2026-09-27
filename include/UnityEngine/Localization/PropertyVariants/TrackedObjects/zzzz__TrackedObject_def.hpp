#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackedObject)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedObject_TrackedPropertiesCollection;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedObject;
}
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedObject_TrackedPropertiesCollection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*);
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedObject");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedObject/TrackedPropertiesCollection");
// Dependencies System.Object, UnityEngine.Localization.PropertyVariants.TrackedProperties.ITrackedProperty
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedObject
class CORDL_TYPE TrackedObject : public ::System::Object {
public:
// Declarations
using TrackedPropertiesCollection = ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection;

 __declspec(property(get=get_Target, put=set_Target)) ::UnityW<::UnityEngine::Object>  Target;

 __declspec(property(get=get_TrackedProperties)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  TrackedProperties;

/// @brief Field m_PropertiesLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertiesLookup, put=__cordl_internal_set_m_PropertiesLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  m_PropertiesLookup;

/// @brief Field m_Target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Object>  m_Target;

/// @brief Field m_TrackedProperties, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedProperties, put=__cordl_internal_set_m_TrackedProperties)) ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*  m_TrackedProperties;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddTrackedProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*> && ::cordl_internals::default_constructor_constraint<T>)
inline T AddTrackedProperty(::StringW  propertyPath) ;

/// @brief Method AddTrackedProperty, addr 0xb053dac, size 0x344, virtual true, abstract: false, final false
inline void AddTrackedProperty(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*  trackedProperty) ;

/// @brief Method ApplyLocale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale) ;

/// @brief Method CanTrackProperty, addr 0xb0577f0, size 0x8, virtual true, abstract: false, final false
inline bool CanTrackProperty(::StringW  propertyPath) ;

/// @brief Method CreateCustomTrackedProperty, addr 0xb0579c0, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* CreateCustomTrackedProperty(::StringW  propertyPath) ;

/// @brief Method GetTrackedProperty, addr 0xb057948, size 0x78, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* GetTrackedProperty(::StringW  propertyPath) ;

/// @brief Method GetTrackedProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetTrackedProperty(::StringW  propertyPath, bool  create) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb0579c8, size 0x204, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb057bcc, size 0x20c, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method PostApplyTrackedProperties, addr 0xb057774, size 0x4, virtual true, abstract: false, final false
inline void PostApplyTrackedProperties() ;

/// @brief Method RemoveTrackedProperty, addr 0xb0577f8, size 0x150, virtual true, abstract: false, final false
inline bool RemoveTrackedProperty(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*  trackedProperty) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* const& __cordl_internal_get_m_PropertiesLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*& __cordl_internal_get_m_PropertiesLookup() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Target() ;

constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection* const& __cordl_internal_get_m_TrackedProperties() const;

constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*& __cordl_internal_get_m_TrackedProperties() ;

constexpr void __cordl_internal_set_m_PropertiesLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_TrackedProperties(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*  value) ;

/// @brief Method .ctor, addr 0xb056530, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Target, addr 0xb0577e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_Target() ;

/// @brief Method get_TrackedProperties, addr 0xb0529c4, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* get_TrackedProperties() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_Target, addr 0xb0577e8, size 0x8, virtual false, abstract: false, final false
inline void set_Target(::UnityEngine::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedObject(TrackedObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedObject(TrackedObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25387};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_Target;

/// [SerializeField]
/// @brief Field m_TrackedProperties, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*  ___m_TrackedProperties;

/// @brief Field m_PropertiesLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  ___m_PropertiesLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject, ___m_TrackedProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject, ___m_PropertiesLookup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
// Dependencies System.Object
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedObject/TrackedPropertiesCollection
class CORDL_TYPE TrackedObject_TrackedPropertiesCollection : public ::System::Object {
public:
// Declarations
/// @brief Field items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  items;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*& __cordl_internal_get_items() ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  value) ;

/// @brief Method .ctor, addr 0xb057dd8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedObject_TrackedPropertiesCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedObject_TrackedPropertiesCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedObject_TrackedPropertiesCollection(TrackedObject_TrackedPropertiesCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedObject_TrackedPropertiesCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedObject_TrackedPropertiesCollection(TrackedObject_TrackedPropertiesCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25386};

/// [SerializeReference]
/// @brief Field items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  ___items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection, ___items) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
