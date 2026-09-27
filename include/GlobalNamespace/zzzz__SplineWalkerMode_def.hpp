#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineWalkerMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineWalkerMode)
// Forward declare root types
namespace GlobalNamespace {
struct SplineWalkerMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineWalkerMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineWalkerMode, "", "SplineWalkerMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SplineWalkerMode
struct CORDL_TYPE SplineWalkerMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineWalkerMode_Unwrapped
enum struct __SplineWalkerMode_Unwrapped : int32_t {
__E_Once = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
__E_PingPong = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineWalkerMode_Unwrapped () const noexcept {
return static_cast<__SplineWalkerMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineWalkerMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineWalkerMode(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(1)
static ::GlobalNamespace::SplineWalkerMode const Loop;

/// @brief Field Once value: I32(0)
static ::GlobalNamespace::SplineWalkerMode const Once;

/// @brief Field PingPong value: I32(2)
static ::GlobalNamespace::SplineWalkerMode const PingPong;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineWalkerMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineWalkerMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
