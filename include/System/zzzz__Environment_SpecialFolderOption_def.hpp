#pragma once
// IWYU pragma private; include "System/Environment_SpecialFolderOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Environment_SpecialFolderOption)
// Forward declare root types
namespace GlobalNamespace {
struct Environment_SpecialFolderOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Environment_SpecialFolderOption);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Environment_SpecialFolderOption, "System", "Environment/SpecialFolderOption");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Environment/SpecialFolderOption
struct CORDL_TYPE Environment_SpecialFolderOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Environment_SpecialFolderOption_Unwrapped
enum struct __Environment_SpecialFolderOption_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DoNotVerify = static_cast<int32_t>(0x4000),
__E_Create = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Environment_SpecialFolderOption_Unwrapped () const noexcept {
return static_cast<__Environment_SpecialFolderOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Environment_SpecialFolderOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Environment_SpecialFolderOption(int32_t  value__) noexcept;

/// @brief Field Create value: I32(32768)
static ::GlobalNamespace::Environment_SpecialFolderOption const Create;

/// @brief Field DoNotVerify value: I32(16384)
static ::GlobalNamespace::Environment_SpecialFolderOption const DoNotVerify;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Environment_SpecialFolderOption const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Environment_SpecialFolderOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Environment_SpecialFolderOption) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
