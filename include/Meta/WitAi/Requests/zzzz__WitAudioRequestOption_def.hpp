#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitAudioRequestOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitAudioRequestOption)
// Forward declare root types
namespace Meta::WitAi::Requests {
struct WitAudioRequestOption;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Requests::WitAudioRequestOption);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitAudioRequestOption, "Meta.WitAi.Requests", "WitAudioRequestOption");
// Dependencies 
namespace Meta::WitAi::Requests {
// Is value type: true
// CS Name: Meta.WitAi.Requests.WitAudioRequestOption
struct CORDL_TYPE WitAudioRequestOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WitAudioRequestOption_Unwrapped
enum struct __WitAudioRequestOption_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Speech = static_cast<int32_t>(0x1),
__E_Transcribe = static_cast<int32_t>(0x2),
__E_Dictation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WitAudioRequestOption_Unwrapped () const noexcept {
return static_cast<__WitAudioRequestOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WitAudioRequestOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WitAudioRequestOption(int32_t  value__) noexcept;

/// @brief Field Dictation value: I32(3)
static ::Meta::WitAi::Requests::WitAudioRequestOption const Dictation;

/// @brief Field None value: I32(0)
static ::Meta::WitAi::Requests::WitAudioRequestOption const None;

/// @brief Field Speech value: I32(1)
static ::Meta::WitAi::Requests::WitAudioRequestOption const Speech;

/// @brief Field Transcribe value: I32(2)
static ::Meta::WitAi::Requests::WitAudioRequestOption const Transcribe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitAudioRequestOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitAudioRequestOption) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
