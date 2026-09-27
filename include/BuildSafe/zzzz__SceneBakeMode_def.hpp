#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneBakeMode)
// Forward declare root types
namespace BuildSafe {
struct SceneBakeMode;
}
// Write type traits
MARK_VAL_T(::BuildSafe::SceneBakeMode);
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneBakeMode, "BuildSafe", "SceneBakeMode");
// Dependencies 
namespace BuildSafe {
// Is value type: true
// CS Name: BuildSafe.SceneBakeMode
struct CORDL_TYPE SceneBakeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SceneBakeMode_Unwrapped
enum struct __SceneBakeMode_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_OnBuildPlayer = static_cast<int32_t>(0x1),
__E_OnEditorPlayMode = static_cast<int32_t>(0x2),
__E_Disabled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SceneBakeMode_Unwrapped () const noexcept {
return static_cast<__SceneBakeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SceneBakeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SceneBakeMode(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::BuildSafe::SceneBakeMode const Always;

/// @brief Field Disabled value: I32(3)
static ::BuildSafe::SceneBakeMode const Disabled;

/// @brief Field OnBuildPlayer value: I32(1)
static ::BuildSafe::SceneBakeMode const OnBuildPlayer;

/// @brief Field OnEditorPlayMode value: I32(2)
static ::BuildSafe::SceneBakeMode const OnEditorPlayMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4258};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BuildSafe::SceneBakeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BuildSafe::SceneBakeMode) == 0x4, "Size mismatch!");

} // namespace end def BuildSafe
