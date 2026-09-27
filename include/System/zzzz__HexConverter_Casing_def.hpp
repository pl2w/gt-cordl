#pragma once
// IWYU pragma private; include "System/HexConverter_Casing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HexConverter_Casing)
// Forward declare root types
namespace GlobalNamespace {
struct HexConverter_Casing;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HexConverter_Casing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HexConverter_Casing, "System", "HexConverter/Casing");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.HexConverter/Casing
struct CORDL_TYPE HexConverter_Casing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __HexConverter_Casing_Unwrapped
enum struct __HexConverter_Casing_Unwrapped : uint32_t {
__E_Upper = static_cast<uint32_t>(0x0u),
__E_Lower = static_cast<uint32_t>(0x2020u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HexConverter_Casing_Unwrapped () const noexcept {
return static_cast<__HexConverter_Casing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HexConverter_Casing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr HexConverter_Casing(uint32_t  value__) noexcept;

/// @brief Field Lower value: U32(8224)
static ::GlobalNamespace::HexConverter_Casing const Lower;

/// @brief Field Upper value: U32(0)
static ::GlobalNamespace::HexConverter_Casing const Upper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HexConverter_Casing, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HexConverter_Casing) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
