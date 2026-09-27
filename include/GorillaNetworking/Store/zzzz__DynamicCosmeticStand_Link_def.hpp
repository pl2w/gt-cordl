#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/DynamicCosmeticStand_Link.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DynamicCosmeticStand_Link)
namespace GlobalNamespace {
struct HeadModel_CosmeticStand_BustType;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class DynamicCosmeticStand_Link;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::DynamicCosmeticStand_Link*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::DynamicCosmeticStand_Link*, "GorillaNetworking.Store", "DynamicCosmeticStand_Link");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.DynamicCosmeticStand_Link
class CORDL_TYPE DynamicCosmeticStand_Link : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field stand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stand, put=__cordl_internal_set_stand)) ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  stand;

/// @brief Method ClearCosmeticItems, addr 0x5cad60c, size 0x14, virtual false, abstract: false, final false
inline void ClearCosmeticItems() ;

static inline ::GorillaNetworking::Store::DynamicCosmeticStand_Link* New_ctor() ;

/// @brief Method SaveCosmeticMountPosition, addr 0x5cad5f8, size 0x14, virtual false, abstract: false, final false
inline void SaveCosmeticMountPosition() ;

/// @brief Method SetStandType, addr 0x5cad5d0, size 0x14, virtual false, abstract: false, final false
inline void SetStandType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  type) ;

/// @brief Method SpawnItemOntoStand, addr 0x5cad5e4, size 0x14, virtual false, abstract: false, final false
inline void SpawnItemOntoStand(::StringW  PlayFabID) ;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& __cordl_internal_get_stand() const;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& __cordl_internal_get_stand() ;

constexpr void __cordl_internal_set_stand(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value) ;

/// @brief Method .ctor, addr 0x5cad620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicCosmeticStand_Link() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand_Link", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicCosmeticStand_Link(DynamicCosmeticStand_Link && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicCosmeticStand_Link", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicCosmeticStand_Link(DynamicCosmeticStand_Link const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4434};

/// @brief Field stand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  ___stand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::DynamicCosmeticStand_Link, ___stand) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::DynamicCosmeticStand_Link) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
