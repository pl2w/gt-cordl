#pragma once
// IWYU pragma private; include "GlobalNamespace/OneStringGuitar_GuitarStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OneStringGuitar_GuitarStates)
// Forward declare root types
namespace GlobalNamespace {
struct OneStringGuitar_GuitarStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OneStringGuitar_GuitarStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OneStringGuitar_GuitarStates, "", "OneStringGuitar/GuitarStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OneStringGuitar/GuitarStates
struct CORDL_TYPE OneStringGuitar_GuitarStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OneStringGuitar_GuitarStates_Unwrapped
enum struct __OneStringGuitar_GuitarStates_Unwrapped : int32_t {
__E_Club = static_cast<int32_t>(0x1),
__E_HeldReverseGrip = static_cast<int32_t>(0x2),
__E_Playing = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OneStringGuitar_GuitarStates_Unwrapped () const noexcept {
return static_cast<__OneStringGuitar_GuitarStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OneStringGuitar_GuitarStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OneStringGuitar_GuitarStates(int32_t  value__) noexcept;

/// @brief Field Club value: I32(1)
static ::GlobalNamespace::OneStringGuitar_GuitarStates const Club;

/// @brief Field HeldReverseGrip value: I32(2)
static ::GlobalNamespace::OneStringGuitar_GuitarStates const HeldReverseGrip;

/// @brief Field Playing value: I32(4)
static ::GlobalNamespace::OneStringGuitar_GuitarStates const Playing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OneStringGuitar_GuitarStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OneStringGuitar_GuitarStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
