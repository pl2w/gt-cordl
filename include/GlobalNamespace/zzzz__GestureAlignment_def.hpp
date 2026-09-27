#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureAlignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GestureAlignment)
// Forward declare root types
namespace GlobalNamespace {
struct GestureAlignment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GestureAlignment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureAlignment, "", "GestureAlignment");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GestureAlignment
struct CORDL_TYPE GestureAlignment {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GestureAlignment_Unwrapped
enum struct __GestureAlignment_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_TowardFace = static_cast<uint32_t>(0x80u),
__E_AwayFromFace = static_cast<uint32_t>(0x100u),
__E_WorldUp = static_cast<uint32_t>(0x200u),
__E_WorldDown = static_cast<uint32_t>(0x400u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GestureAlignment_Unwrapped () const noexcept {
return static_cast<__GestureAlignment_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GestureAlignment() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GestureAlignment(uint32_t  value__) noexcept;

/// @brief Field AwayFromFace value: U32(256)
static ::GlobalNamespace::GestureAlignment const AwayFromFace;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GestureAlignment const None;

/// @brief Field TowardFace value: U32(128)
static ::GlobalNamespace::GestureAlignment const TowardFace;

/// @brief Field WorldDown value: U32(1024)
static ::GlobalNamespace::GestureAlignment const WorldDown;

/// @brief Field WorldUp value: U32(512)
static ::GlobalNamespace::GestureAlignment const WorldUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GestureAlignment, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GestureAlignment) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
