#pragma once
// IWYU pragma private; include "Meta/WitAi/TTSWitAudioType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSWitAudioType)
// Forward declare root types
namespace Meta::WitAi {
struct TTSWitAudioType;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::TTSWitAudioType);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTSWitAudioType, "Meta.WitAi", "TTSWitAudioType");
// Dependencies 
namespace Meta::WitAi {
// Is value type: true
// CS Name: Meta.WitAi.TTSWitAudioType
struct CORDL_TYPE TTSWitAudioType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TTSWitAudioType_Unwrapped
enum struct __TTSWitAudioType_Unwrapped : int32_t {
__E_PCM = static_cast<int32_t>(0x0),
__E_MPEG = static_cast<int32_t>(0x1),
__E_WAV = static_cast<int32_t>(0x2),
__E_OPUS = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TTSWitAudioType_Unwrapped () const noexcept {
return static_cast<__TTSWitAudioType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TTSWitAudioType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TTSWitAudioType(int32_t  value__) noexcept;

/// @brief Field MPEG value: I32(1)
static ::Meta::WitAi::TTSWitAudioType const MPEG;

/// @brief Field OPUS value: I32(3)
static ::Meta::WitAi::TTSWitAudioType const OPUS;

/// @brief Field PCM value: I32(0)
static ::Meta::WitAi::TTSWitAudioType const PCM;

/// @brief Field WAV value: I32(2)
static ::Meta::WitAi::TTSWitAudioType const WAV;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTSWitAudioType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTSWitAudioType) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi
