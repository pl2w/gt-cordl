#pragma once
// IWYU pragma private; include "GlobalNamespace/EImageVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EImageVisibility)
// Forward declare root types
namespace GlobalNamespace {
struct EImageVisibility;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EImageVisibility);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EImageVisibility, "", "EImageVisibility");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EImageVisibility
struct CORDL_TYPE EImageVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EImageVisibility_Unwrapped
enum struct __EImageVisibility_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AfterBody = static_cast<int32_t>(0x1),
__E_BeforeBody = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EImageVisibility_Unwrapped () const noexcept {
return static_cast<__EImageVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EImageVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EImageVisibility(int32_t  value__) noexcept;

/// @brief Field AfterBody value: I32(1)
static ::GlobalNamespace::EImageVisibility const AfterBody;

/// @brief Field BeforeBody value: I32(2)
static ::GlobalNamespace::EImageVisibility const BeforeBody;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EImageVisibility const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EImageVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EImageVisibility) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
