#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/EnableFlagInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnableFlagInternal)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct EnableFlagInternal;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::EnableFlagInternal);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::EnableFlagInternal, "Meta.XR.Acoustics", "EnableFlagInternal");
// [Flags]
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.EnableFlagInternal
struct CORDL_TYPE EnableFlagInternal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __EnableFlagInternal_Unwrapped
enum struct __EnableFlagInternal_Unwrapped : uint32_t {
__E_NONE = static_cast<uint32_t>(0x0u),
__E_SIMPLE_ROOM_MODELING = static_cast<uint32_t>(0x2u),
__E_LATE_REVERBERATION = static_cast<uint32_t>(0x3u),
__E_RANDOMIZE_REVERB = static_cast<uint32_t>(0x4u),
__E_PERFORMANCE_COUNTERS = static_cast<uint32_t>(0x5u),
__E_DIFFRACTION = static_cast<uint32_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnableFlagInternal_Unwrapped () const noexcept {
return static_cast<__EnableFlagInternal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnableFlagInternal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr EnableFlagInternal(uint32_t  value__) noexcept;

/// @brief Field DIFFRACTION value: U32(6)
static ::Meta::XR::Acoustics::EnableFlagInternal const DIFFRACTION;

/// @brief Field LATE_REVERBERATION value: U32(3)
static ::Meta::XR::Acoustics::EnableFlagInternal const LATE_REVERBERATION;

/// @brief Field NONE value: U32(0)
static ::Meta::XR::Acoustics::EnableFlagInternal const NONE;

/// @brief Field PERFORMANCE_COUNTERS value: U32(5)
static ::Meta::XR::Acoustics::EnableFlagInternal const PERFORMANCE_COUNTERS;

/// @brief Field RANDOMIZE_REVERB value: U32(4)
static ::Meta::XR::Acoustics::EnableFlagInternal const RANDOMIZE_REVERB;

/// @brief Field SIMPLE_ROOM_MODELING value: U32(2)
static ::Meta::XR::Acoustics::EnableFlagInternal const SIMPLE_ROOM_MODELING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::EnableFlagInternal, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::EnableFlagInternal) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
