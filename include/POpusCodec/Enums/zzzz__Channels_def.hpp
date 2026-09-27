#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Channels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Channels)
// Forward declare root types
namespace POpusCodec::Enums {
struct Channels;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::Channels);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::Channels, "POpusCodec.Enums", "Channels");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.Channels
struct CORDL_TYPE Channels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Channels_Unwrapped
enum struct __Channels_Unwrapped : int32_t {
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Channels_Unwrapped () const noexcept {
return static_cast<__Channels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Channels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Channels(int32_t  value__) noexcept;

/// @brief Field Mono value: I32(1)
static ::POpusCodec::Enums::Channels const Mono;

/// @brief Field Stereo value: I32(2)
static ::POpusCodec::Enums::Channels const Stereo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::Channels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::Channels) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
