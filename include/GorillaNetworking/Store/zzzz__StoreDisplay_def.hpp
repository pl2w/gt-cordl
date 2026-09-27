#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StoreDisplay)
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreDisplay;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreDisplay*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreDisplay*, "GorillaNetworking.Store", "StoreDisplay");
// Dependencies GorillaNetworking.Store.DynamicCosmeticStand, UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreDisplay
class CORDL_TYPE StoreDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Stands, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stands, put=__cordl_internal_set_Stands)) ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>  Stands;

/// @brief Field displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Method GetAllDynamicCosmeticStands, addr 0x5cb21e0, size 0x58, virtual false, abstract: false, final false
inline void GetAllDynamicCosmeticStands() ;

static inline ::GorillaNetworking::Store::StoreDisplay* New_ctor() ;

/// @brief Method SetDisplayNameForAllStands, addr 0x5cb2238, size 0x94, virtual false, abstract: false, final false
inline void SetDisplayNameForAllStands() ;

constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>> const& __cordl_internal_get_Stands() const;

constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>& __cordl_internal_get_Stands() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set_Stands(::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5cb22cc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreDisplay(StoreDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreDisplay(StoreDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4443};

/// @brief Field displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field Stands, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>>  ___Stands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreDisplay, ___displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreDisplay, ___Stands) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreDisplay) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
