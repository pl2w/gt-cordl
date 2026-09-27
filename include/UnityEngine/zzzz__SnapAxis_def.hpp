#pragma once
// IWYU pragma private; include "UnityEngine/SnapAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapAxis)
// Forward declare root types
namespace UnityEngine {
struct SnapAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SnapAxis);
DEFINE_IL2CPP_CLASS(::UnityEngine::SnapAxis, "UnityEngine", "SnapAxis");
// [Flags]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SnapAxis
struct CORDL_TYPE SnapAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SnapAxis_Unwrapped
enum struct __SnapAxis_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_X = static_cast<uint8_t>(0x1u),
__E_Y = static_cast<uint8_t>(0x2u),
__E_Z = static_cast<uint8_t>(0x4u),
__E_All = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SnapAxis_Unwrapped () const noexcept {
return static_cast<__SnapAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SnapAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr SnapAxis(uint8_t  value__) noexcept;

/// @brief Field All value: U8(7)
static ::UnityEngine::SnapAxis const All;

/// @brief Field None value: U8(0)
static ::UnityEngine::SnapAxis const None;

/// @brief Field X value: U8(1)
static ::UnityEngine::SnapAxis const X;

/// @brief Field Y value: U8(2)
static ::UnityEngine::SnapAxis const Y;

/// @brief Field Z value: U8(4)
static ::UnityEngine::SnapAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SnapAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SnapAxis) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine
