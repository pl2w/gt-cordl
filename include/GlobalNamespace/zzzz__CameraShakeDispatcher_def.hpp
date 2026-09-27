#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraShakeDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CameraShakeDispatcher)
// Forward declare root types
namespace GlobalNamespace {
class CameraShakeDispatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CameraShakeDispatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraShakeDispatcher*, "", "CameraShakeDispatcher");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CameraShakeDispatcher
class CORDL_TYPE CameraShakeDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field duration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field freqRange, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_freqRange, put=__cordl_internal_set_freqRange)) ::UnityEngine::Vector2  freqRange;

/// @brief Field haltOnDisable, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_haltOnDisable, put=__cordl_internal_set_haltOnDisable)) bool  haltOnDisable;

/// @brief Field magnitude, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitude, put=__cordl_internal_set_magnitude)) float_t  magnitude;

/// @brief Field maxDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field rollOffOverDuration, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_rollOffOverDuration, put=__cordl_internal_set_rollOffOverDuration)) bool  rollOffOverDuration;

/// @brief Field shakeOnEnable, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_shakeOnEnable, put=__cordl_internal_set_shakeOnEnable)) bool  shakeOnEnable;

/// @brief Method Halt, addr 0x55ec7e0, size 0x4, virtual false, abstract: false, final false
inline void Halt() ;

static inline ::GlobalNamespace::CameraShakeDispatcher* New_ctor() ;

/// @brief Method OnDisable, addr 0x55ec7d0, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x55ec73c, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Shake, addr 0x55ec7c0, size 0x10, virtual false, abstract: false, final false
inline void Shake() ;

/// @brief Method ShakeInProximity, addr 0x55ec768, size 0x58, virtual false, abstract: false, final false
inline void ShakeInProximity(float_t  distance) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_freqRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_freqRange() ;

constexpr bool const& __cordl_internal_get_haltOnDisable() const;

constexpr bool& __cordl_internal_get_haltOnDisable() ;

constexpr float_t const& __cordl_internal_get_magnitude() const;

constexpr float_t& __cordl_internal_get_magnitude() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr bool const& __cordl_internal_get_rollOffOverDuration() const;

constexpr bool& __cordl_internal_get_rollOffOverDuration() ;

constexpr bool const& __cordl_internal_get_shakeOnEnable() const;

constexpr bool& __cordl_internal_get_shakeOnEnable() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_freqRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_haltOnDisable(bool  value) ;

constexpr void __cordl_internal_set_magnitude(float_t  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_rollOffOverDuration(bool  value) ;

constexpr void __cordl_internal_set_shakeOnEnable(bool  value) ;

/// @brief Method .ctor, addr 0x55ec9c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraShakeDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraShakeDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraShakeDispatcher(CameraShakeDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraShakeDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraShakeDispatcher(CameraShakeDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{54};

/// [SerializeField]
/// @brief Field magnitude, offset: 0x20, size: 0x4, def value: None
 float_t  ___magnitude;

/// [SerializeField]
/// @brief Field duration, offset: 0x24, size: 0x4, def value: None
 float_t  ___duration;

/// [SerializeField]
/// @brief Field rollOffOverDuration, offset: 0x28, size: 0x1, def value: None
 bool  ___rollOffOverDuration;

/// [SerializeField]
/// @brief Field shakeOnEnable, offset: 0x29, size: 0x1, def value: None
 bool  ___shakeOnEnable;

/// [SerializeField]
/// @brief Field haltOnDisable, offset: 0x2a, size: 0x1, def value: None
 bool  ___haltOnDisable;

/// [SerializeField]
/// @brief Field freqRange, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___freqRange;

/// [SerializeField]
/// @brief Field maxDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___magnitude) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___duration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___rollOffOverDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___shakeOnEnable) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___haltOnDisable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___freqRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraShakeDispatcher, ___maxDistance) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraShakeDispatcher) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
