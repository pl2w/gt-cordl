#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_Use_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UxmlAttributeDescription)
namespace GlobalNamespace {
struct TemplateAsset_AttributeOverride;
}
namespace GlobalNamespace {
struct UxmlAttributeDescription_Use;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeDescription;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlAttributeDescription*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlAttributeDescription*, "UnityEngine.UIElements", "UxmlAttributeDescription");
// Dependencies System.Object, UnityEngine.UIElements.UxmlAttributeDescription::Use
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlAttributeDescription
class CORDL_TYPE UxmlAttributeDescription : public ::System::Object {
public:
// Declarations
using Use = ::GlobalNamespace::UxmlAttributeDescription_Use;

/// @brief Field <name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <restriction>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__restriction_k__BackingField, put=__cordl_internal_set__restriction_k__BackingField)) ::UnityEngine::UIElements::UxmlTypeRestriction*  _restriction_k__BackingField;

/// @brief Field <typeNamespace>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeNamespace_k__BackingField, put=__cordl_internal_set__typeNamespace_k__BackingField)) ::StringW  _typeNamespace_k__BackingField;

/// @brief Field <type>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_k__BackingField, put=__cordl_internal_set__type_k__BackingField)) ::StringW  _type_k__BackingField;

/// @brief Field <use>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__use_k__BackingField, put=__cordl_internal_set__use_k__BackingField)) ::GlobalNamespace::UxmlAttributeDescription_Use  _use_k__BackingField;

/// @brief Field m_ObsoleteNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObsoleteNames, put=__cordl_internal_set_m_ObsoleteNames)) ::ArrayW<::StringW>  m_ObsoleteNames;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(put=set_obsoleteNames)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  obsoleteNames;

 __declspec(property(put=set_restriction)) ::UnityEngine::UIElements::UxmlTypeRestriction*  restriction;

 __declspec(property(put=set_type)) ::StringW  type;

 __declspec(property(put=set_typeNamespace)) ::StringW  typeNamespace;

 __declspec(property(put=set_use)) ::GlobalNamespace::UxmlAttributeDescription_Use  use;

/// @brief Method GetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::System::Func_3<::StringW,T,T>*  converterFunc, T  defaultValue) ;

static inline ::UnityEngine::UIElements::UxmlAttributeDescription* New_ctor() ;

/// @brief Method TryFindValueInAttributeOverrides, addr 0xb7b4654, size 0x2f4, virtual false, abstract: false, final false
inline bool TryFindValueInAttributeOverrides(::StringW  elementName, ::UnityEngine::UIElements::CreationContext  cc, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides, ::by_ref<::StringW>  value) ;

/// @brief Method TryGetAttributeOverrideValueFromBagAsString, addr 0xb7b4cec, size 0x2a8, virtual false, abstract: false, final false
inline bool TryGetAttributeOverrideValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::by_ref<::StringW>  value, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>  sourceAsset) ;

/// @brief Method TryGetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::System::Func_3<::StringW,T,T>*  converterFunc, T  defaultValue, ::by_ref<T>  value) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TryGetValueFromBagAsString, addr 0xb7b4948, size 0x3c, virtual false, abstract: false, final false
inline bool TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::by_ref<::StringW>  value) ;

/// @brief Method TryGetValueFromBagAsString, addr 0xb7b4984, size 0x368, virtual false, abstract: false, final false
inline bool TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc, ::by_ref<::StringW>  value, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset*>  sourceAsset) ;

/// @brief Method ValidateName, addr 0xb7b4f94, size 0x94, virtual false, abstract: false, final false
inline bool ValidateName() ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr ::UnityEngine::UIElements::UxmlTypeRestriction* const& __cordl_internal_get__restriction_k__BackingField() const;

constexpr ::UnityEngine::UIElements::UxmlTypeRestriction*& __cordl_internal_get__restriction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__typeNamespace_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__typeNamespace_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__type_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__type_k__BackingField() ;

constexpr ::GlobalNamespace::UxmlAttributeDescription_Use const& __cordl_internal_get__use_k__BackingField() const;

constexpr ::GlobalNamespace::UxmlAttributeDescription_Use& __cordl_internal_get__use_k__BackingField() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ObsoleteNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ObsoleteNames() ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__restriction_k__BackingField(::UnityEngine::UIElements::UxmlTypeRestriction*  value) ;

constexpr void __cordl_internal_set__typeNamespace_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__type_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__use_k__BackingField(::GlobalNamespace::UxmlAttributeDescription_Use  value) ;

constexpr void __cordl_internal_set_m_ObsoleteNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb7b4570, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_name, addr 0xb7b459c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// [CompilerGenerated]
/// @brief Method set_name, addr 0xb7b45a4, size 0x8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_obsoleteNames, addr 0xb7b45ac, size 0x88, virtual false, abstract: false, final false
inline void set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_restriction, addr 0xb7b464c, size 0x8, virtual false, abstract: false, final false
inline void set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction*  value) ;

/// [CompilerGenerated]
/// @brief Method set_type, addr 0xb7b4634, size 0x8, virtual false, abstract: false, final false
inline void set_type(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_typeNamespace, addr 0xb7b463c, size 0x8, virtual false, abstract: false, final false
inline void set_typeNamespace(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_use, addr 0xb7b4644, size 0x8, virtual false, abstract: false, final false
inline void set_use(::GlobalNamespace::UxmlAttributeDescription_Use  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlAttributeDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlAttributeDescription(UxmlAttributeDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlAttributeDescription(UxmlAttributeDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8367};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

/// @brief Field m_ObsoleteNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ObsoleteNames;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <type>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____type_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <typeNamespace>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____typeNamespace_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <use>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::UxmlAttributeDescription_Use  ____use_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <restriction>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlTypeRestriction*  ____restriction_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ___m_ObsoleteNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____typeNamespace_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____use_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____restriction_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlAttributeDescription) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
