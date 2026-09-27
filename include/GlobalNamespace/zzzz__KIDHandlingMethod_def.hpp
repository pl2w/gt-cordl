#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDHandlingMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDHandlingMethod)
// Forward declare root types
namespace GlobalNamespace {
struct KIDHandlingMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDHandlingMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDHandlingMethod, "", "KIDHandlingMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDHandlingMethod
struct CORDL_TYPE KIDHandlingMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KIDHandlingMethod_Unwrapped
enum struct __KIDHandlingMethod_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_SKIP = static_cast<int32_t>(0x1),
__E_FORCE = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KIDHandlingMethod_Unwrapped () const noexcept {
return static_cast<__KIDHandlingMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KIDHandlingMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KIDHandlingMethod(int32_t  value__) noexcept;

/// @brief Field DEFAULT value: I32(0)
static ::GlobalNamespace::KIDHandlingMethod const DEFAULT;

/// @brief Field FORCE value: I32(2)
static ::GlobalNamespace::KIDHandlingMethod const FORCE;

/// @brief Field SKIP value: I32(1)
static ::GlobalNamespace::KIDHandlingMethod const SKIP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDHandlingMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDHandlingMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
