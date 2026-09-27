#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/MaterialChangerCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialChangerCosmetic)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class MaterialChangerCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::MaterialChangerCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::MaterialChangerCosmetic*, "GorillaTag.Cosmetics", "MaterialChangerCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.MaterialChangerCosmetic
class CORDL_TYPE MaterialChangerCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field materialIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Field targetRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  targetRenderer;

/// @brief Method ChangeAllMaterials, addr 0x5d999f4, size 0x17c, virtual false, abstract: false, final false
inline void ChangeAllMaterials(::UnityEngine::Material*  newMat) ;

/// @brief Method ChangeMaterial, addr 0x5d99848, size 0x1ac, virtual false, abstract: false, final false
inline void ChangeMaterial(::UnityEngine::Material*  newMaterial) ;

static inline ::GorillaTag::Cosmetics::MaterialChangerCosmetic* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5d99b70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialChangerCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialChangerCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialChangerCosmetic(MaterialChangerCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialChangerCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialChangerCosmetic(MaterialChangerCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4949};

/// [SerializeField]
/// @brief Field targetRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___targetRenderer;

/// [SerializeField]
/// @brief Field materialIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___materialIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::MaterialChangerCosmetic, ___targetRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::MaterialChangerCosmetic, ___materialIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::MaterialChangerCosmetic) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
