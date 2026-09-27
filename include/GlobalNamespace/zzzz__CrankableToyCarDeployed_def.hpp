#pragma once
// IWYU pragma private; include "GlobalNamespace/CrankableToyCarDeployed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrankableToyCarDeployed)
namespace GlobalNamespace {
class CrankableToyCarHoldable;
}
namespace GlobalNamespace {
class FakeWheelDriver;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrankableToyCarDeployed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrankableToyCarDeployed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrankableToyCarDeployed*, "", "CrankableToyCarDeployed");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrankableToyCarDeployed
class CORDL_TYPE CrankableToyCarDeployed : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field drivingAudio, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_drivingAudio, put=__cordl_internal_set_drivingAudio)) ::UnityW<::UnityEngine::AudioSource>  drivingAudio;

/// @brief Field expiresAtTimestamp, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_expiresAtTimestamp, put=__cordl_internal_set_expiresAtTimestamp)) float_t  expiresAtTimestamp;

/// @brief Field holdable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdable, put=__cordl_internal_set_holdable)) ::UnityW<::GlobalNamespace::CrankableToyCarHoldable>  holdable;

/// @brief Field isRemote, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRemote, put=__cordl_internal_set_isRemote)) bool  isRemote;

/// @brief Field maxThrust, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_maxThrust, put=__cordl_internal_set_maxThrust)) ::UnityEngine::Vector3  maxThrust;

/// @brief Field offGroundDrivingAudio, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_offGroundDrivingAudio, put=__cordl_internal_set_offGroundDrivingAudio)) ::UnityW<::UnityEngine::AudioSource>  offGroundDrivingAudio;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field startedAtTimestamp, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_startedAtTimestamp, put=__cordl_internal_set_startedAtTimestamp)) float_t  startedAtTimestamp;

/// @brief Field thrustCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_thrustCurve, put=__cordl_internal_set_thrustCurve)) ::UnityEngine::AnimationCurve*  thrustCurve;

/// @brief Field wheelDriver, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelDriver, put=__cordl_internal_set_wheelDriver)) ::UnityW<::GlobalNamespace::FakeWheelDriver>  wheelDriver;

/// @brief Method Deploy, addr 0x5648990, size 0x140, virtual false, abstract: false, final false
inline void Deploy(::GlobalNamespace::CrankableToyCarHoldable*  holdable, ::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, float_t  lifetime, bool  isRemote) ;

static inline ::GlobalNamespace::CrankableToyCarDeployed* New_ctor() ;

/// @brief Method Update, addr 0x5648b14, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_drivingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_drivingAudio() ;

constexpr float_t const& __cordl_internal_get_expiresAtTimestamp() const;

constexpr float_t& __cordl_internal_get_expiresAtTimestamp() ;

constexpr ::UnityW<::GlobalNamespace::CrankableToyCarHoldable> const& __cordl_internal_get_holdable() const;

constexpr ::UnityW<::GlobalNamespace::CrankableToyCarHoldable>& __cordl_internal_get_holdable() ;

constexpr bool const& __cordl_internal_get_isRemote() const;

constexpr bool& __cordl_internal_get_isRemote() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_maxThrust() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_maxThrust() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_offGroundDrivingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_offGroundDrivingAudio() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_startedAtTimestamp() const;

constexpr float_t& __cordl_internal_get_startedAtTimestamp() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_thrustCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_thrustCurve() ;

constexpr ::UnityW<::GlobalNamespace::FakeWheelDriver> const& __cordl_internal_get_wheelDriver() const;

constexpr ::UnityW<::GlobalNamespace::FakeWheelDriver>& __cordl_internal_get_wheelDriver() ;

constexpr void __cordl_internal_set_drivingAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_expiresAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_holdable(::UnityW<::GlobalNamespace::CrankableToyCarHoldable>  value) ;

constexpr void __cordl_internal_set_isRemote(bool  value) ;

constexpr void __cordl_internal_set_maxThrust(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offGroundDrivingAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_startedAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_thrustCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_wheelDriver(::UnityW<::GlobalNamespace::FakeWheelDriver>  value) ;

/// @brief Method .ctor, addr 0x5648d08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrankableToyCarDeployed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrankableToyCarDeployed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrankableToyCarDeployed(CrankableToyCarDeployed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrankableToyCarDeployed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrankableToyCarDeployed(CrankableToyCarDeployed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{699};

/// [SerializeField]
/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [SerializeField]
/// @brief Field wheelDriver, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FakeWheelDriver>  ___wheelDriver;

/// [SerializeField]
/// @brief Field maxThrust, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___maxThrust;

/// [SerializeField]
/// @brief Field thrustCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___thrustCurve;

/// @brief Field startedAtTimestamp, offset: 0x48, size: 0x4, def value: None
 float_t  ___startedAtTimestamp;

/// @brief Field expiresAtTimestamp, offset: 0x4c, size: 0x4, def value: None
 float_t  ___expiresAtTimestamp;

/// @brief Field holdable, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrankableToyCarHoldable>  ___holdable;

/// [SerializeField]
/// @brief Field drivingAudio, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___drivingAudio;

/// [SerializeField]
/// @brief Field offGroundDrivingAudio, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___offGroundDrivingAudio;

/// @brief Field isRemote, offset: 0x68, size: 0x1, def value: None
 bool  ___isRemote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___wheelDriver) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___maxThrust) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___thrustCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___startedAtTimestamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___expiresAtTimestamp) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___holdable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___drivingAudio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___offGroundDrivingAudio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrankableToyCarDeployed, ___isRemote) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrankableToyCarDeployed) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
