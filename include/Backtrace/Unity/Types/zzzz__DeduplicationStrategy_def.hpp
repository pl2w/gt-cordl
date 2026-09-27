#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/DeduplicationStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeduplicationStrategy)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::DeduplicationStrategy);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::DeduplicationStrategy, "Backtrace.Unity.Types", "DeduplicationStrategy");
// [Flags]
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.DeduplicationStrategy
struct CORDL_TYPE DeduplicationStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeduplicationStrategy_Unwrapped
enum struct __DeduplicationStrategy_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_Classifier = static_cast<int32_t>(0x2),
__E_Message = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeduplicationStrategy_Unwrapped () const noexcept {
return static_cast<__DeduplicationStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeduplicationStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DeduplicationStrategy(int32_t  value__) noexcept;

/// @brief Field Classifier value: I32(2)
static ::Backtrace::Unity::Types::DeduplicationStrategy const Classifier;

/// @brief Field Default value: I32(1)
static ::Backtrace::Unity::Types::DeduplicationStrategy const Default;

/// @brief Field Message value: I32(4)
static ::Backtrace::Unity::Types::DeduplicationStrategy const Message;

/// @brief Field None value: I32(0)
static ::Backtrace::Unity::Types::DeduplicationStrategy const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::DeduplicationStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::DeduplicationStrategy) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
