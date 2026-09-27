#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_variable_length_error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_variable_length_error)
// Forward declare root types
namespace GlobalNamespace {
struct LL_variable_length_error;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_variable_length_error);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_variable_length_error, "K4os.Compression.LZ4.Engine", "LL/variable_length_error");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/variable_length_error
struct CORDL_TYPE LL_variable_length_error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LL_variable_length_error_Unwrapped
enum struct __LL_variable_length_error_Unwrapped : int32_t {
__E_loop_error = static_cast<int32_t>(0xfffffffe),
__E_initial_error = static_cast<int32_t>(0xffffffff),
__E_ok = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LL_variable_length_error_Unwrapped () const noexcept {
return static_cast<__LL_variable_length_error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LL_variable_length_error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_variable_length_error(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field initial_error value: I32(-1)
static ::GlobalNamespace::LL_variable_length_error const initial_error;

/// @brief Field loop_error value: I32(-2)
static ::GlobalNamespace::LL_variable_length_error const loop_error;

/// @brief Field ok value: I32(0)
static ::GlobalNamespace::LL_variable_length_error const ok;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_variable_length_error, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_variable_length_error) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
