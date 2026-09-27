#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticTiltReactor_TiltEvent_ComparisonMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticTiltReactor_TiltEvent_ComparisonMethod)
// Forward declare root types
namespace GlobalNamespace {
struct TiltEvent_CosmeticTiltReactor_ComparisonMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod, "", "CosmeticTiltReactor/TiltEvent/ComparisonMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticTiltReactor/TiltEvent/ComparisonMethod
struct CORDL_TYPE TiltEvent_CosmeticTiltReactor_ComparisonMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TiltEvent_CosmeticTiltReactor_ComparisonMethod_Unwrapped
enum struct __TiltEvent_CosmeticTiltReactor_ComparisonMethod_Unwrapped : int32_t {
__E_DotProduct = static_cast<int32_t>(0x0),
__E_Angle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TiltEvent_CosmeticTiltReactor_ComparisonMethod_Unwrapped () const noexcept {
return static_cast<__TiltEvent_CosmeticTiltReactor_ComparisonMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TiltEvent_CosmeticTiltReactor_ComparisonMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TiltEvent_CosmeticTiltReactor_ComparisonMethod(int32_t  value__) noexcept;

/// @brief Field Angle value: I32(1)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod const Angle;

/// @brief Field DotProduct value: I32(0)
static ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod const DotProduct;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
