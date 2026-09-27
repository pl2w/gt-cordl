#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/AllCosmeticsArraySO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__GTDirectAssetRef_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AllCosmeticsArraySO)
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*, "GorillaTag.CosmeticSystem", "AllCosmeticsArraySO");
// Dependencies GorillaTag.GTDirectAssetRef`1<T>, UnityEngine.ScriptableObject
namespace GorillaTag::CosmeticSystem {
// Is value type: false
// CS Name: GorillaTag.CosmeticSystem.AllCosmeticsArraySO
class CORDL_TYPE AllCosmeticsArraySO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field sturdyAssetRefs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sturdyAssetRefs, put=__cordl_internal_set_sturdyAssetRefs)) ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>  sturdyAssetRefs;

static inline ::GorillaTag::CosmeticSystem::AllCosmeticsArraySO* New_ctor() ;

/// @brief Method SearchForCosmeticSO, addr 0x5d46ab8, size 0x128, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> SearchForCosmeticSO(::StringW  playfabId) ;

constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>> const& __cordl_internal_get_sturdyAssetRefs() const;

constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>& __cordl_internal_get_sturdyAssetRefs() ;

constexpr void __cordl_internal_set_sturdyAssetRefs(::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>  value) ;

/// @brief Method .ctor, addr 0x5d46be0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllCosmeticsArraySO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllCosmeticsArraySO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AllCosmeticsArraySO(AllCosmeticsArraySO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllCosmeticsArraySO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllCosmeticsArraySO(AllCosmeticsArraySO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4741};

/// [SerializeField]
/// @brief Field sturdyAssetRefs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>  ___sturdyAssetRefs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO, ___sturdyAssetRefs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
