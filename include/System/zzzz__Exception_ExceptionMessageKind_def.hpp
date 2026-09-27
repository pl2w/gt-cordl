#pragma once
// IWYU pragma private; include "System/Exception_ExceptionMessageKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Exception_ExceptionMessageKind)
// Forward declare root types
namespace GlobalNamespace {
struct Exception_ExceptionMessageKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Exception_ExceptionMessageKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Exception_ExceptionMessageKind, "System", "Exception/ExceptionMessageKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Exception/ExceptionMessageKind
struct CORDL_TYPE Exception_ExceptionMessageKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Exception_ExceptionMessageKind_Unwrapped
enum struct __Exception_ExceptionMessageKind_Unwrapped : int32_t {
__E_ThreadAbort = static_cast<int32_t>(0x1),
__E_ThreadInterrupted = static_cast<int32_t>(0x2),
__E_OutOfMemory = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Exception_ExceptionMessageKind_Unwrapped () const noexcept {
return static_cast<__Exception_ExceptionMessageKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Exception_ExceptionMessageKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Exception_ExceptionMessageKind(int32_t  value__) noexcept;

/// @brief Field OutOfMemory value: I32(3)
static ::GlobalNamespace::Exception_ExceptionMessageKind const OutOfMemory;

/// @brief Field ThreadAbort value: I32(1)
static ::GlobalNamespace::Exception_ExceptionMessageKind const ThreadAbort;

/// @brief Field ThreadInterrupted value: I32(2)
static ::GlobalNamespace::Exception_ExceptionMessageKind const ThreadInterrupted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5683};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Exception_ExceptionMessageKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Exception_ExceptionMessageKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
