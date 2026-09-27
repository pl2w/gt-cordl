#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_LerpRollDataWithEasing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineRoll_LerpRollDataWithEasing)
namespace GlobalNamespace {
struct CinemachineSplineRoll_RollData;
}
namespace UnityEngine::Splines {
template<typename T>
class IInterpolator_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineRoll_LerpRollDataWithEasing;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing, "Unity.Cinemachine", "CinemachineSplineRoll/LerpRollDataWithEasing");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineRoll/LerpRollDataWithEasing
#pragma pack(push, 0)
struct CORDL_TYPE CinemachineSplineRoll_LerpRollDataWithEasing {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>"
constexpr operator  ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>*() ;

/// @brief Method Interpolate, addr 0xae987d8, size 0x44, virtual true, abstract: false, final true
inline ::GlobalNamespace::CinemachineSplineRoll_RollData Interpolate(::GlobalNamespace::CinemachineSplineRoll_RollData  a, ::GlobalNamespace::CinemachineSplineRoll_RollData  b, float_t  t) ;

/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::GlobalNamespace::CinemachineSplineRoll_RollData>* i___UnityEngine__Splines__IInterpolator_1___GlobalNamespace__CinemachineSplineRoll_RollData_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineRoll_LerpRollDataWithEasing() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CinemachineSplineRoll_LerpRollDataWithEasing) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
