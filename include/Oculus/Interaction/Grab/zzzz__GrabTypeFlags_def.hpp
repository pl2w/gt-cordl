#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabTypeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabTypeFlags)
// Forward declare root types
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Grab::GrabTypeFlags);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabTypeFlags, "Oculus.Interaction.Grab", "GrabTypeFlags");
// [Flags]
// Dependencies 
namespace Oculus::Interaction::Grab {
// Is value type: true
// CS Name: Oculus.Interaction.Grab.GrabTypeFlags
struct CORDL_TYPE GrabTypeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GrabTypeFlags_Unwrapped
enum struct __GrabTypeFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Pinch = static_cast<int32_t>(0x1),
__E_Palm = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GrabTypeFlags_Unwrapped () const noexcept {
return static_cast<__GrabTypeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GrabTypeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GrabTypeFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::Oculus::Interaction::Grab::GrabTypeFlags const All;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::Grab::GrabTypeFlags const None;

/// @brief Field Palm value: I32(2)
static ::Oculus::Interaction::Grab::GrabTypeFlags const Palm;

/// @brief Field Pinch value: I32(1)
static ::Oculus::Interaction::Grab::GrabTypeFlags const Pinch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabTypeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabTypeFlags) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab
