#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryVolume_ShadowmaskEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryVolume_ShadowmaskEncoding)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryVolume_ShadowmaskEncoding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding, "", "BakeryVolume/ShadowmaskEncoding");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryVolume/ShadowmaskEncoding
struct CORDL_TYPE BakeryVolume_ShadowmaskEncoding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryVolume_ShadowmaskEncoding_Unwrapped
enum struct __BakeryVolume_ShadowmaskEncoding_Unwrapped : int32_t {
__E_RGBA8 = static_cast<int32_t>(0x0),
__E_A8 = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryVolume_ShadowmaskEncoding_Unwrapped () const noexcept {
return static_cast<__BakeryVolume_ShadowmaskEncoding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryVolume_ShadowmaskEncoding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryVolume_ShadowmaskEncoding(int32_t  value__) noexcept;

/// @brief Field A8 value: I32(1)
static ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding const A8;

/// @brief Field RGBA8 value: I32(0)
static ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding const RGBA8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
