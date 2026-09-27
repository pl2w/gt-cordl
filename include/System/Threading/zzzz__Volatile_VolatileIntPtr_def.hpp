#pragma once
// IWYU pragma private; include "System/Threading/Volatile_VolatileIntPtr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Volatile_VolatileIntPtr)
// Forward declare root types
namespace GlobalNamespace {
struct Volatile_VolatileIntPtr;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Volatile_VolatileIntPtr);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Volatile_VolatileIntPtr, "System.Threading", "Volatile/VolatileIntPtr");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.Volatile/VolatileIntPtr
struct CORDL_TYPE Volatile_VolatileIntPtr {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Volatile_VolatileIntPtr() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr Volatile_VolatileIntPtr(::System::IntPtr  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Volatile_VolatileIntPtr, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Volatile_VolatileIntPtr) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
