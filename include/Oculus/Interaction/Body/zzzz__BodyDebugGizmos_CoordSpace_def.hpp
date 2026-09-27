#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/BodyDebugGizmos_CoordSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyDebugGizmos_CoordSpace)
// Forward declare root types
namespace GlobalNamespace {
struct BodyDebugGizmos_CoordSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BodyDebugGizmos_CoordSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyDebugGizmos_CoordSpace, "Oculus.Interaction.Body", "BodyDebugGizmos/CoordSpace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace
struct CORDL_TYPE BodyDebugGizmos_CoordSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BodyDebugGizmos_CoordSpace_Unwrapped
enum struct __BodyDebugGizmos_CoordSpace_Unwrapped : int32_t {
__E_World = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BodyDebugGizmos_CoordSpace_Unwrapped () const noexcept {
return static_cast<__BodyDebugGizmos_CoordSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BodyDebugGizmos_CoordSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BodyDebugGizmos_CoordSpace(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::GlobalNamespace::BodyDebugGizmos_CoordSpace const Local;

/// @brief Field World value: I32(0)
static ::GlobalNamespace::BodyDebugGizmos_CoordSpace const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyDebugGizmos_CoordSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyDebugGizmos_CoordSpace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
