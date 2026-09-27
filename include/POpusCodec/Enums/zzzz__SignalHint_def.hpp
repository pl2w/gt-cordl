#pragma once
// IWYU pragma private; include "POpusCodec/Enums/SignalHint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalHint)
// Forward declare root types
namespace POpusCodec::Enums {
struct SignalHint;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::SignalHint);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::SignalHint, "POpusCodec.Enums", "SignalHint");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.SignalHint
struct CORDL_TYPE SignalHint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SignalHint_Unwrapped
enum struct __SignalHint_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0xfffffc18),
__E_Voice = static_cast<int32_t>(0xbb9),
__E_Music = static_cast<int32_t>(0xbba),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SignalHint_Unwrapped () const noexcept {
return static_cast<__SignalHint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SignalHint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SignalHint(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(-1000)
static ::POpusCodec::Enums::SignalHint const Auto;

/// @brief Field Music value: I32(3002)
static ::POpusCodec::Enums::SignalHint const Music;

/// @brief Field Voice value: I32(3001)
static ::POpusCodec::Enums::SignalHint const Voice;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::SignalHint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::SignalHint) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
