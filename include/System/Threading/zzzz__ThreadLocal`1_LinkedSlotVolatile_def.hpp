#pragma once
// IWYU pragma private; include "System/Threading/ThreadLocal`1_LinkedSlotVolatile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ThreadLocal`1_LinkedSlotVolatile)
namespace System::Threading {
template<typename T>
class ThreadLocal_1_LinkedSlot;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ThreadLocal_1_LinkedSlotVolatile;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ThreadLocal_1_LinkedSlotVolatile);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ThreadLocal_1_LinkedSlotVolatile, "System.Threading", "ThreadLocal`1/LinkedSlotVolatile");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Threading.ThreadLocal`1/LinkedSlotVolatile<T>
struct CORDL_TYPE ThreadLocal_1_LinkedSlotVolatile {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ThreadLocal_1_LinkedSlotVolatile() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::ThreadLocal_1_LinkedSlot<T>*", modifiers: "", def_value: None, comment: None }]
constexpr ThreadLocal_1_LinkedSlotVolatile(::System::Threading::ThreadLocal_1_LinkedSlot<T>*  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5829};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::ThreadLocal_1_LinkedSlot<T>*  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
