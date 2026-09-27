#pragma once
// IWYU pragma private; include "GlobalNamespace/DemoCubeATimeSliceBehaviourEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PerformanceSystems/zzzz__TimeSliceLodBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DemoCubeATimeSliceBehaviourEvents)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class DemoCubeATimeSliceBehaviourEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents*, "", "DemoCubeATimeSliceBehaviourEvents");
// Dependencies PerformanceSystems.TimeSliceLodBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DemoCubeATimeSliceBehaviourEvents
class CORDL_TYPE DemoCubeATimeSliceBehaviourEvents : public ::PerformanceSystems::TimeSliceLodBehaviour {
public:
// Declarations
/// @brief Field _green, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__green, put=__cordl_internal_set__green)) ::UnityW<::UnityEngine::Material>  _green;

/// @brief Field _iterationsOfExpensiveOp, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterationsOfExpensiveOp, put=__cordl_internal_set__iterationsOfExpensiveOp)) int32_t  _iterationsOfExpensiveOp;

/// @brief Field _red, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__red, put=__cordl_internal_set__red)) ::UnityW<::UnityEngine::Material>  _red;

/// @brief Field _renderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Method Awake, addr 0x5ae0064, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents* New_ctor() ;

/// @brief Method OnLod0Enter, addr 0x5ae00cc, size 0x40, virtual false, abstract: false, final false
inline void OnLod0Enter() ;

/// @brief Method OnLod1Enter, addr 0x5ae010c, size 0x40, virtual false, abstract: false, final false
inline void OnLod1Enter() ;

/// @brief Method OnLodExit, addr 0x5ae014c, size 0x24, virtual false, abstract: false, final false
inline void OnLodExit() ;

/// @brief Method SliceUpdate, addr 0x5ae00c8, size 0x4, virtual true, abstract: false, final false
inline void SliceUpdate(float_t  deltaTime) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__green() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__green() ;

constexpr int32_t const& __cordl_internal_get__iterationsOfExpensiveOp() const;

constexpr int32_t& __cordl_internal_get__iterationsOfExpensiveOp() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__red() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__red() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__green(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__iterationsOfExpensiveOp(int32_t  value) ;

constexpr void __cordl_internal_set__red(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x5ae0170, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DemoCubeATimeSliceBehaviourEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DemoCubeATimeSliceBehaviourEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DemoCubeATimeSliceBehaviourEvents(DemoCubeATimeSliceBehaviourEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DemoCubeATimeSliceBehaviourEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DemoCubeATimeSliceBehaviourEvents(DemoCubeATimeSliceBehaviourEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3449};

/// [SerializeField]
/// @brief Field _iterationsOfExpensiveOp, offset: 0x58, size: 0x4, def value: None
 int32_t  ____iterationsOfExpensiveOp;

/// [SerializeField]
/// @brief Field _red, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____red;

/// [SerializeField]
/// @brief Field _green, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____green;

/// @brief Field _renderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents, ____iterationsOfExpensiveOp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents, ____red) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents, ____green) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents, ____renderer) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DemoCubeATimeSliceBehaviourEvents) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
