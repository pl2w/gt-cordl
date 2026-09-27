#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/PreloadAssetTableMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PreloadAssetTableMetadata_PreloadBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PreloadAssetTableMetadata)
namespace GlobalNamespace {
struct PreloadAssetTableMetadata_PreloadBehaviour;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class PreloadAssetTableMetadata;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata*, "UnityEngine.Localization.Metadata", "PreloadAssetTableMetadata");
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)10, MenuItem = "Preload Assets")]
// Dependencies System.Object, UnityEngine.Localization.Metadata.PreloadAssetTableMetadata::PreloadBehaviour
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.PreloadAssetTableMetadata
class CORDL_TYPE PreloadAssetTableMetadata : public ::System::Object {
public:
// Declarations
using PreloadBehaviour = ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour;

 __declspec(property(get=get_Behaviour, put=set_Behaviour)) ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  Behaviour;

/// @brief Field m_PreloadBehaviour, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreloadBehaviour, put=__cordl_internal_set_m_PreloadBehaviour)) ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  m_PreloadBehaviour;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata* New_ctor() ;

constexpr ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour const& __cordl_internal_get_m_PreloadBehaviour() const;

constexpr ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour& __cordl_internal_get_m_PreloadBehaviour() ;

constexpr void __cordl_internal_set_m_PreloadBehaviour(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  value) ;

/// @brief Method .ctor, addr 0xb050a04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Behaviour, addr 0xb0509f4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour get_Behaviour() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// @brief Method set_Behaviour, addr 0xb0509fc, size 0x8, virtual false, abstract: false, final false
inline void set_Behaviour(::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadAssetTableMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadAssetTableMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadAssetTableMetadata(PreloadAssetTableMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadAssetTableMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadAssetTableMetadata(PreloadAssetTableMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25342};

/// [SerializeField]
/// @brief Field m_PreloadBehaviour, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PreloadAssetTableMetadata_PreloadBehaviour  ___m_PreloadBehaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata, ___m_PreloadBehaviour) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::PreloadAssetTableMetadata) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
