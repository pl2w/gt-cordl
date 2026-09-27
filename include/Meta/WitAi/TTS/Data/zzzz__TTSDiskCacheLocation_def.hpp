#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSDiskCacheLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSDiskCacheLocation)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
struct TTSDiskCacheLocation;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation, "Meta.WitAi.TTS.Data", "TTSDiskCacheLocation");
// Dependencies 
namespace Meta::WitAi::TTS::Data {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Data.TTSDiskCacheLocation
struct CORDL_TYPE TTSDiskCacheLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TTSDiskCacheLocation_Unwrapped
enum struct __TTSDiskCacheLocation_Unwrapped : int32_t {
__E_Stream = static_cast<int32_t>(0x0),
__E_Preload = static_cast<int32_t>(0x1),
__E_Persistent = static_cast<int32_t>(0x2),
__E_Temporary = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TTSDiskCacheLocation_Unwrapped () const noexcept {
return static_cast<__TTSDiskCacheLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TTSDiskCacheLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TTSDiskCacheLocation(int32_t  value__) noexcept;

/// @brief Field Persistent value: I32(2)
static ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const Persistent;

/// @brief Field Preload value: I32(1)
static ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const Preload;

/// @brief Field Stream value: I32(0)
static ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const Stream;

/// @brief Field Temporary value: I32(3)
static ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const Temporary;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
