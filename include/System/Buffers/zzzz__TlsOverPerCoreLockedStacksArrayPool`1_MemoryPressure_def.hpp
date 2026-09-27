#pragma once
// IWYU pragma private; include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool`1_MemoryPressure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsOverPerCoreLockedStacksArrayPool`1_MemoryPressure)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T>
struct CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure_Unwrapped
enum struct __TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure_Unwrapped () const noexcept {
return static_cast<__TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> const High;

/// @brief Field Low value: I32(0)
static ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T> const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
