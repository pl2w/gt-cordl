#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource`1_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCompletionSource`1_Status)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct WebCompletionSource_1_Status;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::WebCompletionSource_1_Status);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::WebCompletionSource_1_Status, "System.Net", "WebCompletionSource`1/Status");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Net.WebCompletionSource`1/Status<T>
struct CORDL_TYPE WebCompletionSource_1_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebCompletionSource_1_Status_Unwrapped
enum struct __WebCompletionSource_1_Status_Unwrapped : int32_t {
__E_Running = static_cast<int32_t>(0x0),
__E_Completed = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_Faulted = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebCompletionSource_1_Status_Unwrapped () const noexcept {
return static_cast<__WebCompletionSource_1_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebCompletionSource_1_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebCompletionSource_1_Status(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(2)
static ::GlobalNamespace::WebCompletionSource_1_Status<T> const Canceled;

/// @brief Field Completed value: I32(1)
static ::GlobalNamespace::WebCompletionSource_1_Status<T> const Completed;

/// @brief Field Faulted value: I32(3)
static ::GlobalNamespace::WebCompletionSource_1_Status<T> const Faulted;

/// @brief Field Running value: I32(0)
static ::GlobalNamespace::WebCompletionSource_1_Status<T> const Running;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
