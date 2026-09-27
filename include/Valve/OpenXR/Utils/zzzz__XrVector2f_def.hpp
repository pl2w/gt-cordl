#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/XrVector2f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(XrVector2f)
// Forward declare root types
namespace Valve::OpenXR::Utils {
struct XrVector2f;
}
// Write type traits
MARK_VAL_T(::Valve::OpenXR::Utils::XrVector2f);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::XrVector2f, "Valve.OpenXR.Utils", "XrVector2f");
// Dependencies 
namespace Valve::OpenXR::Utils {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.XrVector2f
struct CORDL_TYPE XrVector2f {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XrVector2f() ;

// Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr XrVector2f(float_t  X, float_t  Y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field X, offset: 0x0, size: 0x4, def value: None
 float_t  X;

/// @brief Field Y, offset: 0x4, size: 0x4, def value: None
 float_t  Y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::XrVector2f, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::XrVector2f, Y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::XrVector2f) == 0x8, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
