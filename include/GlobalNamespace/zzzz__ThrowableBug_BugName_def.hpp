#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBug_BugName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBug_BugName)
// Forward declare root types
namespace GlobalNamespace {
struct ThrowableBug_BugName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ThrowableBug_BugName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBug_BugName, "", "ThrowableBug/BugName");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ThrowableBug/BugName
struct CORDL_TYPE ThrowableBug_BugName {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThrowableBug_BugName_Unwrapped
enum struct __ThrowableBug_BugName_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_DougTheBug = static_cast<int32_t>(0x1),
__E_MattTheBat = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThrowableBug_BugName_Unwrapped () const noexcept {
return static_cast<__ThrowableBug_BugName_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBug_BugName() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ThrowableBug_BugName(int32_t  value__) noexcept;

/// @brief Field DougTheBug value: I32(1)
static ::GlobalNamespace::ThrowableBug_BugName const DougTheBug;

/// @brief Field MattTheBat value: I32(2)
static ::GlobalNamespace::ThrowableBug_BugName const MattTheBat;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::ThrowableBug_BugName const NONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBug_BugName, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBug_BugName) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
