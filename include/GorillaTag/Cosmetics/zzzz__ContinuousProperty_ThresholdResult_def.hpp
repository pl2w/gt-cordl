#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_ThresholdResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_ThresholdResult)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_ThresholdResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_ThresholdResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_ThresholdResult, "GorillaTag.Cosmetics", "ContinuousProperty/ThresholdResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/ThresholdResult
struct CORDL_TYPE ContinuousProperty_ThresholdResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_ThresholdResult_Unwrapped
enum struct __ContinuousProperty_ThresholdResult_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_RisingEdge = static_cast<int32_t>(0x100000),
__E_FallingEdge = static_cast<int32_t>(0x200000),
__E_Unchanged = static_cast<int32_t>(0x300000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_ThresholdResult_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_ThresholdResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_ThresholdResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_ThresholdResult(int32_t  value__) noexcept;

/// @brief Field FallingEdge value: I32(2097152)
static ::GlobalNamespace::ContinuousProperty_ThresholdResult const FallingEdge;

/// @brief Field Null value: I32(0)
static ::GlobalNamespace::ContinuousProperty_ThresholdResult const Null;

/// @brief Field RisingEdge value: I32(1048576)
static ::GlobalNamespace::ContinuousProperty_ThresholdResult const RisingEdge;

/// @brief Field Unchanged value: I32(3145728)
static ::GlobalNamespace::ContinuousProperty_ThresholdResult const Unchanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_ThresholdResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_ThresholdResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
