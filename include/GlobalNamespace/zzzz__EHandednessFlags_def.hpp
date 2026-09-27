#pragma once
// IWYU pragma private; include "GlobalNamespace/EHandednessFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHandednessFlags)
// Forward declare root types
namespace GlobalNamespace {
struct EHandednessFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EHandednessFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EHandednessFlags, "", "EHandednessFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EHandednessFlags
struct CORDL_TYPE EHandednessFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __EHandednessFlags_Unwrapped
enum struct __EHandednessFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Left = static_cast<uint8_t>(0x1u),
__E_Right = static_cast<uint8_t>(0x2u),
__E_Both = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHandednessFlags_Unwrapped () const noexcept {
return static_cast<__EHandednessFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EHandednessFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr EHandednessFlags(uint8_t  value__) noexcept;

/// @brief Field Both value: U8(3)
static ::GlobalNamespace::EHandednessFlags const Both;

/// @brief Field Left value: U8(1)
static ::GlobalNamespace::EHandednessFlags const Left;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::EHandednessFlags const None;

/// @brief Field Right value: U8(2)
static ::GlobalNamespace::EHandednessFlags const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EHandednessFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EHandednessFlags) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
