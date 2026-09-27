#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping_OutCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipping_OutCode)
// Forward declare root types
namespace GlobalNamespace {
struct Clipping_OutCode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Clipping_OutCode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Clipping_OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Clipping/OutCode
struct CORDL_TYPE Clipping_OutCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Clipping_OutCode_Unwrapped
enum struct __Clipping_OutCode_Unwrapped : int32_t {
__E_Inside = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Bottom = static_cast<int32_t>(0x4),
__E_Top = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Clipping_OutCode_Unwrapped () const noexcept {
return static_cast<__Clipping_OutCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Clipping_OutCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Clipping_OutCode(int32_t  value__) noexcept;

/// @brief Field Bottom value: I32(4)
static ::GlobalNamespace::Clipping_OutCode const Bottom;

/// @brief Field Inside value: I32(0)
static ::GlobalNamespace::Clipping_OutCode const Inside;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::Clipping_OutCode const Left;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::Clipping_OutCode const Right;

/// @brief Field Top value: I32(8)
static ::GlobalNamespace::Clipping_OutCode const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Clipping_OutCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Clipping_OutCode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
