#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseTravelData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PoseTravelData)
namespace Oculus::Interaction {
class Tween;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
struct PoseTravelData;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PoseTravelData);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseTravelData, "Oculus.Interaction", "PoseTravelData");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.PoseTravelData
struct CORDL_TYPE PoseTravelData {
public:
// Declarations
/// @brief Method CreateTween, addr 0xa4734b4, size 0xf0, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Tween* CreateTween(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method PerceivedDistance, addr 0xa475a08, size 0x53c, virtual false, abstract: false, final false
static inline float_t PerceivedDistance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method get_DEFAULT, addr 0xa47316c, size 0x54, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseTravelData get_DEFAULT() ;

/// @brief Method get_FAST, addr 0xa475084, size 0x5c, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseTravelData get_FAST() ;

// Ctor Parameters []
// @brief default ctor
constexpr PoseTravelData() ;

// Ctor Parameters [CppParam { name: "_travelSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_useFixedTravelTime", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_travelCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }]
constexpr PoseTravelData(float_t  _travelSpeed, bool  _useFixedTravelTime, ::UnityEngine::AnimationCurve*  _travelCurve) noexcept;

/// @brief Field DEGREES_TO_PERCEIVED_METERS offset 0xffffffff size 0x4
static constexpr float_t  DEGREES_TO_PERCEIVED_METERS{static_cast<float_t>(0.0013888889f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("When attracting the object, indicates the rate (in m/s, or seconds if UseFixedTravelTime is enabled) for the object to realign with the hand after a grab.")]
/// [SerializeField]
/// @brief Field _travelSpeed, offset: 0x0, size: 0x4, def value: None
 float_t  _travelSpeed;

/// [Tooltip("Changes the units of the TravelSpeed, disabled means m/s while enabled is fixed seconds")]
/// [SerializeField]
/// @brief Field _useFixedTravelTime, offset: 0x4, size: 0x1, def value: None
 bool  _useFixedTravelTime;

/// [Tooltip("Animation to use in conjunction with TravelSpeed to define the traveling motion.")]
/// [SerializeField]
/// @brief Field _travelCurve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  _travelCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseTravelData, _travelSpeed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseTravelData, _useFixedTravelTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseTravelData, _travelCurve) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseTravelData) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
