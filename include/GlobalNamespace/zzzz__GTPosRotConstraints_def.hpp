#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotConstraints.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPosRotConstraint_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GTPosRotConstraints)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
// Forward declare root types
namespace GlobalNamespace {
class GTPosRotConstraints;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTPosRotConstraints*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPosRotConstraints*, "", "GTPosRotConstraints");
// Dependencies GorillaPosRotConstraint, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTPosRotConstraints
class CORDL_TYPE GTPosRotConstraints : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field _registerOnEnable, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__registerOnEnable, put=__cordl_internal_set__registerOnEnable)) bool  _registerOnEnable;

/// @brief Field _shouldCallOnSpawnDuringAwake, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldCallOnSpawnDuringAwake, put=__cordl_internal_set__shouldCallOnSpawnDuringAwake)) bool  _shouldCallOnSpawnDuringAwake;

/// @brief Field constraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_constraints, put=__cordl_internal_set_constraints)) ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>  constraints;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5679ccc, size 0x114, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x567aa14, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5679e00, size 0xc14, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5679df0, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5679df8, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

static inline ::GlobalNamespace::GTPosRotConstraints* New_ctor() ;

/// @brief Method OnDisable, addr 0x567aa88, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567aa18, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__registerOnEnable() const;

constexpr bool& __cordl_internal_get__registerOnEnable() ;

constexpr bool const& __cordl_internal_get__shouldCallOnSpawnDuringAwake() const;

constexpr bool& __cordl_internal_get__shouldCallOnSpawnDuringAwake() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint> const& __cordl_internal_get_constraints() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>& __cordl_internal_get_constraints() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__registerOnEnable(bool  value) ;

constexpr void __cordl_internal_set__shouldCallOnSpawnDuringAwake(bool  value) ;

constexpr void __cordl_internal_set_constraints(::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>  value) ;

/// @brief Method .ctor, addr 0x567aadc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5679de0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5679de8, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPosRotConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPosRotConstraints(GTPosRotConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPosRotConstraints(GTPosRotConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{849};

/// [SerializeField]
/// @brief Field _shouldCallOnSpawnDuringAwake, offset: 0x20, size: 0x1, def value: None
 bool  ____shouldCallOnSpawnDuringAwake;

/// [Tooltip("Used for actors that get disabled and re-enabled")]
/// [SerializeField]
/// @brief Field _registerOnEnable, offset: 0x21, size: 0x1, def value: None
 bool  ____registerOnEnable;

/// @brief Field constraints, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>  ___constraints;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPosRotConstraints, ____shouldCallOnSpawnDuringAwake) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraints, ____registerOnEnable) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraints, ___constraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraints, ____IsSpawned_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPosRotConstraints, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPosRotConstraints) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
