#pragma once
// IWYU pragma private; include "GlobalNamespace/MoodRing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoodRing)
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
class MoodRing;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MoodRing*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoodRing*, "", "MoodRing");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoodRing
class CORDL_TYPE MoodRing : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field animBlueValue, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_animBlueValue, put=__cordl_internal_set_animBlueValue)) float_t  animBlueValue;

/// @brief Field animGreenValue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_animGreenValue, put=__cordl_internal_set_animGreenValue)) float_t  animGreenValue;

/// @brief Field animRedValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animRedValue, put=__cordl_internal_set_animRedValue)) float_t  animRedValue;

/// @brief Field attachedToLeftHand, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachedToLeftHand, put=__cordl_internal_set_attachedToLeftHand)) bool  attachedToLeftHand;

/// @brief Field furCycleSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_furCycleSpeed, put=__cordl_internal_set_furCycleSpeed)) float_t  furCycleSpeed;

/// @brief Field isCycling, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCycling, put=__cordl_internal_set_isCycling)) bool  isCycling;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field nextFurCycleTimestamp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextFurCycleTimestamp, put=__cordl_internal_set_nextFurCycleTimestamp)) float_t  nextFurCycleTimestamp;

/// @brief Field rotationSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x578b0c4, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x578b0c8, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x578b0b4, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x578b0a4, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x578b0bc, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x578b0ac, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::MoodRing* New_ctor() ;

/// @brief Method RainbowCycle, addr 0x578b648, size 0x110, virtual false, abstract: false, final false
inline void RainbowCycle(::by_ref<float_t>  r, ::by_ref<float_t>  g, ::by_ref<float_t>  b) ;

/// @brief Method Update, addr 0x578b0d0, size 0x578, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_animBlueValue() const;

constexpr float_t& __cordl_internal_get_animBlueValue() ;

constexpr float_t const& __cordl_internal_get_animGreenValue() const;

constexpr float_t& __cordl_internal_get_animGreenValue() ;

constexpr float_t const& __cordl_internal_get_animRedValue() const;

constexpr float_t& __cordl_internal_get_animRedValue() ;

constexpr bool const& __cordl_internal_get_attachedToLeftHand() const;

constexpr bool& __cordl_internal_get_attachedToLeftHand() ;

constexpr float_t const& __cordl_internal_get_furCycleSpeed() const;

constexpr float_t& __cordl_internal_get_furCycleSpeed() ;

constexpr bool const& __cordl_internal_get_isCycling() const;

constexpr bool& __cordl_internal_get_isCycling() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_nextFurCycleTimestamp() const;

constexpr float_t& __cordl_internal_get_nextFurCycleTimestamp() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_animBlueValue(float_t  value) ;

constexpr void __cordl_internal_set_animGreenValue(float_t  value) ;

constexpr void __cordl_internal_set_animRedValue(float_t  value) ;

constexpr void __cordl_internal_set_attachedToLeftHand(bool  value) ;

constexpr void __cordl_internal_set_furCycleSpeed(float_t  value) ;

constexpr void __cordl_internal_set_isCycling(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_nextFurCycleTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x578b758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoodRing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoodRing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoodRing(MoodRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoodRing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoodRing(MoodRing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1434};

/// [SerializeField]
/// @brief Field attachedToLeftHand, offset: 0x20, size: 0x1, def value: None
 bool  ___attachedToLeftHand;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field rotationSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// [SerializeField]
/// @brief Field furCycleSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___furCycleSpeed;

/// @brief Field nextFurCycleTimestamp, offset: 0x38, size: 0x4, def value: None
 float_t  ___nextFurCycleTimestamp;

/// @brief Field animRedValue, offset: 0x3c, size: 0x4, def value: None
 float_t  ___animRedValue;

/// @brief Field animGreenValue, offset: 0x40, size: 0x4, def value: None
 float_t  ___animGreenValue;

/// @brief Field animBlueValue, offset: 0x44, size: 0x4, def value: None
 float_t  ___animBlueValue;

/// @brief Field isCycling, offset: 0x48, size: 0x1, def value: None
 bool  ___isCycling;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x49, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoodRing, ___attachedToLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___rotationSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___furCycleSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___nextFurCycleTimestamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___animRedValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___animGreenValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___animBlueValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ___isCycling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoodRing, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoodRing) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
