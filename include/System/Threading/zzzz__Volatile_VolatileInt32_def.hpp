#pragma once
// IWYU pragma private; include "System/Threading/Volatile_VolatileInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile_VolatileInt32)
// Forward declare root types
namespace GlobalNamespace {
struct Volatile_VolatileInt32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Volatile_VolatileInt32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Volatile_VolatileInt32, "System.Threading", "Volatile/VolatileInt32");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileInt32
struct CORDL_TYPE Volatile_VolatileInt32 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Volatile_VolatileInt32() ;

// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Volatile_VolatileInt32(int32_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 int32_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Volatile_VolatileInt32, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Volatile_VolatileInt32) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
