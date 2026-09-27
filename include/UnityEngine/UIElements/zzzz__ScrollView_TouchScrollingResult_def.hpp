#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollView_TouchScrollingResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView_TouchScrollingResult)
// Forward declare root types
namespace GlobalNamespace {
struct ScrollView_TouchScrollingResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScrollView_TouchScrollingResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScrollView_TouchScrollingResult, "UnityEngine.UIElements", "ScrollView/TouchScrollingResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.ScrollView/TouchScrollingResult
struct CORDL_TYPE ScrollView_TouchScrollingResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScrollView_TouchScrollingResult_Unwrapped
enum struct __ScrollView_TouchScrollingResult_Unwrapped : int32_t {
__E_Apply = static_cast<int32_t>(0x0),
__E_Forward = static_cast<int32_t>(0x1),
__E_Block = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollView_TouchScrollingResult_Unwrapped () const noexcept {
return static_cast<__ScrollView_TouchScrollingResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScrollView_TouchScrollingResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScrollView_TouchScrollingResult(int32_t  value__) noexcept;

/// @brief Field Apply value: I32(0)
static ::GlobalNamespace::ScrollView_TouchScrollingResult const Apply;

/// @brief Field Block value: I32(2)
static ::GlobalNamespace::ScrollView_TouchScrollingResult const Block;

/// @brief Field Forward value: I32(1)
static ::GlobalNamespace::ScrollView_TouchScrollingResult const Forward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScrollView_TouchScrollingResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScrollView_TouchScrollingResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
