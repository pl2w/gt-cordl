#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_PositioningMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK_PositioningMethod)
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_PositioningMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_PositioningMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_PositioningMethod, "Meta.XR.MRUtilityKit", "MRUK/PositioningMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/PositioningMethod
struct CORDL_TYPE MRUK_PositioningMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUK_PositioningMethod_Unwrapped
enum struct __MRUK_PositioningMethod_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_CENTER = static_cast<int32_t>(0x1),
__E_EDGE = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUK_PositioningMethod_Unwrapped () const noexcept {
return static_cast<__MRUK_PositioningMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUK_PositioningMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_PositioningMethod(int32_t  value__) noexcept;

/// @brief Field CENTER value: I32(1)
static ::GlobalNamespace::MRUK_PositioningMethod const CENTER;

/// @brief Field DEFAULT value: I32(0)
static ::GlobalNamespace::MRUK_PositioningMethod const DEFAULT;

/// @brief Field EDGE value: I32(2)
static ::GlobalNamespace::MRUK_PositioningMethod const EDGE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_PositioningMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_PositioningMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
