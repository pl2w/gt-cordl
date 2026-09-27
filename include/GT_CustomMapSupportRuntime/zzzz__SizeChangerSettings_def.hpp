#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SizeChangerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__SizeChangerSettings_ChangerType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeChangerSettings)
namespace GlobalNamespace {
struct SizeChangerSettings_ChangerType;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class SizeChangerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::SizeChangerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::SizeChangerSettings*, "GT_CustomMapSupportRuntime", "SizeChangerSettings");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.SizeChangerSettings::ChangerType, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.SizeChangerSettings
class CORDL_TYPE SizeChangerSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ChangerType = ::GlobalNamespace::SizeChangerSettings_ChangerType;

/// @brief Field alwaysControlWhenEntered, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysControlWhenEntered, put=__cordl_internal_set_alwaysControlWhenEntered)) bool  alwaysControlWhenEntered;

/// @brief Field endPos, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_endPos, put=__cordl_internal_set_endPos)) ::UnityW<::UnityEngine::Transform>  endPos;

/// @brief Field endRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_endRadius, put=__cordl_internal_set_endRadius)) float_t  endRadius;

/// @brief Field maxScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxScale, put=__cordl_internal_set_maxScale)) float_t  maxScale;

/// @brief Field minScale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Field priority, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field scaleAwayFromPoint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaleAwayFromPoint, put=__cordl_internal_set_scaleAwayFromPoint)) ::UnityW<::UnityEngine::Transform>  scaleAwayFromPoint;

/// @brief Field startPos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPos, put=__cordl_internal_set_startPos)) ::UnityW<::UnityEngine::Transform>  startPos;

/// @brief Field startRadius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_startRadius, put=__cordl_internal_set_startRadius)) float_t  startRadius;

/// @brief Field staticEasing, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_staticEasing, put=__cordl_internal_set_staticEasing)) float_t  staticEasing;

/// @brief Field type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::SizeChangerSettings_ChangerType  type;

static inline ::GT_CustomMapSupportRuntime::SizeChangerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysControlWhenEntered() const;

constexpr bool& __cordl_internal_get_alwaysControlWhenEntered() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endPos() ;

constexpr float_t const& __cordl_internal_get_endRadius() const;

constexpr float_t& __cordl_internal_get_endRadius() ;

constexpr float_t const& __cordl_internal_get_maxScale() const;

constexpr float_t& __cordl_internal_get_maxScale() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleAwayFromPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleAwayFromPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startPos() ;

constexpr float_t const& __cordl_internal_get_startRadius() const;

constexpr float_t& __cordl_internal_get_startRadius() ;

constexpr float_t const& __cordl_internal_get_staticEasing() const;

constexpr float_t& __cordl_internal_get_staticEasing() ;

constexpr ::GlobalNamespace::SizeChangerSettings_ChangerType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::SizeChangerSettings_ChangerType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_alwaysControlWhenEntered(bool  value) ;

constexpr void __cordl_internal_set_endPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endRadius(float_t  value) ;

constexpr void __cordl_internal_set_maxScale(float_t  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_scaleAwayFromPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startRadius(float_t  value) ;

constexpr void __cordl_internal_set_staticEasing(float_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::SizeChangerSettings_ChangerType  value) ;

/// @brief Method .ctor, addr 0x9cb82c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeChangerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeChangerSettings(SizeChangerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeChangerSettings(SizeChangerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30925};

/// [Tooltip(" Type: How the zone computes size: - Static: size set by Min Scale, transition speed set by Static Easing. Max Scale is ignored. - Continuous: Max Scale at Start Pos blending to Min Scale at End Pos. - Radius: Min Scale within Start Radius of Start Pos, growing to Max Scale at or beyond End Radius.")]
/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SizeChangerSettings_ChangerType  ___type;

/// [Tooltip("Static mode only. Transition speed. Bigger number = slower transition. 0 = instant.")]
/// @brief Field staticEasing, offset: 0x24, size: 0x4, def value: None
 float_t  ___staticEasing;

/// [Tooltip("Largest size in the range.1 = normal gorilla size.Used by Continuous and Radius.Default 0 is not a valid size; set this before testing.")]
/// @brief Field maxScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxScale;

/// [Tooltip("Smallest size in the range. 1 = normal gorilla size, 0.01 = smallest possible.Static mode scales players to this value.Default 0 is not a valid size; set this before testing.")]
/// @brief Field minScale, offset: 0x2c, size: 0x4, def value: None
 float_t  ___minScale;

/// [Tooltip("Empty GameObject reference. - Continuous: start of the size gradient (Max Scale here). - Radius: the center point. Not used by Static.")]
/// @brief Field startPos, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startPos;

/// [Tooltip("Empty GameObject reference.  - Continuous only: end of the size gradient (Min Scale here).")]
/// @brief Field endPos, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endPos;

/// [Tooltip("[Optional] Scale changes reposition the player relative to this point, so scaling pivots around it instead of happening in place.Prevents clipping into geometry when growing in tight spaces.")]
/// @brief Field scaleAwayFromPoint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___scaleAwayFromPoint;

/// [Tooltip("Normally size only applies while the player\'s head is inside the collider, which thin volumes like doorways can miss.On = the zone stays active as long as the player\'s body overlaps it.")]
/// @brief Field alwaysControlWhenEntered, offset: 0x48, size: 0x1, def value: None
 bool  ___alwaysControlWhenEntered;

/// [Tooltip("Currently does nothing; leave at 0. Overlapping zones resolve as most recently entered wins. ")]
/// @brief Field priority, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___priority;

/// [Tooltip("Radius mode only. Distance from Start Pos where Min Scale applies. Inner edge of the transition.")]
/// @brief Field startRadius, offset: 0x50, size: 0x4, def value: None
 float_t  ___startRadius;

/// [Tooltip("Radius mode only. Distance from Start Pos where Max Scale applies. Outer edge of the transition.")]
/// @brief Field endRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___endRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___staticEasing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___maxScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___minScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___startPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___endPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___scaleAwayFromPoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___alwaysControlWhenEntered) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___priority) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___startRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::SizeChangerSettings, ___endRadius) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::SizeChangerSettings) == 0x58, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
