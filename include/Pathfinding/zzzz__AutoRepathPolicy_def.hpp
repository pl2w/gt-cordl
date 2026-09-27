#pragma once
// IWYU pragma private; include "Pathfinding/AutoRepathPolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AutoRepathPolicy_Mode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AutoRepathPolicy)
namespace GlobalNamespace {
struct AutoRepathPolicy_Mode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class AutoRepathPolicy;
}
// Write type traits
MARK_REF_T(::Pathfinding::AutoRepathPolicy*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AutoRepathPolicy*, "Pathfinding", "AutoRepathPolicy");
// Dependencies Pathfinding.AutoRepathPolicy::Mode, System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AutoRepathPolicy
class CORDL_TYPE AutoRepathPolicy : public ::System::Object {
public:
// Declarations
using Mode = ::GlobalNamespace::AutoRepathPolicy_Mode;

/// @brief Field lastDestination, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastDestination, put=__cordl_internal_set_lastDestination)) ::UnityEngine::Vector3  lastDestination;

/// @brief Field lastRepathTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRepathTime, put=__cordl_internal_set_lastRepathTime)) float_t  lastRepathTime;

/// @brief Field maximumPeriod, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumPeriod, put=__cordl_internal_set_maximumPeriod)) float_t  maximumPeriod;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::AutoRepathPolicy_Mode  mode;

/// @brief Field period, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) float_t  period;

/// @brief Field sensitivity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensitivity, put=__cordl_internal_set_sensitivity)) float_t  sensitivity;

/// @brief Field visualizeSensitivity, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_visualizeSensitivity, put=__cordl_internal_set_visualizeSensitivity)) bool  visualizeSensitivity;

/// @brief Method DidRecalculatePath, addr 0x5e56694, size 0x3c, virtual true, abstract: false, final false
inline void DidRecalculatePath(::UnityEngine::Vector3  destination) ;

/// @brief Method DrawGizmos, addr 0x5e566d0, size 0x118, virtual false, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Vector3  position, float_t  radius) ;

static inline ::Pathfinding::AutoRepathPolicy* New_ctor() ;

/// @brief Method Reset, addr 0x5e56688, size 0xc, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ShouldRecalculatePath, addr 0x5e56558, size 0x130, virtual true, abstract: false, final false
inline bool ShouldRecalculatePath(::UnityEngine::Vector3  position, float_t  radius, ::UnityEngine::Vector3  destination) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastDestination() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastDestination() ;

constexpr float_t const& __cordl_internal_get_lastRepathTime() const;

constexpr float_t& __cordl_internal_get_lastRepathTime() ;

constexpr float_t const& __cordl_internal_get_maximumPeriod() const;

constexpr float_t& __cordl_internal_get_maximumPeriod() ;

constexpr ::GlobalNamespace::AutoRepathPolicy_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::AutoRepathPolicy_Mode& __cordl_internal_get_mode() ;

constexpr float_t const& __cordl_internal_get_period() const;

constexpr float_t& __cordl_internal_get_period() ;

constexpr float_t const& __cordl_internal_get_sensitivity() const;

constexpr float_t& __cordl_internal_get_sensitivity() ;

constexpr bool const& __cordl_internal_get_visualizeSensitivity() const;

constexpr bool& __cordl_internal_get_visualizeSensitivity() ;

constexpr void __cordl_internal_set_lastDestination(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRepathTime(float_t  value) ;

constexpr void __cordl_internal_set_maximumPeriod(float_t  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::AutoRepathPolicy_Mode  value) ;

constexpr void __cordl_internal_set_period(float_t  value) ;

constexpr void __cordl_internal_set_sensitivity(float_t  value) ;

constexpr void __cordl_internal_set_visualizeSensitivity(bool  value) ;

/// @brief Method .ctor, addr 0x5e567e8, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoRepathPolicy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoRepathPolicy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoRepathPolicy(AutoRepathPolicy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoRepathPolicy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoRepathPolicy(AutoRepathPolicy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21240};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AutoRepathPolicy_Mode  ___mode;

/// [FormerlySerializedAs("interval")]
/// @brief Field period, offset: 0x14, size: 0x4, def value: None
 float_t  ___period;

/// @brief Field sensitivity, offset: 0x18, size: 0x4, def value: None
 float_t  ___sensitivity;

/// [FormerlySerializedAs("maximumInterval")]
/// @brief Field maximumPeriod, offset: 0x1c, size: 0x4, def value: None
 float_t  ___maximumPeriod;

/// @brief Field visualizeSensitivity, offset: 0x20, size: 0x1, def value: None
 bool  ___visualizeSensitivity;

/// @brief Field lastDestination, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastDestination;

/// @brief Field lastRepathTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___lastRepathTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___period) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___sensitivity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___maximumPeriod) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___visualizeSensitivity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___lastDestination) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AutoRepathPolicy, ___lastRepathTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AutoRepathPolicy) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
