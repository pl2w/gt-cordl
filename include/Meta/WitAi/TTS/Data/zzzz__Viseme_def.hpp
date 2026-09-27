#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/Viseme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Viseme)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
struct Viseme;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::TTS::Data::Viseme);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::Viseme, "Meta.WitAi.TTS.Data", "Viseme");
// Dependencies 
namespace Meta::WitAi::TTS::Data {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Data.Viseme
struct CORDL_TYPE Viseme {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Viseme_Unwrapped
enum struct __Viseme_Unwrapped : int32_t {
__E_sil = static_cast<int32_t>(0x0),
__E_PP = static_cast<int32_t>(0x1),
__E_FF = static_cast<int32_t>(0x2),
__E_TH = static_cast<int32_t>(0x3),
__E_DD = static_cast<int32_t>(0x4),
__E_kk = static_cast<int32_t>(0x5),
__E_CH = static_cast<int32_t>(0x6),
__E_SS = static_cast<int32_t>(0x7),
__E_nn = static_cast<int32_t>(0x8),
__E_RR = static_cast<int32_t>(0x9),
__E_aa = static_cast<int32_t>(0xa),
__E_E = static_cast<int32_t>(0xb),
__E_ih = static_cast<int32_t>(0xc),
__E_oh = static_cast<int32_t>(0xd),
__E_ou = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Viseme_Unwrapped () const noexcept {
return static_cast<__Viseme_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Viseme() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Viseme(int32_t  value__) noexcept;

/// @brief Field CH value: I32(6)
static ::Meta::WitAi::TTS::Data::Viseme const CH;

/// @brief Field DD value: I32(4)
static ::Meta::WitAi::TTS::Data::Viseme const DD;

/// @brief Field E value: I32(11)
static ::Meta::WitAi::TTS::Data::Viseme const E;

/// @brief Field FF value: I32(2)
static ::Meta::WitAi::TTS::Data::Viseme const FF;

/// @brief Field PP value: I32(1)
static ::Meta::WitAi::TTS::Data::Viseme const PP;

/// @brief Field RR value: I32(9)
static ::Meta::WitAi::TTS::Data::Viseme const RR;

/// @brief Field SS value: I32(7)
static ::Meta::WitAi::TTS::Data::Viseme const SS;

/// @brief Field TH value: I32(3)
static ::Meta::WitAi::TTS::Data::Viseme const TH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field aa value: I32(10)
static ::Meta::WitAi::TTS::Data::Viseme const aa;

/// @brief Field ih value: I32(12)
static ::Meta::WitAi::TTS::Data::Viseme const ih;

/// @brief Field kk value: I32(5)
static ::Meta::WitAi::TTS::Data::Viseme const kk;

/// @brief Field nn value: I32(8)
static ::Meta::WitAi::TTS::Data::Viseme const nn;

/// @brief Field oh value: I32(13)
static ::Meta::WitAi::TTS::Data::Viseme const oh;

/// @brief Field ou value: I32(14)
static ::Meta::WitAi::TTS::Data::Viseme const ou;

/// @brief Field sil value: I32(0)
static ::Meta::WitAi::TTS::Data::Viseme const sil;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::Viseme, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::Viseme) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
