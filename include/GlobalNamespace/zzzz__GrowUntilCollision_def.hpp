#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowUntilCollision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrowUntilCollision)
namespace GlobalNamespace {
class LightningDispatcherEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GrowUntilCollision;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrowUntilCollision*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrowUntilCollision*, "", "GrowUntilCollision");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrowUntilCollision
class CORDL_TYPE GrowUntilCollision : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field colliderFound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderFound, put=__cordl_internal_set_colliderFound)) ::GlobalNamespace::LightningDispatcherEvent*  colliderFound;

/// @brief Field initialRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialRadius, put=__cordl_internal_set_initialRadius)) float_t  initialRadius;

/// @brief Field maxPitch, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPitch, put=__cordl_internal_set_maxPitch)) float_t  maxPitch;

/// @brief Field maxSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSize, put=__cordl_internal_set_maxSize)) float_t  maxSize;

/// @brief Field maxVolume, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field minRetriggerTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRetriggerTime, put=__cordl_internal_set_minRetriggerTime)) float_t  minRetriggerTime;

/// @brief Field timeSinceTrigger, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceTrigger, put=__cordl_internal_set_timeSinceTrigger)) float_t  timeSinceTrigger;

static inline ::GlobalNamespace::GrowUntilCollision* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5b2de6c, size 0xb8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x5b2df24, size 0xb8, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

/// @brief Method OnTriggerEnter, addr 0x5b2dc98, size 0x88, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5b2dde4, size 0x88, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x5b2dac4, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5b2dfdc, size 0x2a8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::LightningDispatcherEvent* const& __cordl_internal_get_colliderFound() const;

constexpr ::GlobalNamespace::LightningDispatcherEvent*& __cordl_internal_get_colliderFound() ;

constexpr float_t const& __cordl_internal_get_initialRadius() const;

constexpr float_t& __cordl_internal_get_initialRadius() ;

constexpr float_t const& __cordl_internal_get_maxPitch() const;

constexpr float_t& __cordl_internal_get_maxPitch() ;

constexpr float_t const& __cordl_internal_get_maxSize() const;

constexpr float_t& __cordl_internal_get_maxSize() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr float_t const& __cordl_internal_get_minRetriggerTime() const;

constexpr float_t& __cordl_internal_get_minRetriggerTime() ;

constexpr float_t const& __cordl_internal_get_timeSinceTrigger() const;

constexpr float_t& __cordl_internal_get_timeSinceTrigger() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value) ;

constexpr void __cordl_internal_set_initialRadius(float_t  value) ;

constexpr void __cordl_internal_set_maxPitch(float_t  value) ;

constexpr void __cordl_internal_set_maxSize(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_minRetriggerTime(float_t  value) ;

constexpr void __cordl_internal_set_timeSinceTrigger(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2e284, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method tryToTrigger, addr 0x5b2dd20, size 0xc4, virtual false, abstract: false, final false
inline void tryToTrigger(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

/// @brief Method zero, addr 0x5b2db98, size 0x100, virtual false, abstract: false, final false
inline void zero() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrowUntilCollision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrowUntilCollision", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrowUntilCollision(GrowUntilCollision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrowUntilCollision", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrowUntilCollision(GrowUntilCollision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3646};

/// [SerializeField]
/// @brief Field maxSize, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxSize;

/// [SerializeField]
/// @brief Field initialRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___initialRadius;

/// [SerializeField]
/// @brief Field minRetriggerTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___minRetriggerTime;

/// [SerializeField]
/// @brief Field colliderFound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::LightningDispatcherEvent*  ___colliderFound;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field maxVolume, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxVolume;

/// @brief Field maxPitch, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxPitch;

/// @brief Field timeSinceTrigger, offset: 0x48, size: 0x4, def value: None
 float_t  ___timeSinceTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___maxSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___initialRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___minRetriggerTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___colliderFound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___maxVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___maxPitch) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowUntilCollision, ___timeSinceTrigger) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrowUntilCollision) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
