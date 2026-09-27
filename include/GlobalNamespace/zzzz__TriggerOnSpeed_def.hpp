#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerOnSpeed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TriggerOnSpeed)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerOnSpeed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerOnSpeed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerOnSpeed*, "", "TriggerOnSpeed");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerOnSpeed
class CORDL_TYPE TriggerOnSpeed : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field onFaster, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFaster, put=__cordl_internal_set_onFaster)) ::UnityEngine::Events::UnityEvent*  onFaster;

/// @brief Field onSlower, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSlower, put=__cordl_internal_set_onSlower)) ::UnityEngine::Events::UnityEvent*  onSlower;

/// @brief Field speedThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedThreshold, put=__cordl_internal_set_speedThreshold)) float_t  speedThreshold;

/// @brief Field velocityEstimator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Field wasFaster, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasFaster, put=__cordl_internal_set_wasFaster)) bool  wasFaster;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GlobalNamespace::TriggerOnSpeed* New_ctor() ;

/// @brief Method OnDisable, addr 0x565dd68, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x565dcfc, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Tick, addr 0x565ddd4, size 0xc0, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onFaster() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onFaster() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSlower() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSlower() ;

constexpr float_t const& __cordl_internal_get_speedThreshold() const;

constexpr float_t& __cordl_internal_get_speedThreshold() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr bool const& __cordl_internal_get_wasFaster() const;

constexpr bool& __cordl_internal_get_wasFaster() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_onFaster(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onSlower(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_speedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_wasFaster(bool  value) ;

/// @brief Method .ctor, addr 0x565dea4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x565de94, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x565de9c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerOnSpeed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerOnSpeed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerOnSpeed(TriggerOnSpeed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerOnSpeed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerOnSpeed(TriggerOnSpeed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{772};

/// [SerializeField]
/// @brief Field speedThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___speedThreshold;

/// [SerializeField]
/// @brief Field onFaster, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onFaster;

/// [SerializeField]
/// @brief Field onSlower, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSlower;

/// [SerializeField]
/// @brief Field velocityEstimator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field wasFaster, offset: 0x40, size: 0x1, def value: None
 bool  ___wasFaster;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ___speedThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ___onFaster) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ___onSlower) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ___velocityEstimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ___wasFaster) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerOnSpeed, ____TickRunning_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerOnSpeed) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
