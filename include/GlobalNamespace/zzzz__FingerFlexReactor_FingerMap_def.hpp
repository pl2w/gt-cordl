#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerFlexReactor_FingerMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexReactor_FingerMap)
// Forward declare root types
namespace GlobalNamespace {
struct FingerFlexReactor_FingerMap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FingerFlexReactor_FingerMap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlexReactor_FingerMap, "", "FingerFlexReactor/FingerMap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FingerFlexReactor/FingerMap
struct CORDL_TYPE FingerFlexReactor_FingerMap {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FingerFlexReactor_FingerMap_Unwrapped
enum struct __FingerFlexReactor_FingerMap_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_LeftThumb = static_cast<int32_t>(0x0),
__E_LeftIndex = static_cast<int32_t>(0x1),
__E_LeftMiddle = static_cast<int32_t>(0x2),
__E_RightThumb = static_cast<int32_t>(0x3),
__E_RightIndex = static_cast<int32_t>(0x4),
__E_RightMiddle = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FingerFlexReactor_FingerMap_Unwrapped () const noexcept {
return static_cast<__FingerFlexReactor_FingerMap_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexReactor_FingerMap() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FingerFlexReactor_FingerMap(int32_t  value__) noexcept;

/// @brief Field LeftIndex value: I32(1)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const LeftIndex;

/// @brief Field LeftMiddle value: I32(2)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const LeftMiddle;

/// @brief Field LeftThumb value: I32(0)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const LeftThumb;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const None;

/// @brief Field RightIndex value: I32(4)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const RightIndex;

/// @brief Field RightMiddle value: I32(5)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const RightMiddle;

/// @brief Field RightThumb value: I32(3)
static ::GlobalNamespace::FingerFlexReactor_FingerMap const RightThumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_FingerMap, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlexReactor_FingerMap) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
