#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_NodeColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree`1_NodeColor)
// Forward declare root types
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_NodeColor;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RBTree_1_NodeColor);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RBTree_1_NodeColor, "System.Data", "RBTree`1/NodeColor");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K>
// Is value type: true
// CS Name: System.Data.RBTree`1/NodeColor<K>
struct CORDL_TYPE RBTree_1_NodeColor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RBTree_1_NodeColor_Unwrapped
enum struct __RBTree_1_NodeColor_Unwrapped : int32_t {
__E_red = static_cast<int32_t>(0x0),
__E_black = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RBTree_1_NodeColor_Unwrapped () const noexcept {
return static_cast<__RBTree_1_NodeColor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1_NodeColor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RBTree_1_NodeColor(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field black value: I32(1)
static ::GlobalNamespace::RBTree_1_NodeColor<K> const black;

/// @brief Field red value: I32(0)
static ::GlobalNamespace::RBTree_1_NodeColor<K> const red;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
