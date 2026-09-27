#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPoolEventSource_BufferAllocatedReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolEventSource_BufferAllocatedReason)
// Forward declare root types
namespace GlobalNamespace {
struct ArrayPoolEventSource_BufferAllocatedReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason, "System.Buffers", "ArrayPoolEventSource/BufferAllocatedReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Buffers.ArrayPoolEventSource/BufferAllocatedReason
struct CORDL_TYPE ArrayPoolEventSource_BufferAllocatedReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped
enum struct __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped : int32_t {
__E_Pooled = static_cast<int32_t>(0x0),
__E_OverMaximumSize = static_cast<int32_t>(0x1),
__E_PoolExhausted = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped () const noexcept {
return static_cast<__ArrayPoolEventSource_BufferAllocatedReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArrayPoolEventSource_BufferAllocatedReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ArrayPoolEventSource_BufferAllocatedReason(int32_t  value__) noexcept;

/// @brief Field OverMaximumSize value: I32(1)
static ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason const OverMaximumSize;

/// @brief Field PoolExhausted value: I32(2)
static ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason const PoolExhausted;

/// @brief Field Pooled value: I32(0)
static ::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason const Pooled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArrayPoolEventSource_BufferAllocatedReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
