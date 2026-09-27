#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/AssetTypeMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableCollectionMetadata_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetTypeMetadata)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class AssetTypeMetadata;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::AssetTypeMetadata*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::AssetTypeMetadata*, "UnityEngine.Localization.Metadata", "AssetTypeMetadata");
// [HideInInspector]
// Dependencies UnityEngine.Localization.Metadata.SharedTableCollectionMetadata
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.AssetTypeMetadata
class CORDL_TYPE AssetTypeMetadata : public ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata {
public:
// Declarations
 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

/// @brief Field <Type>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

/// @brief Field m_TypeString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TypeString, put=__cordl_internal_set_m_TypeString)) ::StringW  m_TypeString;

static inline ::UnityEngine::Localization::Metadata::AssetTypeMetadata* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb04f924, size 0xbc, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb04f658, size 0x40, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_TypeString() const;

constexpr ::StringW& __cordl_internal_get_m_TypeString() ;

constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_TypeString(::StringW  value) ;

/// @brief Method .ctor, addr 0xb04fbf0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xb04f648, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xb04f650, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetTypeMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetTypeMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetTypeMetadata(AssetTypeMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetTypeMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetTypeMetadata(AssetTypeMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25329};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_TypeString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_TypeString;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  ____Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::AssetTypeMetadata, ___m_TypeString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::AssetTypeMetadata, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::AssetTypeMetadata) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
