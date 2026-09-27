#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritter)
namespace GlobalNamespace {
class CosmeticCritterSpawner;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritter*, "", "CosmeticCritter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritter
class CORDL_TYPE CosmeticCritter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CachedType, put=set_CachedType)) ::System::Type*  CachedType;

 __declspec(property(get=get_Seed, put=set_Seed)) int32_t  Seed;

 __declspec(property(get=get_Spawner, put=set_Spawner)) ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  Spawner;

/// @brief Field <CachedType>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedType_k__BackingField, put=__cordl_internal_set__CachedType_k__BackingField)) ::System::Type*  _CachedType_k__BackingField;

/// @brief Field <Seed>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Seed_k__BackingField, put=__cordl_internal_set__Seed_k__BackingField)) int32_t  _Seed_k__BackingField;

/// @brief Field <Spawner>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Spawner_k__BackingField, put=__cordl_internal_set__Spawner_k__BackingField)) ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  _Spawner_k__BackingField;

/// @brief Field globalMaxCritters, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalMaxCritters, put=__cordl_internal_set_globalMaxCritters)) int32_t  globalMaxCritters;

/// @brief Field lifetime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifetime, put=__cordl_internal_set_lifetime)) float_t  lifetime;

/// @brief Field startTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) double_t  startTime;

/// @brief Method Expired, addr 0x57e8030, size 0x3c, virtual true, abstract: false, final false
inline bool Expired() ;

/// @brief Method GetAliveTime, addr 0x57e7fa8, size 0x88, virtual false, abstract: false, final false
inline double_t GetAliveTime() ;

/// @brief Method GetGlobalMaxCritters, addr 0x57e7f48, size 0x8, virtual false, abstract: false, final false
inline int32_t GetGlobalMaxCritters() ;

static inline ::GlobalNamespace::CosmeticCritter* New_ctor() ;

/// @brief Method OnDespawn, addr 0x57e7fa0, size 0x4, virtual true, abstract: false, final false
inline void OnDespawn() ;

/// @brief Method OnSpawn, addr 0x57e7f9c, size 0x4, virtual true, abstract: false, final false
inline void OnSpawn() ;

/// @brief Method SetRandomVariables, addr 0x57e7fa4, size 0x4, virtual true, abstract: false, final false
inline void SetRandomVariables() ;

/// @brief Method SetSeedSpawnerTypeAndTime, addr 0x57e7f50, size 0x4c, virtual false, abstract: false, final false
inline void SetSeedSpawnerTypeAndTime(int32_t  seed, ::GlobalNamespace::CosmeticCritterSpawner*  spawner, ::System::Type*  type, double_t  time) ;

/// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Tick() ;

constexpr ::System::Type* const& __cordl_internal_get__CachedType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__CachedType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Seed_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Seed_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> const& __cordl_internal_get__Spawner_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>& __cordl_internal_get__Spawner_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_globalMaxCritters() const;

constexpr int32_t& __cordl_internal_get_globalMaxCritters() ;

constexpr float_t const& __cordl_internal_get_lifetime() const;

constexpr float_t& __cordl_internal_get_lifetime() ;

constexpr double_t const& __cordl_internal_get_startTime() const;

constexpr double_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set__CachedType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Seed_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Spawner_k__BackingField(::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  value) ;

constexpr void __cordl_internal_set_globalMaxCritters(int32_t  value) ;

constexpr void __cordl_internal_set_lifetime(float_t  value) ;

constexpr void __cordl_internal_set_startTime(double_t  value) ;

/// @brief Method .ctor, addr 0x57e806c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CachedType, addr 0x57e7f38, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_CachedType() ;

/// [CompilerGenerated]
/// @brief Method get_Seed, addr 0x57e7f18, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Seed() ;

/// [CompilerGenerated]
/// @brief Method get_Spawner, addr 0x57e7f28, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> get_Spawner() ;

/// [CompilerGenerated]
/// @brief Method set_CachedType, addr 0x57e7f40, size 0x8, virtual false, abstract: false, final false
inline void set_CachedType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Seed, addr 0x57e7f20, size 0x8, virtual false, abstract: false, final false
inline void set_Seed(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Spawner, addr 0x57e7f30, size 0x8, virtual false, abstract: false, final false
inline void set_Spawner(::GlobalNamespace::CosmeticCritterSpawner*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritter(CosmeticCritter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritter(CosmeticCritter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1664};

/// [Tooltip("After this many seconds the critter will forcibly despawn.")]
/// [SerializeField]
/// @brief Field lifetime, offset: 0x20, size: 0x4, def value: None
 float_t  ___lifetime;

/// [Tooltip("The maximum number of this kind of critter that can be in the room at any given time.")]
/// [SerializeField]
/// @brief Field globalMaxCritters, offset: 0x24, size: 0x4, def value: None
 int32_t  ___globalMaxCritters;

/// [CompilerGenerated]
/// @brief Field <Seed>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Seed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Spawner>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  ____Spawner_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CachedType>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____CachedType_k__BackingField;

/// @brief Field startTime, offset: 0x40, size: 0x8, def value: None
 double_t  ___startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ___lifetime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ___globalMaxCritters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ____Seed_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ____Spawner_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ____CachedType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritter, ___startTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritter) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
