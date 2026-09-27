#pragma once
// IWYU pragma private; include "GlobalNamespace/CrankableToyCarHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrankableToyCarHoldable)
namespace GlobalNamespace {
class CrankableToyCarDeployed;
}
namespace GlobalNamespace {
class DropZone;
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
class TransferrableObjectHoldablePart_Crank;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrankableToyCarHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrankableToyCarHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrankableToyCarHoldable*, "", "CrankableToyCarHoldable");
// Dependencies TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrankableToyCarHoldable
class CORDL_TYPE CrankableToyCarHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _events, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field clickSound, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_clickSound, put=__cordl_internal_set_clickSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  clickSound;

/// @brief Field crank, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_crank, put=__cordl_internal_set_crank)) ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>  crank;

/// @brief Field crankAnglePerClick, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankAnglePerClick, put=__cordl_internal_set_crankAnglePerClick)) float_t  crankAnglePerClick;

/// @brief Field crankHapticDuration, offset 0x384, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHapticDuration, put=__cordl_internal_set_crankHapticDuration)) float_t  crankHapticDuration;

/// @brief Field crankHapticStrength, offset 0x380, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHapticStrength, put=__cordl_internal_set_crankHapticStrength)) float_t  crankHapticStrength;

/// @brief Field currentCrankClickAmount, offset 0x394, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCrankClickAmount, put=__cordl_internal_set_currentCrankClickAmount)) float_t  currentCrankClickAmount;

/// @brief Field currentCrankStrength, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCrankStrength, put=__cordl_internal_set_currentCrankStrength)) float_t  currentCrankStrength;

/// @brief Field deployablePart, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_deployablePart, put=__cordl_internal_set_deployablePart)) ::UnityW<::UnityEngine::GameObject>  deployablePart;

/// @brief Field deployedCar, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_deployedCar, put=__cordl_internal_set_deployedCar)) ::UnityW<::GlobalNamespace::CrankableToyCarDeployed>  deployedCar;

/// @brief Field disabledWhileDeployed, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledWhileDeployed, put=__cordl_internal_set_disabledWhileDeployed)) ::UnityW<::UnityEngine::GameObject>  disabledWhileDeployed;

/// @brief Field maxClickPitch, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxClickPitch, put=__cordl_internal_set_maxClickPitch)) float_t  maxClickPitch;

/// @brief Field maxCrankStrength, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCrankStrength, put=__cordl_internal_set_maxCrankStrength)) float_t  maxCrankStrength;

/// @brief Field maxLifetime, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLifetime, put=__cordl_internal_set_maxLifetime)) float_t  maxLifetime;

/// @brief Field minClickPitch, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_minClickPitch, put=__cordl_internal_set_minClickPitch)) float_t  minClickPitch;

/// @brief Field minLifetime, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_minLifetime, put=__cordl_internal_set_minLifetime)) float_t  minLifetime;

/// @brief Field overCrankedSound, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_overCrankedSound, put=__cordl_internal_set_overCrankedSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  overCrankedSound;

/// @brief Field overcrankHapticDuration, offset 0x38c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overcrankHapticDuration, put=__cordl_internal_set_overcrankHapticDuration)) float_t  overcrankHapticDuration;

/// @brief Field overcrankHapticStrength, offset 0x388, size 0x4 
 __declspec(property(get=__cordl_internal_get_overcrankHapticStrength, put=__cordl_internal_set_overcrankHapticStrength)) float_t  overcrankHapticStrength;

/// @brief Method DeployCarLocal, addr 0x5649930, size 0xd4, virtual false, abstract: false, final false
inline void DeployCarLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, float_t  lifetime, bool  isRemote) ;

/// @brief Method LateUpdateReplicated, addr 0x5649120, size 0x60, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

static inline ::GlobalNamespace::CrankableToyCarHoldable* New_ctor() ;

/// @brief Method OnCarDeployed, addr 0x5648ad0, size 0x44, virtual false, abstract: false, final false
inline void OnCarDeployed() ;

/// @brief Method OnCarReturned, addr 0x5648cb4, size 0x54, virtual false, abstract: false, final false
inline void OnCarReturned() ;

/// @brief Method OnCranked, addr 0x5649180, size 0x22c, virtual false, abstract: false, final false
inline void OnCranked(float_t  deltaAngle) ;

/// @brief Method OnDeployRPC, addr 0x5649a04, size 0x4c0, virtual false, abstract: false, final false
inline void OnDeployRPC(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnDisable, addr 0x5649090, size 0x90, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5648dac, size 0x2e4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRelease, addr 0x56493ac, size 0x584, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method Start, addr 0x5648d10, size 0x9c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_clickSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_clickSound() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank> const& __cordl_internal_get_crank() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>& __cordl_internal_get_crank() ;

constexpr float_t const& __cordl_internal_get_crankAnglePerClick() const;

constexpr float_t& __cordl_internal_get_crankAnglePerClick() ;

constexpr float_t const& __cordl_internal_get_crankHapticDuration() const;

constexpr float_t& __cordl_internal_get_crankHapticDuration() ;

constexpr float_t const& __cordl_internal_get_crankHapticStrength() const;

constexpr float_t& __cordl_internal_get_crankHapticStrength() ;

constexpr float_t const& __cordl_internal_get_currentCrankClickAmount() const;

constexpr float_t& __cordl_internal_get_currentCrankClickAmount() ;

constexpr float_t const& __cordl_internal_get_currentCrankStrength() const;

constexpr float_t& __cordl_internal_get_currentCrankStrength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_deployablePart() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_deployablePart() ;

constexpr ::UnityW<::GlobalNamespace::CrankableToyCarDeployed> const& __cordl_internal_get_deployedCar() const;

constexpr ::UnityW<::GlobalNamespace::CrankableToyCarDeployed>& __cordl_internal_get_deployedCar() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disabledWhileDeployed() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disabledWhileDeployed() ;

constexpr float_t const& __cordl_internal_get_maxClickPitch() const;

constexpr float_t& __cordl_internal_get_maxClickPitch() ;

constexpr float_t const& __cordl_internal_get_maxCrankStrength() const;

constexpr float_t& __cordl_internal_get_maxCrankStrength() ;

constexpr float_t const& __cordl_internal_get_maxLifetime() const;

constexpr float_t& __cordl_internal_get_maxLifetime() ;

constexpr float_t const& __cordl_internal_get_minClickPitch() const;

constexpr float_t& __cordl_internal_get_minClickPitch() ;

constexpr float_t const& __cordl_internal_get_minLifetime() const;

constexpr float_t& __cordl_internal_get_minLifetime() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_overCrankedSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_overCrankedSound() ;

constexpr float_t const& __cordl_internal_get_overcrankHapticDuration() const;

constexpr float_t& __cordl_internal_get_overcrankHapticDuration() ;

constexpr float_t const& __cordl_internal_get_overcrankHapticStrength() const;

constexpr float_t& __cordl_internal_get_overcrankHapticStrength() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_clickSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_crank(::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>  value) ;

constexpr void __cordl_internal_set_crankAnglePerClick(float_t  value) ;

constexpr void __cordl_internal_set_crankHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_crankHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_currentCrankClickAmount(float_t  value) ;

constexpr void __cordl_internal_set_currentCrankStrength(float_t  value) ;

constexpr void __cordl_internal_set_deployablePart(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_deployedCar(::UnityW<::GlobalNamespace::CrankableToyCarDeployed>  value) ;

constexpr void __cordl_internal_set_disabledWhileDeployed(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxClickPitch(float_t  value) ;

constexpr void __cordl_internal_set_maxCrankStrength(float_t  value) ;

constexpr void __cordl_internal_set_maxLifetime(float_t  value) ;

constexpr void __cordl_internal_set_minClickPitch(float_t  value) ;

constexpr void __cordl_internal_set_minLifetime(float_t  value) ;

constexpr void __cordl_internal_set_overCrankedSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_overcrankHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_overcrankHapticStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x5649ec4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrankableToyCarHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrankableToyCarHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrankableToyCarHoldable(CrankableToyCarHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrankableToyCarHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrankableToyCarHoldable(CrankableToyCarHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{700};

/// [SerializeField]
/// @brief Field crank, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>  ___crank;

/// [SerializeField]
/// @brief Field deployedCar, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrankableToyCarDeployed>  ___deployedCar;

/// [SerializeField]
/// @brief Field deployablePart, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___deployablePart;

/// [SerializeField]
/// @brief Field disabledWhileDeployed, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disabledWhileDeployed;

/// [SerializeField]
/// @brief Field crankAnglePerClick, offset: 0x358, size: 0x4, def value: None
 float_t  ___crankAnglePerClick;

/// [SerializeField]
/// @brief Field maxCrankStrength, offset: 0x35c, size: 0x4, def value: None
 float_t  ___maxCrankStrength;

/// [SerializeField]
/// @brief Field minClickPitch, offset: 0x360, size: 0x4, def value: None
 float_t  ___minClickPitch;

/// [SerializeField]
/// @brief Field maxClickPitch, offset: 0x364, size: 0x4, def value: None
 float_t  ___maxClickPitch;

/// [SerializeField]
/// @brief Field minLifetime, offset: 0x368, size: 0x4, def value: None
 float_t  ___minLifetime;

/// [SerializeField]
/// @brief Field maxLifetime, offset: 0x36c, size: 0x4, def value: None
 float_t  ___maxLifetime;

/// [SerializeField]
/// @brief Field clickSound, offset: 0x370, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___clickSound;

/// [SerializeField]
/// @brief Field overCrankedSound, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___overCrankedSound;

/// [SerializeField]
/// @brief Field crankHapticStrength, offset: 0x380, size: 0x4, def value: None
 float_t  ___crankHapticStrength;

/// [SerializeField]
/// @brief Field crankHapticDuration, offset: 0x384, size: 0x4, def value: None
 float_t  ___crankHapticDuration;

/// [SerializeField]
/// @brief Field overcrankHapticStrength, offset: 0x388, size: 0x4, def value: None
 float_t  ___overcrankHapticStrength;

/// [SerializeField]
/// @brief Field overcrankHapticDuration, offset: 0x38c, size: 0x4, def value: None
 float_t  ___overcrankHapticDuration;

/// @brief Field currentCrankStrength, offset: 0x390, size: 0x4, def value: None
 float_t  ___currentCrankStrength;

/// @brief Field currentCrankClickAmount, offset: 0x394, size: 0x4, def value: None
 float_t  ___currentCrankClickAmount;

/// @brief Field _events, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Size padding 0x3d0 - 0x3a0 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___crank) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___deployedCar) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___deployablePart) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___disabledWhileDeployed) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___crankAnglePerClick) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___maxCrankStrength) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___minClickPitch) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___maxClickPitch) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___minLifetime) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___maxLifetime) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___clickSound) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___overCrankedSound) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___crankHapticStrength) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___crankHapticDuration) == 0x384, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___overcrankHapticStrength) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___overcrankHapticDuration) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___currentCrankStrength) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ___currentCrankClickAmount) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarHoldable, ____events) == 0x398, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrankableToyCarHoldable) == 0x3d0, "Size mismatch!");

} // namespace end def GlobalNamespace
