#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/AcousticMapFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcousticMapFlags)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct AcousticMapFlags;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::AcousticMapFlags);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::AcousticMapFlags, "Meta.XR.Acoustics", "AcousticMapFlags");
// [Flags]
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.AcousticMapFlags
struct CORDL_TYPE AcousticMapFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __AcousticMapFlags_Unwrapped
enum struct __AcousticMapFlags_Unwrapped : uint32_t {
__E_NONE = static_cast<uint32_t>(0x0u),
__E_STATIC_ONLY = static_cast<uint32_t>(0x1u),
__E_NO_FLOATING = static_cast<uint32_t>(0x2u),
__E_MAP_ONLY = static_cast<uint32_t>(0x4u),
__E_DIFFRACTION = static_cast<uint32_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AcousticMapFlags_Unwrapped () const noexcept {
return static_cast<__AcousticMapFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AcousticMapFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr AcousticMapFlags(uint32_t  value__) noexcept;

/// @brief Field DIFFRACTION value: U32(8)
static ::Meta::XR::Acoustics::AcousticMapFlags const DIFFRACTION;

/// @brief Field MAP_ONLY value: U32(4)
static ::Meta::XR::Acoustics::AcousticMapFlags const MAP_ONLY;

/// @brief Field NONE value: U32(0)
static ::Meta::XR::Acoustics::AcousticMapFlags const NONE;

/// @brief Field NO_FLOATING value: U32(2)
static ::Meta::XR::Acoustics::AcousticMapFlags const NO_FLOATING;

/// @brief Field STATIC_ONLY value: U32(1)
static ::Meta::XR::Acoustics::AcousticMapFlags const STATIC_ONLY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::AcousticMapFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::AcousticMapFlags) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
