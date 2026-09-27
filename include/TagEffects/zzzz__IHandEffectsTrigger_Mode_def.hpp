#pragma once
// IWYU pragma private; include "TagEffects/IHandEffectsTrigger_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IHandEffectsTrigger_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct IHandEffectsTrigger_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IHandEffectsTrigger_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IHandEffectsTrigger_Mode, "TagEffects", "IHandEffectsTrigger/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TagEffects.IHandEffectsTrigger/Mode
struct CORDL_TYPE IHandEffectsTrigger_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IHandEffectsTrigger_Mode_Unwrapped
enum struct __IHandEffectsTrigger_Mode_Unwrapped : int32_t {
__E_HighFive = static_cast<int32_t>(0x0),
__E_FistBump = static_cast<int32_t>(0x1),
__E_Tag3P = static_cast<int32_t>(0x2),
__E_Tag1P = static_cast<int32_t>(0x3),
__E_HighFive_And_FistBump = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IHandEffectsTrigger_Mode_Unwrapped () const noexcept {
return static_cast<__IHandEffectsTrigger_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IHandEffectsTrigger_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IHandEffectsTrigger_Mode(int32_t  value__) noexcept;

/// @brief Field FistBump value: I32(1)
static ::GlobalNamespace::IHandEffectsTrigger_Mode const FistBump;

/// @brief Field HighFive value: I32(0)
static ::GlobalNamespace::IHandEffectsTrigger_Mode const HighFive;

/// @brief Field HighFive_And_FistBump value: I32(4)
static ::GlobalNamespace::IHandEffectsTrigger_Mode const HighFive_And_FistBump;

/// @brief Field Tag1P value: I32(3)
static ::GlobalNamespace::IHandEffectsTrigger_Mode const Tag1P;

/// @brief Field Tag3P value: I32(2)
static ::GlobalNamespace::IHandEffectsTrigger_Mode const Tag3P;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IHandEffectsTrigger_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IHandEffectsTrigger_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
