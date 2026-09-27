#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsBuildTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFlagsBuildTypes)
// Forward declare root types
namespace Fusion {
struct RuntimeFlagsBuildTypes;
}
// Write type traits
MARK_VAL_T(::Fusion::RuntimeFlagsBuildTypes);
DEFINE_IL2CPP_CLASS(::Fusion::RuntimeFlagsBuildTypes, "Fusion", "RuntimeFlagsBuildTypes");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RuntimeFlagsBuildTypes
struct CORDL_TYPE RuntimeFlagsBuildTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeFlagsBuildTypes_Unwrapped
enum struct __RuntimeFlagsBuildTypes_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_ENABLE_MONO = static_cast<int32_t>(0x2),
__E_ENABLE_IL2CPP = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeFlagsBuildTypes_Unwrapped () const noexcept {
return static_cast<__RuntimeFlagsBuildTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeFlagsBuildTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeFlagsBuildTypes(int32_t  value__) noexcept;

/// @brief Field ENABLE_IL2CPP value: I32(4)
static ::Fusion::RuntimeFlagsBuildTypes const ENABLE_IL2CPP;

/// @brief Field ENABLE_MONO value: I32(2)
static ::Fusion::RuntimeFlagsBuildTypes const ENABLE_MONO;

/// @brief Field NONE value: I32(0)
static ::Fusion::RuntimeFlagsBuildTypes const NONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31311};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RuntimeFlagsBuildTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RuntimeFlagsBuildTypes) == 0x4, "Size mismatch!");

} // namespace end def Fusion
