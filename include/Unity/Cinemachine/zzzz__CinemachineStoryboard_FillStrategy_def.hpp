#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStoryboard_FillStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStoryboard_FillStrategy)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineStoryboard_FillStrategy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineStoryboard_FillStrategy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineStoryboard_FillStrategy, "Unity.Cinemachine", "CinemachineStoryboard/FillStrategy");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineStoryboard/FillStrategy
struct CORDL_TYPE CinemachineStoryboard_FillStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineStoryboard_FillStrategy_Unwrapped
enum struct __CinemachineStoryboard_FillStrategy_Unwrapped : int32_t {
__E_BestFit = static_cast<int32_t>(0x0),
__E_CropImageToFit = static_cast<int32_t>(0x1),
__E_StretchToFit = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineStoryboard_FillStrategy_Unwrapped () const noexcept {
return static_cast<__CinemachineStoryboard_FillStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStoryboard_FillStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineStoryboard_FillStrategy(int32_t  value__) noexcept;

/// @brief Field BestFit value: I32(0)
static ::GlobalNamespace::CinemachineStoryboard_FillStrategy const BestFit;

/// @brief Field CropImageToFit value: I32(1)
static ::GlobalNamespace::CinemachineStoryboard_FillStrategy const CropImageToFit;

/// @brief Field StretchToFit value: I32(2)
static ::GlobalNamespace::CinemachineStoryboard_FillStrategy const StretchToFit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineStoryboard_FillStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineStoryboard_FillStrategy) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
