#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_FileStatusFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_FileStatusFlags)
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_FileStatusFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_FileStatusFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_FileStatusFlags, "", "Interop/Sys/FileStatusFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/FileStatusFlags
struct CORDL_TYPE Sys_Interop_FileStatusFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sys_Interop_FileStatusFlags_Unwrapped
enum struct __Sys_Interop_FileStatusFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HasBirthTime = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sys_Interop_FileStatusFlags_Unwrapped () const noexcept {
return static_cast<__Sys_Interop_FileStatusFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_FileStatusFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_FileStatusFlags(int32_t  value__) noexcept;

/// @brief Field HasBirthTime value: I32(1)
static ::GlobalNamespace::Sys_Interop_FileStatusFlags const HasBirthTime;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Sys_Interop_FileStatusFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatusFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_FileStatusFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
