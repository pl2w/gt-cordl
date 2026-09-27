#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SpawnRegion_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIResourceRegion)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class SIResource;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceRegion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceRegion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceRegion*, "", "SIResourceRegion");
// Dependencies SpawnRegion`2<TItem, TRegion>
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceRegion
class CORDL_TYPE SIResourceRegion : public ::GlobalNamespace::SpawnRegion_2<::UnityW<::GlobalNamespace::GameEntity>,::UnityW<::GlobalNamespace::SIResourceRegion>> {
public:
// Declarations
 __declspec(property(get=get_LastSpawnTime, put=set_LastSpawnTime)) float_t  LastSpawnTime;

/// @brief Field <LastSpawnTime>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastSpawnTime_k__BackingField, put=__cordl_internal_set__LastSpawnTime_k__BackingField)) float_t  _LastSpawnTime_k__BackingField;

/// @brief Field resourcePrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourcePrefab, put=__cordl_internal_set_resourcePrefab)) ::UnityW<::GlobalNamespace::SIResource>  resourcePrefab;

static inline ::GlobalNamespace::SIResourceRegion* New_ctor() ;

constexpr float_t const& __cordl_internal_get__LastSpawnTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastSpawnTime_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SIResource> const& __cordl_internal_get_resourcePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SIResource>& __cordl_internal_get_resourcePrefab() ;

constexpr void __cordl_internal_set__LastSpawnTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_resourcePrefab(::UnityW<::GlobalNamespace::SIResource>  value) ;

/// @brief Method .ctor, addr 0x5aed1f8, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastSpawnTime, addr 0x5aed1e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastSpawnTime() ;

/// [CompilerGenerated]
/// @brief Method set_LastSpawnTime, addr 0x5aed1f0, size 0x8, virtual false, abstract: false, final false
inline void set_LastSpawnTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceRegion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceRegion(SIResourceRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceRegion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceRegion(SIResourceRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{354};

/// @brief Field resourcePrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIResource>  ___resourcePrefab;

/// [CompilerGenerated]
/// @brief Field <LastSpawnTime>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____LastSpawnTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceRegion, ___resourcePrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceRegion, ____LastSpawnTime_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceRegion) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
