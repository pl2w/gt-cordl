#pragma once
// IWYU pragma private; include "POpusCodec/Enums/SamplingRate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SamplingRate)
// Forward declare root types
namespace POpusCodec::Enums {
struct SamplingRate;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::SamplingRate);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::SamplingRate, "POpusCodec.Enums", "SamplingRate");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.SamplingRate
struct CORDL_TYPE SamplingRate {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SamplingRate_Unwrapped
enum struct __SamplingRate_Unwrapped : int32_t {
__E_Sampling08000 = static_cast<int32_t>(0x1f40),
__E_Sampling12000 = static_cast<int32_t>(0x2ee0),
__E_Sampling16000 = static_cast<int32_t>(0x3e80),
__E_Sampling24000 = static_cast<int32_t>(0x5dc0),
__E_Sampling48000 = static_cast<int32_t>(0xbb80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SamplingRate_Unwrapped () const noexcept {
return static_cast<__SamplingRate_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SamplingRate() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SamplingRate(int32_t  value__) noexcept;

/// @brief Field Sampling08000 value: I32(8000)
static ::POpusCodec::Enums::SamplingRate const Sampling08000;

/// @brief Field Sampling12000 value: I32(12000)
static ::POpusCodec::Enums::SamplingRate const Sampling12000;

/// @brief Field Sampling16000 value: I32(16000)
static ::POpusCodec::Enums::SamplingRate const Sampling16000;

/// @brief Field Sampling24000 value: I32(24000)
static ::POpusCodec::Enums::SamplingRate const Sampling24000;

/// @brief Field Sampling48000 value: I32(48000)
static ::POpusCodec::Enums::SamplingRate const Sampling48000;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::SamplingRate, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::SamplingRate) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
