#pragma once
// IWYU pragma private; include "GlobalNamespace/CopySpawnerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopySpawnerData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CopySpawnerData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CopySpawnerData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CopySpawnerData*, "", "CopySpawnerData");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CopySpawnerData
class CORDL_TYPE CopySpawnerData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field spawnerDataParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnerDataParent, put=__cordl_internal_set_spawnerDataParent)) ::UnityW<::UnityEngine::Transform>  spawnerDataParent;

/// @brief Method CopyCageDeposits, addr 0x55efd38, size 0x77c, virtual false, abstract: false, final false
inline void CopyCageDeposits() ;

/// @brief Method CopyEquipmentSpawner, addr 0x55ef6e4, size 0x654, virtual false, abstract: false, final false
inline void CopyEquipmentSpawner() ;

/// [ContextMenu("Copy Spawner Data")]
/// @brief Method CopySpawnerDataInPrefab, addr 0x55ef500, size 0x1e4, virtual false, abstract: false, final false
inline void CopySpawnerDataInPrefab() ;

static inline ::GlobalNamespace::CopySpawnerData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnerDataParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnerDataParent() ;

constexpr void __cordl_internal_set_spawnerDataParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x55f04b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopySpawnerData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopySpawnerData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CopySpawnerData(CopySpawnerData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopySpawnerData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopySpawnerData(CopySpawnerData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{67};

/// @brief Field spawnerDataParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnerDataParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CopySpawnerData, ___spawnerDataParent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CopySpawnerData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
