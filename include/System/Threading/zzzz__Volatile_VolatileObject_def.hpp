#pragma once
// IWYU pragma private; include "System/Threading/Volatile_VolatileObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Volatile_VolatileObject)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Volatile_VolatileObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Volatile_VolatileObject);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Volatile_VolatileObject, "System.Threading", "Volatile/VolatileObject");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileObject
struct CORDL_TYPE Volatile_VolatileObject {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Volatile_VolatileObject() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr Volatile_VolatileObject(::System::Object*  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Volatile_VolatileObject, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Volatile_VolatileObject) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
