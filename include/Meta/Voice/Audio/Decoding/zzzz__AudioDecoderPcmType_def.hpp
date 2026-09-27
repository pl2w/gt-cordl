#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderPcmType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderPcmType)
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
struct AudioDecoderPcmType;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType, "Meta.Voice.Audio.Decoding", "AudioDecoderPcmType");
// Dependencies 
namespace Meta::Voice::Audio::Decoding {
// Is value type: true
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderPcmType
struct CORDL_TYPE AudioDecoderPcmType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioDecoderPcmType_Unwrapped
enum struct __AudioDecoderPcmType_Unwrapped : int32_t {
__E_Int16 = static_cast<int32_t>(0x0),
__E_Int32 = static_cast<int32_t>(0x1),
__E_Int64 = static_cast<int32_t>(0x2),
__E_UInt16 = static_cast<int32_t>(0x3),
__E_UInt32 = static_cast<int32_t>(0x4),
__E_UInt64 = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioDecoderPcmType_Unwrapped () const noexcept {
return static_cast<__AudioDecoderPcmType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderPcmType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioDecoderPcmType(int32_t  value__) noexcept;

/// @brief Field Int16 value: I32(0)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const Int16;

/// @brief Field Int32 value: I32(1)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const Int32;

/// @brief Field Int64 value: I32(2)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const Int64;

/// @brief Field UInt16 value: I32(3)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const UInt16;

/// @brief Field UInt32 value: I32(4)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const UInt32;

/// @brief Field UInt64 value: I32(5)
static ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const UInt64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
