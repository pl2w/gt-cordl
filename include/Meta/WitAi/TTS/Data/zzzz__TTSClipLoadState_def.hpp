#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSClipLoadState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSClipLoadState)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
struct TTSClipLoadState;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::TTS::Data::TTSClipLoadState);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSClipLoadState, "Meta.WitAi.TTS.Data", "TTSClipLoadState");
// Dependencies 
namespace Meta::WitAi::TTS::Data {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Data.TTSClipLoadState
struct CORDL_TYPE TTSClipLoadState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TTSClipLoadState_Unwrapped
enum struct __TTSClipLoadState_Unwrapped : int32_t {
__E_Unloaded = static_cast<int32_t>(0x0),
__E_Preparing = static_cast<int32_t>(0x1),
__E_Loaded = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TTSClipLoadState_Unwrapped () const noexcept {
return static_cast<__TTSClipLoadState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TTSClipLoadState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TTSClipLoadState(int32_t  value__) noexcept;

/// @brief Field Error value: I32(3)
static ::Meta::WitAi::TTS::Data::TTSClipLoadState const Error;

/// @brief Field Loaded value: I32(2)
static ::Meta::WitAi::TTS::Data::TTSClipLoadState const Loaded;

/// @brief Field Preparing value: I32(1)
static ::Meta::WitAi::TTS::Data::TTSClipLoadState const Preparing;

/// @brief Field Unloaded value: I32(0)
static ::Meta::WitAi::TTS::Data::TTSClipLoadState const Unloaded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipLoadState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSClipLoadState) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
