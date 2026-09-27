#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/LocalizedAssetProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedAssetProperty)
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::Localization {
class LocalizedAssetBase;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class LocalizedAssetProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "LocalizedAssetProperty");
// Dependencies System.Object
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.LocalizedAssetProperty
class CORDL_TYPE LocalizedAssetProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LocalizedObject, put=set_LocalizedObject)) ::UnityEngine::Localization::LocalizedAssetBase*  LocalizedObject;

 __declspec(property(get=get_PropertyPath, put=set_PropertyPath)) ::StringW  PropertyPath;

/// @brief Field m_Localized, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Localized, put=__cordl_internal_set_m_Localized)) ::UnityEngine::Localization::LocalizedAssetBase*  m_Localized;

/// @brief Field m_PropertyPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyPath, put=__cordl_internal_set_m_PropertyPath)) ::StringW  m_PropertyPath;

/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept;

/// @brief Method HasVariant, addr 0xb052d24, size 0x24, virtual true, abstract: false, final true
inline bool HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty* New_ctor() ;

constexpr ::UnityEngine::Localization::LocalizedAssetBase* const& __cordl_internal_get_m_Localized() const;

constexpr ::UnityEngine::Localization::LocalizedAssetBase*& __cordl_internal_get_m_Localized() ;

constexpr ::StringW const& __cordl_internal_get_m_PropertyPath() const;

constexpr ::StringW& __cordl_internal_get_m_PropertyPath() ;

constexpr void __cordl_internal_set_m_Localized(::UnityEngine::Localization::LocalizedAssetBase*  value) ;

constexpr void __cordl_internal_set_m_PropertyPath(::StringW  value) ;

/// @brief Method .ctor, addr 0xb052d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocalizedObject, addr 0xb052d04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedAssetBase* get_LocalizedObject() ;

/// @brief Method get_PropertyPath, addr 0xb052d14, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_PropertyPath() ;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept;

/// @brief Method set_LocalizedObject, addr 0xb052d0c, size 0x8, virtual false, abstract: false, final false
inline void set_LocalizedObject(::UnityEngine::Localization::LocalizedAssetBase*  value) ;

/// @brief Method set_PropertyPath, addr 0xb052d1c, size 0x8, virtual true, abstract: false, final true
inline void set_PropertyPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetProperty(LocalizedAssetProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetProperty(LocalizedAssetProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25353};

/// [SerializeReference]
/// @brief Field m_Localized, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedAssetBase*  ___m_Localized;

/// [SerializeField]
/// @brief Field m_PropertyPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_PropertyPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty, ___m_Localized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty, ___m_PropertyPath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::LocalizedAssetProperty) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
