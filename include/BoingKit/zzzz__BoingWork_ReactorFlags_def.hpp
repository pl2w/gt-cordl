#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_ReactorFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWork_ReactorFlags)
// Forward declare root types
namespace GlobalNamespace {
struct BoingWork_ReactorFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingWork_ReactorFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingWork_ReactorFlags, "BoingKit", "BoingWork/ReactorFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWork/ReactorFlags
struct CORDL_TYPE BoingWork_ReactorFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoingWork_ReactorFlags_Unwrapped
enum struct __BoingWork_ReactorFlags_Unwrapped : int32_t {
__E_TwoDDistanceCheck = static_cast<int32_t>(0x0),
__E_TwoDPositionInfluence = static_cast<int32_t>(0x1),
__E_TwoDRotationInfluence = static_cast<int32_t>(0x2),
__E_EnablePositionEffect = static_cast<int32_t>(0x3),
__E_EnableRotationEffect = static_cast<int32_t>(0x4),
__E_EnableScaleEffect = static_cast<int32_t>(0x5),
__E_GlobalReactionUpVector = static_cast<int32_t>(0x6),
__E_EnablePropagation = static_cast<int32_t>(0x7),
__E_AnchorPropagationAtBorder = static_cast<int32_t>(0x8),
__E_FixedUpdate = static_cast<int32_t>(0x9),
__E_EarlyUpdate = static_cast<int32_t>(0xa),
__E_LateUpdate = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoingWork_ReactorFlags_Unwrapped () const noexcept {
return static_cast<__BoingWork_ReactorFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoingWork_ReactorFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingWork_ReactorFlags(int32_t  value__) noexcept;

/// @brief Field AnchorPropagationAtBorder value: I32(8)
static ::GlobalNamespace::BoingWork_ReactorFlags const AnchorPropagationAtBorder;

/// @brief Field EarlyUpdate value: I32(10)
static ::GlobalNamespace::BoingWork_ReactorFlags const EarlyUpdate;

/// @brief Field EnablePositionEffect value: I32(3)
static ::GlobalNamespace::BoingWork_ReactorFlags const EnablePositionEffect;

/// @brief Field EnablePropagation value: I32(7)
static ::GlobalNamespace::BoingWork_ReactorFlags const EnablePropagation;

/// @brief Field EnableRotationEffect value: I32(4)
static ::GlobalNamespace::BoingWork_ReactorFlags const EnableRotationEffect;

/// @brief Field EnableScaleEffect value: I32(5)
static ::GlobalNamespace::BoingWork_ReactorFlags const EnableScaleEffect;

/// @brief Field FixedUpdate value: I32(9)
static ::GlobalNamespace::BoingWork_ReactorFlags const FixedUpdate;

/// @brief Field GlobalReactionUpVector value: I32(6)
static ::GlobalNamespace::BoingWork_ReactorFlags const GlobalReactionUpVector;

/// @brief Field LateUpdate value: I32(11)
static ::GlobalNamespace::BoingWork_ReactorFlags const LateUpdate;

/// @brief Field TwoDDistanceCheck value: I32(0)
static ::GlobalNamespace::BoingWork_ReactorFlags const TwoDDistanceCheck;

/// @brief Field TwoDPositionInfluence value: I32(1)
static ::GlobalNamespace::BoingWork_ReactorFlags const TwoDPositionInfluence;

/// @brief Field TwoDRotationInfluence value: I32(2)
static ::GlobalNamespace::BoingWork_ReactorFlags const TwoDRotationInfluence;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingWork_ReactorFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingWork_ReactorFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
