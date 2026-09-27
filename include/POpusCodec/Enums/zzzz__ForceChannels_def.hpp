#pragma once
// IWYU pragma private; include "POpusCodec/Enums/ForceChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ForceChannels)
// Forward declare root types
namespace POpusCodec::Enums {
struct ForceChannels;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::ForceChannels);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::ForceChannels, "POpusCodec.Enums", "ForceChannels");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.ForceChannels
struct CORDL_TYPE ForceChannels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ForceChannels_Unwrapped
enum struct __ForceChannels_Unwrapped : int32_t {
__E_NoForce = static_cast<int32_t>(0xfffffc18),
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ForceChannels_Unwrapped () const noexcept {
return static_cast<__ForceChannels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ForceChannels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ForceChannels(int32_t  value__) noexcept;

/// @brief Field Mono value: I32(1)
static ::POpusCodec::Enums::ForceChannels const Mono;

/// @brief Field NoForce value: I32(-1000)
static ::POpusCodec::Enums::ForceChannels const NoForce;

/// @brief Field Stereo value: I32(2)
static ::POpusCodec::Enums::ForceChannels const Stereo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::ForceChannels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::ForceChannels) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
