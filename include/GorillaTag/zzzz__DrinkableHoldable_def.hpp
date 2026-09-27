#pragma once
// IWYU pragma private; include "GorillaTag/DrinkableHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrinkableHoldable)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaTag {
class ContainerLiquid;
}
// Forward declare root types
namespace GorillaTag {
class DrinkableHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::DrinkableHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DrinkableHoldable*, "GorillaTag", "DrinkableHoldable");
// Dependencies TransferrableObject, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DrinkableHoldable
class CORDL_TYPE DrinkableHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field containerLiquid, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_containerLiquid, put=__cordl_internal_set_containerLiquid)) ::UnityW<::GorillaTag::ContainerLiquid>  containerLiquid;

/// @brief Field coolingDown, offset 0x365, size 0x1 
 __declspec(property(get=__cordl_internal_get_coolingDown, put=__cordl_internal_set_coolingDown)) bool  coolingDown;

/// @brief Field headToMouthOffset, offset 0x350, size 0xc 
 __declspec(property(get=__cordl_internal_get_headToMouthOffset, put=__cordl_internal_set_headToMouthOffset)) ::UnityEngine::Vector3  headToMouthOffset;

/// @brief Field lastTimeSipSoundPlayed, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTimeSipSoundPlayed, put=__cordl_internal_set_lastTimeSipSoundPlayed)) float_t  lastTimeSipSoundPlayed;

/// @brief Field myByteArray, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_myByteArray, put=__cordl_internal_set_myByteArray)) ::ArrayW<uint8_t>  myByteArray;

/// @brief Field sipRadius, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sipRadius, put=__cordl_internal_set_sipRadius)) float_t  sipRadius;

/// @brief Field sipRate, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_sipRate, put=__cordl_internal_set_sipRate)) float_t  sipRate;

/// @brief Field sipSoundBankPlayer, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_sipSoundBankPlayer, put=__cordl_internal_set_sipSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  sipSoundBankPlayer;

/// @brief Field sipSoundCooldown, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sipSoundCooldown, put=__cordl_internal_set_sipSoundCooldown)) float_t  sipSoundCooldown;

/// @brief Field wasCoolingDown, offset 0x366, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasCoolingDown, put=__cordl_internal_set_wasCoolingDown)) bool  wasCoolingDown;

/// @brief Field wasSipping, offset 0x364, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSipping, put=__cordl_internal_set_wasSipping)) bool  wasSipping;

/// @brief Method GetBytes, addr 0x5d29440, size 0x58, virtual false, abstract: false, final false
static inline void GetBytes(int32_t  value, ::by_ref<::ArrayW<uint8_t>>  bytes) ;

/// @brief Method LateUpdateLocal, addr 0x5d28c14, size 0x6e0, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5d292f4, size 0x50, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5d293f4, size 0x4c, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GorillaTag::DrinkableHoldable* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d28a4c, size 0xd0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PackValues, addr 0x5d28b1c, size 0xf8, virtual false, abstract: false, final false
static inline int32_t PackValues(float_t  cooldownStartTime, float_t  fillAmount, bool  coolingDown) ;

/// @brief Method UnpackValuesNonstatic, addr 0x5d29344, size 0xb0, virtual false, abstract: false, final false
inline void UnpackValuesNonstatic(/* [IsReadOnly] */ ::by_ref<int32_t>  packed, ::by_ref<float_t>  cooldownStartTime, ::by_ref<float_t>  fillAmount, ::by_ref<bool>  coolingDown) ;

/// @brief Method UnpackValuesStatic, addr 0x5d29498, size 0xac, virtual false, abstract: false, final false
static inline void UnpackValuesStatic(/* [IsReadOnly] */ ::by_ref<int32_t>  packed, ::by_ref<float_t>  cooldownStartTime, ::by_ref<float_t>  fillAmount, ::by_ref<bool>  coolingDown) ;

constexpr ::UnityW<::GorillaTag::ContainerLiquid> const& __cordl_internal_get_containerLiquid() const;

constexpr ::UnityW<::GorillaTag::ContainerLiquid>& __cordl_internal_get_containerLiquid() ;

constexpr bool const& __cordl_internal_get_coolingDown() const;

constexpr bool& __cordl_internal_get_coolingDown() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headToMouthOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headToMouthOffset() ;

constexpr float_t const& __cordl_internal_get_lastTimeSipSoundPlayed() const;

constexpr float_t& __cordl_internal_get_lastTimeSipSoundPlayed() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_myByteArray() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_myByteArray() ;

constexpr float_t const& __cordl_internal_get_sipRadius() const;

constexpr float_t& __cordl_internal_get_sipRadius() ;

constexpr float_t const& __cordl_internal_get_sipRate() const;

constexpr float_t& __cordl_internal_get_sipRate() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_sipSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_sipSoundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_sipSoundCooldown() const;

constexpr float_t& __cordl_internal_get_sipSoundCooldown() ;

constexpr bool const& __cordl_internal_get_wasCoolingDown() const;

constexpr bool& __cordl_internal_get_wasCoolingDown() ;

constexpr bool const& __cordl_internal_get_wasSipping() const;

constexpr bool& __cordl_internal_get_wasSipping() ;

constexpr void __cordl_internal_set_containerLiquid(::UnityW<::GorillaTag::ContainerLiquid>  value) ;

constexpr void __cordl_internal_set_coolingDown(bool  value) ;

constexpr void __cordl_internal_set_headToMouthOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastTimeSipSoundPlayed(float_t  value) ;

constexpr void __cordl_internal_set_myByteArray(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_sipRadius(float_t  value) ;

constexpr void __cordl_internal_set_sipRate(float_t  value) ;

constexpr void __cordl_internal_set_sipSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_sipSoundCooldown(float_t  value) ;

constexpr void __cordl_internal_set_wasCoolingDown(bool  value) ;

constexpr void __cordl_internal_set_wasSipping(bool  value) ;

/// @brief Method .ctor, addr 0x5d29544, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrinkableHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrinkableHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrinkableHoldable(DrinkableHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrinkableHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrinkableHoldable(DrinkableHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4630};

/// [AssignInCorePrefab]
/// @brief Field containerLiquid, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTag::ContainerLiquid>  ___containerLiquid;

/// [AssignInCorePrefab]
/// [SoundBankInfo]
/// @brief Field sipSoundBankPlayer, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___sipSoundBankPlayer;

/// [AssignInCorePrefab]
/// @brief Field sipRate, offset: 0x348, size: 0x4, def value: None
 float_t  ___sipRate;

/// [AssignInCorePrefab]
/// @brief Field sipSoundCooldown, offset: 0x34c, size: 0x4, def value: None
 float_t  ___sipSoundCooldown;

/// [AssignInCorePrefab]
/// @brief Field headToMouthOffset, offset: 0x350, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headToMouthOffset;

/// [AssignInCorePrefab]
/// @brief Field sipRadius, offset: 0x35c, size: 0x4, def value: None
 float_t  ___sipRadius;

/// @brief Field lastTimeSipSoundPlayed, offset: 0x360, size: 0x4, def value: None
 float_t  ___lastTimeSipSoundPlayed;

/// @brief Field wasSipping, offset: 0x364, size: 0x1, def value: None
 bool  ___wasSipping;

/// @brief Field coolingDown, offset: 0x365, size: 0x1, def value: None
 bool  ___coolingDown;

/// @brief Field wasCoolingDown, offset: 0x366, size: 0x1, def value: None
 bool  ___wasCoolingDown;

/// @brief Field myByteArray, offset: 0x368, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___myByteArray;

/// @brief Size padding 0x3a0 - 0x370 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___containerLiquid) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___sipSoundBankPlayer) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___sipRate) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___sipSoundCooldown) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___headToMouthOffset) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___sipRadius) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___lastTimeSipSoundPlayed) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___wasSipping) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___coolingDown) == 0x365, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___wasCoolingDown) == 0x366, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::DrinkableHoldable, ___myByteArray) == 0x368, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::DrinkableHoldable) == 0x3a0, "Size mismatch!");

} // namespace end def GorillaTag
