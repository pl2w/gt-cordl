#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureNodeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GestureNodeFlags)
// Forward declare root types
namespace GlobalNamespace {
struct GestureNodeFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GestureNodeFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureNodeFlags, "", "GestureNodeFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GestureNodeFlags
struct CORDL_TYPE GestureNodeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GestureNodeFlags_Unwrapped
enum struct __GestureNodeFlags_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_HandLeft = static_cast<uint32_t>(0x1u),
__E_HandRight = static_cast<uint32_t>(0x2u),
__E_HandOpen = static_cast<uint32_t>(0x4u),
__E_HandClosed = static_cast<uint32_t>(0x8u),
__E_DigitOpen = static_cast<uint32_t>(0x10u),
__E_DigitClosed = static_cast<uint32_t>(0x20u),
__E_DigitBent = static_cast<uint32_t>(0x40u),
__E_TowardFace = static_cast<uint32_t>(0x80u),
__E_AwayFromFace = static_cast<uint32_t>(0x100u),
__E_AxisWorldUp = static_cast<uint32_t>(0x200u),
__E_AxisWorldDown = static_cast<uint32_t>(0x400u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GestureNodeFlags_Unwrapped () const noexcept {
return static_cast<__GestureNodeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GestureNodeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GestureNodeFlags(uint32_t  value__) noexcept;

/// @brief Field AwayFromFace value: U32(256)
static ::GlobalNamespace::GestureNodeFlags const AwayFromFace;

/// @brief Field AxisWorldDown value: U32(1024)
static ::GlobalNamespace::GestureNodeFlags const AxisWorldDown;

/// @brief Field AxisWorldUp value: U32(512)
static ::GlobalNamespace::GestureNodeFlags const AxisWorldUp;

/// @brief Field DigitBent value: U32(64)
static ::GlobalNamespace::GestureNodeFlags const DigitBent;

/// @brief Field DigitClosed value: U32(32)
static ::GlobalNamespace::GestureNodeFlags const DigitClosed;

/// @brief Field DigitOpen value: U32(16)
static ::GlobalNamespace::GestureNodeFlags const DigitOpen;

/// @brief Field HandClosed value: U32(8)
static ::GlobalNamespace::GestureNodeFlags const HandClosed;

/// @brief Field HandLeft value: U32(1)
static ::GlobalNamespace::GestureNodeFlags const HandLeft;

/// @brief Field HandOpen value: U32(4)
static ::GlobalNamespace::GestureNodeFlags const HandOpen;

/// @brief Field HandRight value: U32(2)
static ::GlobalNamespace::GestureNodeFlags const HandRight;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GestureNodeFlags const None;

/// @brief Field TowardFace value: U32(128)
static ::GlobalNamespace::GestureNodeFlags const TowardFace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GestureNodeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GestureNodeFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
