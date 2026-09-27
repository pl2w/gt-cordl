#pragma once
// IWYU pragma private; include "GlobalNamespace/RCHoverboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RCHoverboard__SingleInputOption_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCHoverboard)
namespace GlobalNamespace {
struct RCHoverboard__EInputSource;
}
namespace GlobalNamespace {
struct RCHoverboard__SingleInputOption;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class RCHoverboard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RCHoverboard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCHoverboard*, "", "RCHoverboard");
// Dependencies GorillaTag.Cosmetics.RCVehicle, RCHoverboard::_SingleInputOption, Unity.Mathematics.float2, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: RCHoverboard
class CORDL_TYPE RCHoverboard : public ::GorillaTag::Cosmetics::RCVehicle {
public:
// Declarations
using _EInputSource = ::GlobalNamespace::RCHoverboard__EInputSource;

using _SingleInputOption = ::GlobalNamespace::RCHoverboard__SingleInputOption;

 __declspec(property(get=get__MaxForwardSpeed, put=set__MaxForwardSpeed)) float_t  _MaxForwardSpeed;

 __declspec(property(get=get__MaxTiltAngle, put=set__MaxTiltAngle)) float_t  _MaxTiltAngle;

 __declspec(property(get=get__MaxTurnRate, put=set__MaxTurnRate)) float_t  _MaxTurnRate;

/// @brief Field _currentTiltAngle, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTiltAngle, put=__cordl_internal_set__currentTiltAngle)) float_t  _currentTiltAngle;

/// @brief Field _currentTurnAngle, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTurnAngle, put=__cordl_internal_set__currentTurnAngle)) float_t  _currentTurnAngle;

/// @brief Field _currentTurnRate, offset 0x27c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTurnRate, put=__cordl_internal_set__currentTurnRate)) float_t  _currentTurnRate;

/// @brief Field _forwardAccel, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get__forwardAccel, put=__cordl_internal_set__forwardAccel)) float_t  _forwardAccel;

/// @brief Field _hasAudioSource, offset 0x26c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasAudioSource, put=__cordl_internal_set__hasAudioSource)) bool  _hasAudioSource;

/// @brief Field _hasHoverSound, offset 0x26d, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasHoverSound, put=__cordl_internal_set__hasHoverSound)) bool  _hasHoverSound;

/// @brief Field _hasJumped, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasJumped, put=__cordl_internal_set__hasJumped)) bool  _hasJumped;

/// @brief Field _motorLevel, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get__motorLevel, put=__cordl_internal_set__motorLevel)) float_t  _motorLevel;

/// @brief Field _tiltAccel, offset 0x278, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiltAccel, put=__cordl_internal_set__tiltAccel)) float_t  _tiltAccel;

/// @brief Field _turnAccel, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get__turnAccel, put=__cordl_internal_set__turnAccel)) float_t  _turnAccel;

/// @brief Field enableJumpInput, offset 0x228, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableJumpInput, put=__cordl_internal_set_enableJumpInput)) bool  enableJumpInput;

/// @brief Field m_audioSource, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_audioSource, put=__cordl_internal_set_m_audioSource)) ::UnityW<::UnityEngine::AudioSource>  m_audioSource;

/// @brief Field m_forwardAccelTime, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_forwardAccelTime, put=__cordl_internal_set_m_forwardAccelTime)) float_t  m_forwardAccelTime;

/// @brief Field m_hoverDamp, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hoverDamp, put=__cordl_internal_set_m_hoverDamp)) float_t  m_hoverDamp;

/// @brief Field m_hoverForce, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hoverForce, put=__cordl_internal_set_m_hoverForce)) float_t  m_hoverForce;

/// @brief Field m_hoverHeight, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hoverHeight, put=__cordl_internal_set_m_hoverHeight)) float_t  m_hoverHeight;

/// @brief Field m_hoverSound, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_hoverSound, put=__cordl_internal_set_m_hoverSound)) ::UnityW<::UnityEngine::AudioClip>  m_hoverSound;

/// @brief Field m_hoverSoundVolumeMinMax, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_hoverSoundVolumeMinMax, put=__cordl_internal_set_m_hoverSoundVolumeMinMax)) ::Unity::Mathematics::float2  m_hoverSoundVolumeMinMax;

/// @brief Field m_hoverSoundVolumeRampTime, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hoverSoundVolumeRampTime, put=__cordl_internal_set_m_hoverSoundVolumeRampTime)) float_t  m_hoverSoundVolumeRampTime;

/// @brief Field m_inputJump, offset 0x1e8, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_inputJump, put=__cordl_internal_set_m_inputJump)) ::GlobalNamespace::RCHoverboard__SingleInputOption  m_inputJump;

/// @brief Field m_inputThrustBack, offset 0x1b8, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_inputThrustBack, put=__cordl_internal_set_m_inputThrustBack)) ::GlobalNamespace::RCHoverboard__SingleInputOption  m_inputThrustBack;

/// @brief Field m_inputThrustForward, offset 0x188, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_inputThrustForward, put=__cordl_internal_set_m_inputThrustForward)) ::GlobalNamespace::RCHoverboard__SingleInputOption  m_inputThrustForward;

/// @brief Field m_inputTurn, offset 0x158, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_inputTurn, put=__cordl_internal_set_m_inputTurn)) ::GlobalNamespace::RCHoverboard__SingleInputOption  m_inputTurn;

/// @brief Field m_jumpForce, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_jumpForce, put=__cordl_internal_set_m_jumpForce)) float_t  m_jumpForce;

/// @brief Field m_maxForwardSpeed, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxForwardSpeed, put=__cordl_internal_set_m_maxForwardSpeed)) float_t  m_maxForwardSpeed;

/// @brief Field m_maxTiltAngle, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxTiltAngle, put=__cordl_internal_set_m_maxTiltAngle)) float_t  m_maxTiltAngle;

/// @brief Field m_maxTurnRate, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxTurnRate, put=__cordl_internal_set_m_maxTurnRate)) float_t  m_maxTurnRate;

/// @brief Field m_tiltTime, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_tiltTime, put=__cordl_internal_set_m_tiltTime)) float_t  m_tiltTime;

/// @brief Field m_turnAccelTime, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_turnAccelTime, put=__cordl_internal_set_m_turnAccelTime)) float_t  m_turnAccelTime;

/// @brief Field raycastLayers, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastLayers, put=__cordl_internal_set_raycastLayers)) ::UnityEngine::LayerMask  raycastLayers;

/// @brief Method AuthorityBeginDocked, addr 0x56167bc, size 0x14c, virtual true, abstract: false, final false
inline void AuthorityBeginDocked() ;

/// @brief Method AuthorityUpdate, addr 0x5616908, size 0x100, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method Awake, addr 0x56166b8, size 0x104, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5616b90, size 0x608, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::RCHoverboard* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5617314, size 0x3cc, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method RemoteUpdate, addr 0x5616a08, size 0x54, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method SharedUpdate, addr 0x5616a5c, size 0x134, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

/// @brief Method _MoveTowards, addr 0x56176e0, size 0x38, virtual false, abstract: false, final false
inline float_t _MoveTowards(float_t  current, float_t  target, float_t  maxDelta) ;

/// @brief Method _ProjectOnPlane, addr 0x56178dc, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 _ProjectOnPlane(::Unity::Mathematics::float3  vector, ::Unity::Mathematics::float3  planeNormal) ;

/// @brief Method _SignedAngle, addr 0x5617718, size 0x1c4, virtual false, abstract: false, final false
inline float_t _SignedAngle(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  axis) ;

constexpr float_t const& __cordl_internal_get__currentTiltAngle() const;

constexpr float_t& __cordl_internal_get__currentTiltAngle() ;

constexpr float_t const& __cordl_internal_get__currentTurnAngle() const;

constexpr float_t& __cordl_internal_get__currentTurnAngle() ;

constexpr float_t const& __cordl_internal_get__currentTurnRate() const;

constexpr float_t& __cordl_internal_get__currentTurnRate() ;

constexpr float_t const& __cordl_internal_get__forwardAccel() const;

constexpr float_t& __cordl_internal_get__forwardAccel() ;

constexpr bool const& __cordl_internal_get__hasAudioSource() const;

constexpr bool& __cordl_internal_get__hasAudioSource() ;

constexpr bool const& __cordl_internal_get__hasHoverSound() const;

constexpr bool& __cordl_internal_get__hasHoverSound() ;

constexpr bool const& __cordl_internal_get__hasJumped() const;

constexpr bool& __cordl_internal_get__hasJumped() ;

constexpr float_t const& __cordl_internal_get__motorLevel() const;

constexpr float_t& __cordl_internal_get__motorLevel() ;

constexpr float_t const& __cordl_internal_get__tiltAccel() const;

constexpr float_t& __cordl_internal_get__tiltAccel() ;

constexpr float_t const& __cordl_internal_get__turnAccel() const;

constexpr float_t& __cordl_internal_get__turnAccel() ;

constexpr bool const& __cordl_internal_get_enableJumpInput() const;

constexpr bool& __cordl_internal_get_enableJumpInput() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_audioSource() ;

constexpr float_t const& __cordl_internal_get_m_forwardAccelTime() const;

constexpr float_t& __cordl_internal_get_m_forwardAccelTime() ;

constexpr float_t const& __cordl_internal_get_m_hoverDamp() const;

constexpr float_t& __cordl_internal_get_m_hoverDamp() ;

constexpr float_t const& __cordl_internal_get_m_hoverForce() const;

constexpr float_t& __cordl_internal_get_m_hoverForce() ;

constexpr float_t const& __cordl_internal_get_m_hoverHeight() const;

constexpr float_t& __cordl_internal_get_m_hoverHeight() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_hoverSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_hoverSound() ;

constexpr ::Unity::Mathematics::float2 const& __cordl_internal_get_m_hoverSoundVolumeMinMax() const;

constexpr ::Unity::Mathematics::float2& __cordl_internal_get_m_hoverSoundVolumeMinMax() ;

constexpr float_t const& __cordl_internal_get_m_hoverSoundVolumeRampTime() const;

constexpr float_t& __cordl_internal_get_m_hoverSoundVolumeRampTime() ;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& __cordl_internal_get_m_inputJump() const;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& __cordl_internal_get_m_inputJump() ;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& __cordl_internal_get_m_inputThrustBack() const;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& __cordl_internal_get_m_inputThrustBack() ;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& __cordl_internal_get_m_inputThrustForward() const;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& __cordl_internal_get_m_inputThrustForward() ;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& __cordl_internal_get_m_inputTurn() const;

constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& __cordl_internal_get_m_inputTurn() ;

constexpr float_t const& __cordl_internal_get_m_jumpForce() const;

constexpr float_t& __cordl_internal_get_m_jumpForce() ;

constexpr float_t const& __cordl_internal_get_m_maxForwardSpeed() const;

constexpr float_t& __cordl_internal_get_m_maxForwardSpeed() ;

constexpr float_t const& __cordl_internal_get_m_maxTiltAngle() const;

constexpr float_t& __cordl_internal_get_m_maxTiltAngle() ;

constexpr float_t const& __cordl_internal_get_m_maxTurnRate() const;

constexpr float_t& __cordl_internal_get_m_maxTurnRate() ;

constexpr float_t const& __cordl_internal_get_m_tiltTime() const;

constexpr float_t& __cordl_internal_get_m_tiltTime() ;

constexpr float_t const& __cordl_internal_get_m_turnAccelTime() const;

constexpr float_t& __cordl_internal_get_m_turnAccelTime() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raycastLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raycastLayers() ;

constexpr void __cordl_internal_set__currentTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set__currentTurnAngle(float_t  value) ;

constexpr void __cordl_internal_set__currentTurnRate(float_t  value) ;

constexpr void __cordl_internal_set__forwardAccel(float_t  value) ;

constexpr void __cordl_internal_set__hasAudioSource(bool  value) ;

constexpr void __cordl_internal_set__hasHoverSound(bool  value) ;

constexpr void __cordl_internal_set__hasJumped(bool  value) ;

constexpr void __cordl_internal_set__motorLevel(float_t  value) ;

constexpr void __cordl_internal_set__tiltAccel(float_t  value) ;

constexpr void __cordl_internal_set__turnAccel(float_t  value) ;

constexpr void __cordl_internal_set_enableJumpInput(bool  value) ;

constexpr void __cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_forwardAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_m_hoverDamp(float_t  value) ;

constexpr void __cordl_internal_set_m_hoverForce(float_t  value) ;

constexpr void __cordl_internal_set_m_hoverHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_hoverSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_hoverSoundVolumeMinMax(::Unity::Mathematics::float2  value) ;

constexpr void __cordl_internal_set_m_hoverSoundVolumeRampTime(float_t  value) ;

constexpr void __cordl_internal_set_m_inputJump(::GlobalNamespace::RCHoverboard__SingleInputOption  value) ;

constexpr void __cordl_internal_set_m_inputThrustBack(::GlobalNamespace::RCHoverboard__SingleInputOption  value) ;

constexpr void __cordl_internal_set_m_inputThrustForward(::GlobalNamespace::RCHoverboard__SingleInputOption  value) ;

constexpr void __cordl_internal_set_m_inputTurn(::GlobalNamespace::RCHoverboard__SingleInputOption  value) ;

constexpr void __cordl_internal_set_m_jumpForce(float_t  value) ;

constexpr void __cordl_internal_set_m_maxForwardSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_maxTiltAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_maxTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_m_tiltTime(float_t  value) ;

constexpr void __cordl_internal_set_m_turnAccelTime(float_t  value) ;

constexpr void __cordl_internal_set_raycastLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x561790c, size 0x4c8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__MaxForwardSpeed, addr 0x5616604, size 0x8, virtual false, abstract: false, final false
inline float_t get__MaxForwardSpeed() ;

/// @brief Method get__MaxTiltAngle, addr 0x561667c, size 0x8, virtual false, abstract: false, final false
inline float_t get__MaxTiltAngle() ;

/// @brief Method get__MaxTurnRate, addr 0x5616640, size 0x8, virtual false, abstract: false, final false
inline float_t get__MaxTurnRate() ;

/// @brief Method set__MaxForwardSpeed, addr 0x561660c, size 0x34, virtual false, abstract: false, final false
inline void set__MaxForwardSpeed(float_t  value) ;

/// @brief Method set__MaxTiltAngle, addr 0x5616684, size 0x34, virtual false, abstract: false, final false
inline void set__MaxTiltAngle(float_t  value) ;

/// @brief Method set__MaxTurnRate, addr 0x5616648, size 0x34, virtual false, abstract: false, final false
inline void set__MaxTurnRate(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCHoverboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCHoverboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCHoverboard(RCHoverboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCHoverboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCHoverboard(RCHoverboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{559};

/// [SerializeField]
/// @brief Field m_inputTurn, offset: 0x158, size: 0x30, def value: None
 ::GlobalNamespace::RCHoverboard__SingleInputOption  ___m_inputTurn;

/// [SerializeField]
/// @brief Field m_inputThrustForward, offset: 0x188, size: 0x30, def value: None
 ::GlobalNamespace::RCHoverboard__SingleInputOption  ___m_inputThrustForward;

/// [SerializeField]
/// @brief Field m_inputThrustBack, offset: 0x1b8, size: 0x30, def value: None
 ::GlobalNamespace::RCHoverboard__SingleInputOption  ___m_inputThrustBack;

/// [SerializeField]
/// @brief Field m_inputJump, offset: 0x1e8, size: 0x30, def value: None
 ::GlobalNamespace::RCHoverboard__SingleInputOption  ___m_inputJump;

/// [Tooltip("Desired hover height above ground from this transform\'s position.")]
/// [SerializeField]
/// @brief Field m_hoverHeight, offset: 0x218, size: 0x4, def value: None
 float_t  ___m_hoverHeight;

/// [Tooltip("Upward force to maintain hover when below hoverHeight.")]
/// [SerializeField]
/// @brief Field m_hoverForce, offset: 0x21c, size: 0x4, def value: None
 float_t  ___m_hoverForce;

/// [Tooltip("Damping factor to smooth out vertical movement.")]
/// [SerializeField]
/// @brief Field m_hoverDamp, offset: 0x220, size: 0x4, def value: None
 float_t  ___m_hoverDamp;

/// [SerializeField]
/// @brief Field raycastLayers, offset: 0x224, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___raycastLayers;

/// [SerializeField]
/// @brief Field enableJumpInput, offset: 0x228, size: 0x1, def value: None
 bool  ___enableJumpInput;

/// [Tooltip("Upward impulse force for jump.")]
/// [SerializeField]
/// @brief Field m_jumpForce, offset: 0x22c, size: 0x4, def value: None
 float_t  ___m_jumpForce;

/// @brief Field _hasJumped, offset: 0x230, size: 0x1, def value: None
 bool  ____hasJumped;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_maxForwardSpeed, offset: 0x234, size: 0x4, def value: None
 float_t  ___m_maxForwardSpeed;

/// [SerializeField]
/// [Tooltip("Time (seconds) to reach max forward speed from zero.")]
/// @brief Field m_forwardAccelTime, offset: 0x238, size: 0x4, def value: None
 float_t  ___m_forwardAccelTime;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_maxTurnRate, offset: 0x23c, size: 0x4, def value: None
 float_t  ___m_maxTurnRate;

/// [Tooltip("Time (seconds) to reach max turning rate.")]
/// [SerializeField]
/// @brief Field m_turnAccelTime, offset: 0x240, size: 0x4, def value: None
 float_t  ___m_turnAccelTime;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_maxTiltAngle, offset: 0x244, size: 0x4, def value: None
 float_t  ___m_maxTiltAngle;

/// [Tooltip("Time (seconds) to reach max tilt angle.")]
/// [SerializeField]
/// @brief Field m_tiltTime, offset: 0x248, size: 0x4, def value: None
 float_t  ___m_tiltTime;

/// [Tooltip("Audio source for any motor or hover sound.")]
/// [SerializeField]
/// @brief Field m_audioSource, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_audioSource;

/// [Tooltip("Looping motor/hover sound clip.")]
/// [SerializeField]
/// @brief Field m_hoverSound, offset: 0x258, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_hoverSound;

/// [Tooltip("Volume range for the hover sound (x = min, y = max).")]
/// [SerializeField]
/// @brief Field m_hoverSoundVolumeMinMax, offset: 0x260, size: 0x8, def value: None
 ::Unity::Mathematics::float2  ___m_hoverSoundVolumeMinMax;

/// [Tooltip("Time it takes for the volume to reach max value.")]
/// [SerializeField]
/// @brief Field m_hoverSoundVolumeRampTime, offset: 0x268, size: 0x4, def value: None
 float_t  ___m_hoverSoundVolumeRampTime;

/// @brief Field _hasAudioSource, offset: 0x26c, size: 0x1, def value: None
 bool  ____hasAudioSource;

/// @brief Field _hasHoverSound, offset: 0x26d, size: 0x1, def value: None
 bool  ____hasHoverSound;

/// @brief Field _forwardAccel, offset: 0x270, size: 0x4, def value: None
 float_t  ____forwardAccel;

/// @brief Size padding 0x270 - 0x290 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// @brief Field _turnAccel, offset: 0x274, size: 0x4, def value: None
 float_t  ____turnAccel;

/// @brief Field _tiltAccel, offset: 0x278, size: 0x4, def value: None
 float_t  ____tiltAccel;

/// @brief Field _currentTurnRate, offset: 0x27c, size: 0x4, def value: None
 float_t  ____currentTurnRate;

/// @brief Field _currentTurnAngle, offset: 0x280, size: 0x4, def value: None
 float_t  ____currentTurnAngle;

/// @brief Field _currentTiltAngle, offset: 0x284, size: 0x4, def value: None
 float_t  ____currentTiltAngle;

/// @brief Field _motorLevel, offset: 0x288, size: 0x4, def value: None
 float_t  ____motorLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_inputTurn) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_inputThrustForward) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_inputThrustBack) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_inputJump) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverHeight) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverForce) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverDamp) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___raycastLayers) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___enableJumpInput) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_jumpForce) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____hasJumped) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_maxForwardSpeed) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_forwardAccelTime) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_maxTurnRate) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_turnAccelTime) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_maxTiltAngle) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_tiltTime) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_audioSource) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverSound) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverSoundVolumeMinMax) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ___m_hoverSoundVolumeRampTime) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____hasAudioSource) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____hasHoverSound) == 0x26d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____forwardAccel) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____turnAccel) == 0x274, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____tiltAccel) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____currentTurnRate) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____currentTurnAngle) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____currentTiltAngle) == 0x284, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCHoverboard, ____motorLevel) == 0x288, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCHoverboard) == 0x270, "Size mismatch!");

} // namespace end def GlobalNamespace
