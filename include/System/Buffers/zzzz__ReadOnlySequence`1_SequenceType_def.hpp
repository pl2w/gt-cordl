#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequence`1_SequenceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlySequence`1_SequenceType)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ReadOnlySequence_1_SequenceType;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ReadOnlySequence_1_SequenceType);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ReadOnlySequence_1_SequenceType, "System.Buffers", "ReadOnlySequence`1/SequenceType");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Buffers.ReadOnlySequence`1/SequenceType<T>
struct CORDL_TYPE ReadOnlySequence_1_SequenceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReadOnlySequence_1_SequenceType_Unwrapped
enum struct __ReadOnlySequence_1_SequenceType_Unwrapped : int32_t {
__E_MultiSegment = static_cast<int32_t>(0x0),
__E_Array = static_cast<int32_t>(0x1),
__E_MemoryManager = static_cast<int32_t>(0x2),
__E_String = static_cast<int32_t>(0x3),
__E_Empty = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadOnlySequence_1_SequenceType_Unwrapped () const noexcept {
return static_cast<__ReadOnlySequence_1_SequenceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlySequence_1_SequenceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlySequence_1_SequenceType(int32_t  value__) noexcept;

/// @brief Field Array value: I32(1)
static ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> const Array;

/// @brief Field Empty value: I32(4)
static ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> const Empty;

/// @brief Field MemoryManager value: I32(2)
static ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> const MemoryManager;

/// @brief Field MultiSegment value: I32(0)
static ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> const MultiSegment;

/// @brief Field String value: I32(3)
static ::GlobalNamespace::ReadOnlySequence_1_SequenceType<T> const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
