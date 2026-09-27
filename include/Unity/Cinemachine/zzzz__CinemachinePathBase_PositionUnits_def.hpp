#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePathBase_PositionUnits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePathBase_PositionUnits)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachinePathBase_PositionUnits;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachinePathBase_PositionUnits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachinePathBase_PositionUnits, "Unity.Cinemachine", "CinemachinePathBase/PositionUnits");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachinePathBase/PositionUnits
struct CORDL_TYPE CinemachinePathBase_PositionUnits {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachinePathBase_PositionUnits_Unwrapped
enum struct __CinemachinePathBase_PositionUnits_Unwrapped : int32_t {
__E_PathUnits = static_cast<int32_t>(0x0),
__E_Distance = static_cast<int32_t>(0x1),
__E_Normalized = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachinePathBase_PositionUnits_Unwrapped () const noexcept {
return static_cast<__CinemachinePathBase_PositionUnits_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePathBase_PositionUnits() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachinePathBase_PositionUnits(int32_t  value__) noexcept;

/// @brief Field Distance value: I32(1)
static ::GlobalNamespace::CinemachinePathBase_PositionUnits const Distance;

/// @brief Field Normalized value: I32(2)
static ::GlobalNamespace::CinemachinePathBase_PositionUnits const Normalized;

/// @brief Field PathUnits value: I32(0)
static ::GlobalNamespace::CinemachinePathBase_PositionUnits const PathUnits;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachinePathBase_PositionUnits, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachinePathBase_PositionUnits) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
