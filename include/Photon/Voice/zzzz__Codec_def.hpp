#pragma once
// IWYU pragma private; include "Photon/Voice/Codec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Codec)
// Forward declare root types
namespace Photon::Voice {
struct Codec;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::Codec);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Codec, "Photon.Voice", "Codec");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.Codec
struct CORDL_TYPE Codec {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Codec_Unwrapped
enum struct __Codec_Unwrapped : int32_t {
__E_Raw = static_cast<int32_t>(0x1),
__E_AudioOpus = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Codec_Unwrapped () const noexcept {
return static_cast<__Codec_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Codec() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Codec(int32_t  value__) noexcept;

/// @brief Field AudioOpus value: I32(11)
static ::Photon::Voice::Codec const AudioOpus;

/// @brief Field Raw value: I32(1)
static ::Photon::Voice::Codec const Raw;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28474};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Codec, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Codec) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice
