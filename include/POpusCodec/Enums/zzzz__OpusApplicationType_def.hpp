#pragma once
// IWYU pragma private; include "POpusCodec/Enums/OpusApplicationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusApplicationType)
// Forward declare root types
namespace POpusCodec::Enums {
struct OpusApplicationType;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::OpusApplicationType);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::OpusApplicationType, "POpusCodec.Enums", "OpusApplicationType");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.OpusApplicationType
struct CORDL_TYPE OpusApplicationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusApplicationType_Unwrapped
enum struct __OpusApplicationType_Unwrapped : int32_t {
__E_Voip = static_cast<int32_t>(0x800),
__E_Audio = static_cast<int32_t>(0x801),
__E_RestrictedLowDelay = static_cast<int32_t>(0x803),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusApplicationType_Unwrapped () const noexcept {
return static_cast<__OpusApplicationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpusApplicationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpusApplicationType(int32_t  value__) noexcept;

/// @brief Field Audio value: I32(2049)
static ::POpusCodec::Enums::OpusApplicationType const Audio;

/// @brief Field RestrictedLowDelay value: I32(2051)
static ::POpusCodec::Enums::OpusApplicationType const RestrictedLowDelay;

/// @brief Field Voip value: I32(2048)
static ::POpusCodec::Enums::OpusApplicationType const Voip;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::OpusApplicationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::OpusApplicationType) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
