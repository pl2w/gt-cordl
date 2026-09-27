#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_StreamReadMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Process_StreamReadMode)
// Forward declare root types
namespace GlobalNamespace {
struct Process_StreamReadMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Process_StreamReadMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Process_StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Diagnostics.Process/StreamReadMode
struct CORDL_TYPE Process_StreamReadMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Process_StreamReadMode_Unwrapped
enum struct __Process_StreamReadMode_Unwrapped : int32_t {
__E_undefined = static_cast<int32_t>(0x0),
__E_syncMode = static_cast<int32_t>(0x1),
__E_asyncMode = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Process_StreamReadMode_Unwrapped () const noexcept {
return static_cast<__Process_StreamReadMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Process_StreamReadMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Process_StreamReadMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field asyncMode value: I32(2)
static ::GlobalNamespace::Process_StreamReadMode const asyncMode;

/// @brief Field syncMode value: I32(1)
static ::GlobalNamespace::Process_StreamReadMode const syncMode;

/// @brief Field undefined value: I32(0)
static ::GlobalNamespace::Process_StreamReadMode const undefined;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Process_StreamReadMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Process_StreamReadMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
