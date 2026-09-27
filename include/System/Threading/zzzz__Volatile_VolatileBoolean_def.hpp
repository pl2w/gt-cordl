#pragma once
// IWYU pragma private; include "System/Threading/Volatile_VolatileBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Volatile_VolatileBoolean)
// Forward declare root types
namespace GlobalNamespace {
struct Volatile_VolatileBoolean;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Volatile_VolatileBoolean);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Volatile_VolatileBoolean, "System.Threading", "Volatile/VolatileBoolean");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileBoolean
struct CORDL_TYPE Volatile_VolatileBoolean {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Volatile_VolatileBoolean() ;

// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Volatile_VolatileBoolean(bool  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Value, offset: 0x0, size: 0x1, def value: None
 bool  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Volatile_VolatileBoolean, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Volatile_VolatileBoolean) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
