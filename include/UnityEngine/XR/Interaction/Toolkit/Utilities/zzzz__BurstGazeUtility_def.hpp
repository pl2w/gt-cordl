#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BurstGazeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstGazeUtility)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstGazeUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstGazeUtility");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstGazeUtility
class CORDL_TYPE BurstGazeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method IsAlignedToGazeForward, addr 0xb41d84c, size 0xa4, virtual false, abstract: false, final false
static inline bool IsAlignedToGazeForward(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazeDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetDirection, float_t  angleThreshold) ;

/// @brief Method IsOutsideDistanceRange, addr 0xb41d8f0, size 0x94, virtual false, abstract: false, final false
static inline bool IsOutsideDistanceRange(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazePosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPosition, float_t  distanceThreshold) ;

/// @brief Method IsOutsideGaze, addr 0xb41d774, size 0xd8, virtual false, abstract: false, final false
static inline bool IsOutsideGaze(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazePosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  gazeDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPosition, float_t  angleThreshold) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstGazeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstGazeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstGazeUtility(BurstGazeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstGazeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstGazeUtility(BurstGazeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstGazeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
