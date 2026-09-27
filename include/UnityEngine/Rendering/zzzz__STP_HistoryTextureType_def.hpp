#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_HistoryTextureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(STP_HistoryTextureType)
// Forward declare root types
namespace GlobalNamespace {
struct STP_HistoryTextureType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_HistoryTextureType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_HistoryTextureType, "UnityEngine.Rendering", "STP/HistoryTextureType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/HistoryTextureType
struct CORDL_TYPE STP_HistoryTextureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __STP_HistoryTextureType_Unwrapped
enum struct __STP_HistoryTextureType_Unwrapped : int32_t {
__E_DepthMotion = static_cast<int32_t>(0x0),
__E_Luma = static_cast<int32_t>(0x1),
__E_Convergence = static_cast<int32_t>(0x2),
__E_Feedback = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __STP_HistoryTextureType_Unwrapped () const noexcept {
return static_cast<__STP_HistoryTextureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr STP_HistoryTextureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr STP_HistoryTextureType(int32_t  value__) noexcept;

/// @brief Field Convergence value: I32(2)
static ::GlobalNamespace::STP_HistoryTextureType const Convergence;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::STP_HistoryTextureType const Count;

/// @brief Field DepthMotion value: I32(0)
static ::GlobalNamespace::STP_HistoryTextureType const DepthMotion;

/// @brief Field Feedback value: I32(3)
static ::GlobalNamespace::STP_HistoryTextureType const Feedback;

/// @brief Field Luma value: I32(1)
static ::GlobalNamespace::STP_HistoryTextureType const Luma;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_HistoryTextureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_HistoryTextureType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
