#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/EncoderConsumer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderConsumer)
// Forward declare root types
namespace Liv::Lck::Encoding {
struct EncoderConsumer;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Encoding::EncoderConsumer);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::EncoderConsumer, "Liv.Lck.Encoding", "EncoderConsumer");
// Dependencies 
namespace Liv::Lck::Encoding {
// Is value type: true
// CS Name: Liv.Lck.Encoding.EncoderConsumer
struct CORDL_TYPE EncoderConsumer {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncoderConsumer_Unwrapped
enum struct __EncoderConsumer_Unwrapped : int32_t {
__E_Recording = static_cast<int32_t>(0x0),
__E_Streaming = static_cast<int32_t>(0x1),
__E_Echo = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncoderConsumer_Unwrapped () const noexcept {
return static_cast<__EncoderConsumer_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncoderConsumer() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EncoderConsumer(int32_t  value__) noexcept;

/// @brief Field Echo value: I32(2)
static ::Liv::Lck::Encoding::EncoderConsumer const Echo;

/// @brief Field Recording value: I32(0)
static ::Liv::Lck::Encoding::EncoderConsumer const Recording;

/// @brief Field Streaming value: I32(1)
static ::Liv::Lck::Encoding::EncoderConsumer const Streaming;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Encoding::EncoderConsumer, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Encoding::EncoderConsumer) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
