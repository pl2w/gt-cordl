#pragma once
// IWYU pragma private; include "GlobalNamespace/ESuperGameModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESuperGameModes)
// Forward declare root types
namespace GlobalNamespace {
struct ESuperGameModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ESuperGameModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ESuperGameModes, "", "ESuperGameModes");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ESuperGameModes
struct CORDL_TYPE ESuperGameModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESuperGameModes_Unwrapped
enum struct __ESuperGameModes_Unwrapped : int32_t {
__E_SuperInfect = static_cast<int32_t>(0x800),
__E_SuperCasual = static_cast<int32_t>(0x1000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESuperGameModes_Unwrapped () const noexcept {
return static_cast<__ESuperGameModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESuperGameModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ESuperGameModes(int32_t  value__) noexcept;

/// @brief Field SuperCasual value: I32(4096)
static ::GlobalNamespace::ESuperGameModes const SuperCasual;

/// @brief Field SuperInfect value: I32(2048)
static ::GlobalNamespace::ESuperGameModes const SuperInfect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ESuperGameModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ESuperGameModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
