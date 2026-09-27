#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults_FortuneCategoryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FortuneResults_FortuneCategoryType)
// Forward declare root types
namespace GlobalNamespace {
struct FortuneResults_FortuneCategoryType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FortuneResults_FortuneCategoryType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneResults_FortuneCategoryType, "", "FortuneResults/FortuneCategoryType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FortuneResults/FortuneCategoryType
struct CORDL_TYPE FortuneResults_FortuneCategoryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FortuneResults_FortuneCategoryType_Unwrapped
enum struct __FortuneResults_FortuneCategoryType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Positive = static_cast<int32_t>(0x1),
__E_Neutral = static_cast<int32_t>(0x2),
__E_Negative = static_cast<int32_t>(0x3),
__E_Seasonal = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FortuneResults_FortuneCategoryType_Unwrapped () const noexcept {
return static_cast<__FortuneResults_FortuneCategoryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FortuneResults_FortuneCategoryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FortuneResults_FortuneCategoryType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(0)
static ::GlobalNamespace::FortuneResults_FortuneCategoryType const Invalid;

/// @brief Field Negative value: I32(3)
static ::GlobalNamespace::FortuneResults_FortuneCategoryType const Negative;

/// @brief Field Neutral value: I32(2)
static ::GlobalNamespace::FortuneResults_FortuneCategoryType const Neutral;

/// @brief Field Positive value: I32(1)
static ::GlobalNamespace::FortuneResults_FortuneCategoryType const Positive;

/// @brief Field Seasonal value: I32(4)
static ::GlobalNamespace::FortuneResults_FortuneCategoryType const Seasonal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneCategoryType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneResults_FortuneCategoryType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
