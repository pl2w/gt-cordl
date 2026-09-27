#pragma once
// IWYU pragma private; include "System/Net/ContentDecodeStream_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDecodeStream_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct ContentDecodeStream_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContentDecodeStream_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContentDecodeStream_Mode, "System.Net", "ContentDecodeStream/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.ContentDecodeStream/Mode
struct CORDL_TYPE ContentDecodeStream_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContentDecodeStream_Mode_Unwrapped
enum struct __ContentDecodeStream_Mode_Unwrapped : int32_t {
__E_GZip = static_cast<int32_t>(0x0),
__E_Deflate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContentDecodeStream_Mode_Unwrapped () const noexcept {
return static_cast<__ContentDecodeStream_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContentDecodeStream_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContentDecodeStream_Mode(int32_t  value__) noexcept;

/// @brief Field Deflate value: I32(1)
static ::GlobalNamespace::ContentDecodeStream_Mode const Deflate;

/// @brief Field GZip value: I32(0)
static ::GlobalNamespace::ContentDecodeStream_Mode const GZip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10658};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContentDecodeStream_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContentDecodeStream_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
