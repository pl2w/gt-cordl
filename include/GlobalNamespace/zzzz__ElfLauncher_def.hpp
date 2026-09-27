#pragma once
// IWYU pragma private; include "GlobalNamespace/ElfLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ElfLauncher)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ElfLauncher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ElfLauncher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ElfLauncher*, "", "ElfLauncher");
// Dependencies TransferrableObjectHoldablePart_Crank, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ElfLauncher
class CORDL_TYPE ElfLauncher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _events, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field crankClickAudio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_crankClickAudio, put=__cordl_internal_set_crankClickAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  crankClickAudio;

/// @brief Field crankClickThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankClickThreshold, put=__cordl_internal_set_crankClickThreshold)) float_t  crankClickThreshold;

/// @brief Field crankShootThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankShootThreshold, put=__cordl_internal_set_crankShootThreshold)) float_t  crankShootThreshold;

/// @brief Field cranks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cranks, put=__cordl_internal_set_cranks)) ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  cranks;

/// @brief Field currentClickCrankAmount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentClickCrankAmount, put=__cordl_internal_set_currentClickCrankAmount)) float_t  currentClickCrankAmount;

/// @brief Field currentShootCrankAmount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentShootCrankAmount, put=__cordl_internal_set_currentShootCrankAmount)) float_t  currentShootCrankAmount;

/// @brief Field elfProjectileHash, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_elfProjectileHash, put=__cordl_internal_set_elfProjectileHash)) int32_t  elfProjectileHash;

/// @brief Field elfProjectilePrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_elfProjectilePrefab, put=__cordl_internal_set_elfProjectilePrefab)) ::UnityW<::UnityEngine::GameObject>  elfProjectilePrefab;

/// @brief Field m_player, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_player, put=__cordl_internal_set_m_player)) ::GlobalNamespace::NetPlayer*  m_player;

/// @brief Field muzzle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_muzzle, put=__cordl_internal_set_muzzle)) ::UnityW<::UnityEngine::Transform>  muzzle;

/// @brief Field muzzleVelocity, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_muzzleVelocity, put=__cordl_internal_set_muzzleVelocity)) float_t  muzzleVelocity;

/// @brief Field parentHoldable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHoldable, put=__cordl_internal_set_parentHoldable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentHoldable;

/// @brief Field shootAudio, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootAudio, put=__cordl_internal_set_shootAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  shootAudio;

/// @brief Field shootHapticDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootHapticDuration, put=__cordl_internal_set_shootHapticDuration)) float_t  shootHapticDuration;

/// @brief Field shootHapticStrength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_shootHapticStrength, put=__cordl_internal_set_shootHapticStrength)) float_t  shootHapticStrength;

/// @brief Method Awake, addr 0x564cc78, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ElfLauncher* New_ctor() ;

/// @brief Method OnCranked, addr 0x564cd98, size 0x80, virtual false, abstract: false, final false
inline void OnCranked(float_t  deltaAngle) ;

/// @brief Method OnDisable, addr 0x564cb30, size 0x148, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x564c844, size 0x2ec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Shoot, addr 0x564ce18, size 0x314, virtual false, abstract: false, final false
inline void Shoot() ;

/// @brief Method ShootShared, addr 0x564d344, size 0x1b0, virtual true, abstract: false, final false
inline void ShootShared(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method ShootShared, addr 0x564d12c, size 0x218, virtual false, abstract: false, final false
inline void ShootShared(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_crankClickAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_crankClickAudio() ;

constexpr float_t const& __cordl_internal_get_crankClickThreshold() const;

constexpr float_t& __cordl_internal_get_crankClickThreshold() ;

constexpr float_t const& __cordl_internal_get_crankShootThreshold() const;

constexpr float_t& __cordl_internal_get_crankShootThreshold() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>> const& __cordl_internal_get_cranks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>& __cordl_internal_get_cranks() ;

constexpr float_t const& __cordl_internal_get_currentClickCrankAmount() const;

constexpr float_t& __cordl_internal_get_currentClickCrankAmount() ;

constexpr float_t const& __cordl_internal_get_currentShootCrankAmount() const;

constexpr float_t& __cordl_internal_get_currentShootCrankAmount() ;

constexpr int32_t const& __cordl_internal_get_elfProjectileHash() const;

constexpr int32_t& __cordl_internal_get_elfProjectileHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_elfProjectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_elfProjectilePrefab() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_m_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_m_player() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_muzzle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_muzzle() ;

constexpr float_t const& __cordl_internal_get_muzzleVelocity() const;

constexpr float_t& __cordl_internal_get_muzzleVelocity() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentHoldable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentHoldable() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_shootAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_shootAudio() ;

constexpr float_t const& __cordl_internal_get_shootHapticDuration() const;

constexpr float_t& __cordl_internal_get_shootHapticDuration() ;

constexpr float_t const& __cordl_internal_get_shootHapticStrength() const;

constexpr float_t& __cordl_internal_get_shootHapticStrength() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_crankClickAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_crankClickThreshold(float_t  value) ;

constexpr void __cordl_internal_set_crankShootThreshold(float_t  value) ;

constexpr void __cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  value) ;

constexpr void __cordl_internal_set_currentClickCrankAmount(float_t  value) ;

constexpr void __cordl_internal_set_currentShootCrankAmount(float_t  value) ;

constexpr void __cordl_internal_set_elfProjectileHash(int32_t  value) ;

constexpr void __cordl_internal_set_elfProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_player(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_muzzle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_muzzleVelocity(float_t  value) ;

constexpr void __cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_shootAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_shootHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_shootHapticStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x56476e0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElfLauncher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElfLauncher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ElfLauncher(ElfLauncher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElfLauncher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElfLauncher(ElfLauncher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{709};

/// [SerializeField]
/// @brief Field parentHoldable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentHoldable;

/// [SerializeField]
/// @brief Field cranks, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  ___cranks;

/// [SerializeField]
/// @brief Field crankShootThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___crankShootThreshold;

/// [SerializeField]
/// @brief Field crankClickThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___crankClickThreshold;

/// [SerializeField]
/// @brief Field muzzle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___muzzle;

/// [SerializeField]
/// @brief Field elfProjectilePrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___elfProjectilePrefab;

/// @brief Field elfProjectileHash, offset: 0x48, size: 0x4, def value: None
 int32_t  ___elfProjectileHash;

/// [SerializeField]
/// @brief Field muzzleVelocity, offset: 0x4c, size: 0x4, def value: None
 float_t  ___muzzleVelocity;

/// [SerializeField]
/// @brief Field crankClickAudio, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___crankClickAudio;

/// [SerializeField]
/// @brief Field shootAudio, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___shootAudio;

/// [SerializeField]
/// @brief Field shootHapticStrength, offset: 0x60, size: 0x4, def value: None
 float_t  ___shootHapticStrength;

/// [SerializeField]
/// @brief Field shootHapticDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ___shootHapticDuration;

/// @brief Field _events, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field currentShootCrankAmount, offset: 0x70, size: 0x4, def value: None
 float_t  ___currentShootCrankAmount;

/// @brief Field currentClickCrankAmount, offset: 0x74, size: 0x4, def value: None
 float_t  ___currentClickCrankAmount;

/// @brief Field m_player, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___m_player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___parentHoldable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___cranks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___crankShootThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___crankClickThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___muzzle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___elfProjectilePrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___elfProjectileHash) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___muzzleVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___crankClickAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___shootAudio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___shootHapticStrength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___shootHapticDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ____events) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___currentShootCrankAmount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___currentClickCrankAmount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElfLauncher, ___m_player) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ElfLauncher) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
