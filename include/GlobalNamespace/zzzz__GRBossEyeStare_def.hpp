#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBossEyeStare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRBossEyeStare)
namespace GlobalNamespace {
class GRAbilityBase;
}
namespace GlobalNamespace {
class GREnemyBossMoon;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBossEyeStare;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBossEyeStare*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBossEyeStare*, "", "GRBossEyeStare");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBossEyeStare
class CORDL_TYPE GRBossEyeStare : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boss, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_boss, put=__cordl_internal_set_boss)) ::UnityW<::GlobalNamespace::GREnemyBossMoon>  boss;

/// @brief Field checkForClosestPlayerCooldown, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkForClosestPlayerCooldown, put=__cordl_internal_set_checkForClosestPlayerCooldown)) float_t  checkForClosestPlayerCooldown;

/// @brief Field closestPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_closestPlayer, put=__cordl_internal_set_closestPlayer)) ::UnityW<::UnityEngine::Transform>  closestPlayer;

/// @brief Field lastAbility, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastAbility, put=__cordl_internal_set_lastAbility)) ::GlobalNamespace::GRAbilityBase*  lastAbility;

/// @brief Field lastCheck, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheck, put=__cordl_internal_set_lastCheck)) float_t  lastCheck;

/// @brief Field lastLocalRot, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLocalRot, put=__cordl_internal_set_lastLocalRot)) ::UnityEngine::Vector3  lastLocalRot;

/// @brief Field lerpAmount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpAmount, put=__cordl_internal_set_lerpAmount)) float_t  lerpAmount;

/// @brief Field noUpdateAbilities, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_noUpdateAbilities, put=__cordl_internal_set_noUpdateAbilities)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*  noUpdateAbilities;

/// @brief Field rigs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs;

/// @brief Field rotOffset, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotOffset, put=__cordl_internal_set_rotOffset)) ::UnityEngine::Vector3  rotOffset;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5873464, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRBossEyeStare* New_ctor() ;

/// @brief Method OnDisable, addr 0x58734f4, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58734bc, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x58734fc, size 0x6c4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& __cordl_internal_get_boss() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& __cordl_internal_get_boss() ;

constexpr float_t const& __cordl_internal_get_checkForClosestPlayerCooldown() const;

constexpr float_t& __cordl_internal_get_checkForClosestPlayerCooldown() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_closestPlayer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_closestPlayer() ;

constexpr ::GlobalNamespace::GRAbilityBase* const& __cordl_internal_get_lastAbility() const;

constexpr ::GlobalNamespace::GRAbilityBase*& __cordl_internal_get_lastAbility() ;

constexpr float_t const& __cordl_internal_get_lastCheck() const;

constexpr float_t& __cordl_internal_get_lastCheck() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLocalRot() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLocalRot() ;

constexpr float_t const& __cordl_internal_get_lerpAmount() const;

constexpr float_t& __cordl_internal_get_lerpAmount() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>* const& __cordl_internal_get_noUpdateAbilities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*& __cordl_internal_get_noUpdateAbilities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotOffset() ;

constexpr void __cordl_internal_set_boss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value) ;

constexpr void __cordl_internal_set_checkForClosestPlayerCooldown(float_t  value) ;

constexpr void __cordl_internal_set_closestPlayer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastAbility(::GlobalNamespace::GRAbilityBase*  value) ;

constexpr void __cordl_internal_set_lastCheck(float_t  value) ;

constexpr void __cordl_internal_set_lastLocalRot(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lerpAmount(float_t  value) ;

constexpr void __cordl_internal_set_noUpdateAbilities(::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*  value) ;

constexpr void __cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_rotOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5873bc0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBossEyeStare() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBossEyeStare", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBossEyeStare(GRBossEyeStare && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBossEyeStare", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBossEyeStare(GRBossEyeStare const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1893};

/// @brief Field lastLocalRot, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLocalRot;

/// @brief Field noUpdateAbilities, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*  ___noUpdateAbilities;

/// @brief Field boss, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  ___boss;

/// @brief Field lastAbility, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityBase*  ___lastAbility;

/// @brief Field lastCheck, offset: 0x48, size: 0x4, def value: None
 float_t  ___lastCheck;

/// @brief Field checkForClosestPlayerCooldown, offset: 0x4c, size: 0x4, def value: None
 float_t  ___checkForClosestPlayerCooldown;

/// @brief Field closestPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___closestPlayer;

/// @brief Field rigs, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigs;

/// @brief Field lerpAmount, offset: 0x60, size: 0x4, def value: None
 float_t  ___lerpAmount;

/// @brief Field rotOffset, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___lastLocalRot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___noUpdateAbilities) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___boss) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___lastAbility) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___lastCheck) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___checkForClosestPlayerCooldown) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___closestPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___rigs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___lerpAmount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBossEyeStare, ___rotOffset) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBossEyeStare) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
