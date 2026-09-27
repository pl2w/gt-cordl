#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationSoundPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationSoundPlayer)
namespace GlobalNamespace {
class RotationSoundPlayer___c;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RotationSoundPlayer;
}
namespace GlobalNamespace {
class RotationSoundPlayer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotationSoundPlayer*);
MARK_REF_T(::GlobalNamespace::RotationSoundPlayer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotationSoundPlayer*, "", "RotationSoundPlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotationSoundPlayer___c*, "", "RotationSoundPlayer/<>c");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationSoundPlayer
class CORDL_TYPE RotationSoundPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::RotationSoundPlayer___c;

/// @brief Field cooldown, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field cooldownTimer, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTimer, put=__cordl_internal_set_cooldownTimer)) float_t  cooldownTimer;

/// @brief Field initialUpAxis, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialUpAxis, put=__cordl_internal_set_initialUpAxis)) ::ArrayW<::UnityEngine::Vector3>  initialUpAxis;

/// @brief Field lastRotationSpeeds, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRotationSpeeds, put=__cordl_internal_set_lastRotationSpeeds)) ::ArrayW<float_t>  lastRotationSpeeds;

/// @brief Field lastUpAxis, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastUpAxis, put=__cordl_internal_set_lastUpAxis)) ::ArrayW<::UnityEngine::Vector3>  lastUpAxis;

/// @brief Field rotationAmountThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationAmountThreshold, put=__cordl_internal_set_rotationAmountThreshold)) float_t  rotationAmountThreshold;

/// @brief Field rotationSpeedThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeedThreshold, put=__cordl_internal_set_rotationSpeedThreshold)) float_t  rotationSpeedThreshold;

/// @brief Field soundBankPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field transforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transforms, put=__cordl_internal_set_transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  transforms;

/// @brief Method Awake, addr 0x5e07788, size 0x364, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RotationSoundPlayer* New_ctor() ;

/// @brief Method Update, addr 0x5e07aec, size 0x37c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_cooldownTimer() const;

constexpr float_t& __cordl_internal_get_cooldownTimer() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_initialUpAxis() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_initialUpAxis() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_lastRotationSpeeds() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_lastRotationSpeeds() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_lastUpAxis() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_lastUpAxis() ;

constexpr float_t const& __cordl_internal_get_rotationAmountThreshold() const;

constexpr float_t& __cordl_internal_get_rotationAmountThreshold() ;

constexpr float_t const& __cordl_internal_get_rotationSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_rotationSpeedThreshold() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_transforms() ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_cooldownTimer(float_t  value) ;

constexpr void __cordl_internal_set_initialUpAxis(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_lastRotationSpeeds(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_lastUpAxis(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_rotationAmountThreshold(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5e07e68, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationSoundPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationSoundPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationSoundPlayer(RotationSoundPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationSoundPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationSoundPlayer(RotationSoundPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{535};

/// [Tooltip("Transforms that will make a noise when they rotate.")]
/// [SerializeField]
/// @brief Field transforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___transforms;

/// [SerializeField]
/// @brief Field soundBankPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [Tooltip("How much the transform must rotate from it\'s initial rotation before a sound is played.")]
/// @brief Field rotationAmountThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___rotationAmountThreshold;

/// [Tooltip("How fast the transform must rotate before a sound is played.")]
/// @brief Field rotationSpeedThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___rotationSpeedThreshold;

/// @brief Field cooldown, offset: 0x38, size: 0x4, def value: None
 float_t  ___cooldown;

/// @brief Field cooldownTimer, offset: 0x3c, size: 0x4, def value: None
 float_t  ___cooldownTimer;

/// @brief Field initialUpAxis, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___initialUpAxis;

/// @brief Field lastUpAxis, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___lastUpAxis;

/// @brief Field lastRotationSpeeds, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ___lastRotationSpeeds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___soundBankPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___rotationAmountThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___rotationSpeedThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___cooldown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___cooldownTimer) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___initialUpAxis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___lastUpAxis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationSoundPlayer, ___lastRotationSpeeds) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotationSoundPlayer) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationSoundPlayer/<>c
class CORDL_TYPE RotationSoundPlayer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RotationSoundPlayer___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  __9__9_0;

static inline ::GlobalNamespace::RotationSoundPlayer___c* New_ctor() ;

/// @brief Method <Awake>b__9_0, addr 0x5e07ef8, size 0x5c, virtual false, abstract: false, final false
inline bool _Awake_b__9_0(::UnityEngine::Transform*  xform) ;

/// @brief Method .ctor, addr 0x5e07ef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RotationSoundPlayer___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::GlobalNamespace::RotationSoundPlayer___c*  value) ;

static inline void setStaticF___9__9_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationSoundPlayer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationSoundPlayer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationSoundPlayer___c(RotationSoundPlayer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationSoundPlayer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationSoundPlayer___c(RotationSoundPlayer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RotationSoundPlayer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
