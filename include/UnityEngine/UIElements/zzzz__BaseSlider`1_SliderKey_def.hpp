#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseSlider`1_SliderKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseSlider`1_SliderKey)
// Forward declare root types
namespace GlobalNamespace {
template<typename TValueType>
struct BaseSlider_1_SliderKey;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BaseSlider_1_SliderKey);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BaseSlider_1_SliderKey, "UnityEngine.UIElements", "BaseSlider`1/SliderKey");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValueType>
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseSlider`1/SliderKey<TValueType>
struct CORDL_TYPE BaseSlider_1_SliderKey {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BaseSlider_1_SliderKey_Unwrapped
enum struct __BaseSlider_1_SliderKey_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Lowest = static_cast<int32_t>(0x1),
__E_LowerPage = static_cast<int32_t>(0x2),
__E_Lower = static_cast<int32_t>(0x3),
__E_Higher = static_cast<int32_t>(0x4),
__E_HigherPage = static_cast<int32_t>(0x5),
__E_Highest = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BaseSlider_1_SliderKey_Unwrapped () const noexcept {
return static_cast<__BaseSlider_1_SliderKey_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BaseSlider_1_SliderKey() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BaseSlider_1_SliderKey(int32_t  value__) noexcept;

/// @brief Field Higher value: I32(4)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const Higher;

/// @brief Field HigherPage value: I32(5)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const HigherPage;

/// @brief Field Highest value: I32(6)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const Highest;

/// @brief Field Lower value: I32(3)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const Lower;

/// @brief Field LowerPage value: I32(2)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const LowerPage;

/// @brief Field Lowest value: I32(1)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const Lowest;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::BaseSlider_1_SliderKey<TValueType> const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
