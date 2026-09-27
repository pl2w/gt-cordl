#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_ThresholdOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_ThresholdOption)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_ThresholdOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_ThresholdOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_ThresholdOption, "GorillaTag.Cosmetics", "ContinuousProperty/ThresholdOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/ThresholdOption
struct CORDL_TYPE ContinuousProperty_ThresholdOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_ThresholdOption_Unwrapped
enum struct __ContinuousProperty_ThresholdOption_Unwrapped : int32_t {
__E_Invert = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_ThresholdOption_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_ThresholdOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_ThresholdOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_ThresholdOption(int32_t  value__) noexcept;

/// @brief Field Invert value: I32(0)
static ::GlobalNamespace::ContinuousProperty_ThresholdOption const Invert;

/// @brief Field Normal value: I32(1)
static ::GlobalNamespace::ContinuousProperty_ThresholdOption const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_ThresholdOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_ThresholdOption) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
