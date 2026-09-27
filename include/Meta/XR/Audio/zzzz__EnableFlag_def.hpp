#pragma once
// IWYU pragma private; include "Meta/XR/Audio/EnableFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnableFlag)
// Forward declare root types
namespace Meta::XR::Audio {
struct EnableFlag;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Audio::EnableFlag);
DEFINE_IL2CPP_CLASS(::Meta::XR::Audio::EnableFlag, "Meta.XR.Audio", "EnableFlag");
// [Flags]
// Dependencies 
namespace Meta::XR::Audio {
// Is value type: true
// CS Name: Meta.XR.Audio.EnableFlag
struct CORDL_TYPE EnableFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __EnableFlag_Unwrapped
enum struct __EnableFlag_Unwrapped : uint32_t {
__E_NONE = static_cast<uint32_t>(0x0u),
__E_SIMPLE_ROOM_MODELING = static_cast<uint32_t>(0x2u),
__E_LATE_REVERBERATION = static_cast<uint32_t>(0x3u),
__E_RANDOMIZE_REVERB = static_cast<uint32_t>(0x4u),
__E_PERFORMANCE_COUNTERS = static_cast<uint32_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnableFlag_Unwrapped () const noexcept {
return static_cast<__EnableFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnableFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr EnableFlag(uint32_t  value__) noexcept;

/// @brief Field LATE_REVERBERATION value: U32(3)
static ::Meta::XR::Audio::EnableFlag const LATE_REVERBERATION;

/// @brief Field NONE value: U32(0)
static ::Meta::XR::Audio::EnableFlag const NONE;

/// @brief Field PERFORMANCE_COUNTERS value: U32(5)
static ::Meta::XR::Audio::EnableFlag const PERFORMANCE_COUNTERS;

/// @brief Field RANDOMIZE_REVERB value: U32(4)
static ::Meta::XR::Audio::EnableFlag const RANDOMIZE_REVERB;

/// @brief Field SIMPLE_ROOM_MODELING value: U32(2)
static ::Meta::XR::Audio::EnableFlag const SIMPLE_ROOM_MODELING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Audio::EnableFlag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Audio::EnableFlag) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Audio
