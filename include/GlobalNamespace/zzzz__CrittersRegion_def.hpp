#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersBiome_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersRegion)
namespace GlobalNamespace {
class CrittersPawn;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersRegion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersRegion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersRegion*, "", "CrittersRegion");
// Dependencies CrittersBiome, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersRegion
class CORDL_TYPE CrittersRegion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Biome, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Biome, put=__cordl_internal_set_Biome)) ::GlobalNamespace::CrittersBiome  Biome;

 __declspec(property(get=get_CritterCount)) int32_t  CritterCount;

/// @brief Field <ID>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) int32_t  _ID_k__BackingField;

 __declspec(property(get=get_ID, put=set_ID)) int32_t  _cordl_ID;

/// @brief Field _critters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__critters, put=__cordl_internal_set__critters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  _critters;

/// @brief Field _regionLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__regionLookup, put=setStaticF__regionLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*  _regionLookup;

/// @brief Field _regions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__regions, put=setStaticF__regions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  _regions;

/// @brief Field maxCritters, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCritters, put=__cordl_internal_set_maxCritters)) int32_t  maxCritters;

/// @brief Field scale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Method AddCritter, addr 0x56f3a2c, size 0xac, virtual false, abstract: false, final false
inline void AddCritter(::GlobalNamespace::CrittersPawn*  pawn) ;

/// @brief Method AddCritterToRegion, addr 0x56f38e4, size 0x148, virtual false, abstract: false, final false
static inline void AddCritterToRegion(::GlobalNamespace::CrittersPawn*  critter, int32_t  regionId) ;

/// @brief Method GetSpawnPoint, addr 0x56f3c74, size 0x280, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSpawnPoint() ;

static inline ::GlobalNamespace::CrittersRegion* New_ctor() ;

/// @brief Method OnDisable, addr 0x56f37dc, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56f367c, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterRegion, addr 0x56f36d0, size 0x10c, virtual false, abstract: false, final false
static inline void RegisterRegion(::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method RemoveCritter, addr 0x56f3c1c, size 0x58, virtual false, abstract: false, final false
inline void RemoveCritter(::GlobalNamespace::CrittersPawn*  pawn) ;

/// @brief Method RemoveCritterFromRegion, addr 0x56f3ad8, size 0x144, virtual false, abstract: false, final false
static inline void RemoveCritterFromRegion(::GlobalNamespace::CrittersPawn*  critter) ;

/// @brief Method UnregisterRegion, addr 0x56f3830, size 0xb4, virtual false, abstract: false, final false
static inline void UnregisterRegion(::GlobalNamespace::CrittersRegion*  region) ;

constexpr ::GlobalNamespace::CrittersBiome const& __cordl_internal_get_Biome() const;

constexpr ::GlobalNamespace::CrittersBiome& __cordl_internal_get_Biome() ;

constexpr int32_t const& __cordl_internal_get__ID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>* const& __cordl_internal_get__critters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*& __cordl_internal_get__critters() ;

constexpr int32_t const& __cordl_internal_get_maxCritters() const;

constexpr int32_t& __cordl_internal_get_maxCritters() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_Biome(::GlobalNamespace::CrittersBiome  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__critters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  value) ;

constexpr void __cordl_internal_set_maxCritters(int32_t  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

/// @brief Method .ctor, addr 0x56f3ef4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>* getStaticF__regionLookup() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* getStaticF__regions() ;

/// @brief Method get_CritterCount, addr 0x56f3624, size 0x48, virtual false, abstract: false, final false
inline int32_t get_CritterCount() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0x56f366c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ID() ;

/// @brief Method get_Regions, addr 0x56f35cc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* get_Regions() ;

static inline void setStaticF__regionLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersRegion>>*  value) ;

static inline void setStaticF__regions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0x56f3674, size 0x8, virtual false, abstract: false, final false
inline void set_ID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersRegion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersRegion(CrittersRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersRegion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersRegion(CrittersRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{119};

/// @brief Field Biome, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CrittersBiome  ___Biome;

/// @brief Field maxCritters, offset: 0x24, size: 0x4, def value: None
 int32_t  ___maxCritters;

/// @brief Field scale, offset: 0x28, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field _critters, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  ____critters;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ID>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____ID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersRegion, ___Biome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRegion, ___maxCritters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRegion, ___scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRegion, ____critters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersRegion, ____ID_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersRegion) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
