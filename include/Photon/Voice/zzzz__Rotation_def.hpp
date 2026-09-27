#pragma once
// IWYU pragma private; include "Photon/Voice/Rotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rotation)
// Forward declare root types
namespace Photon::Voice {
struct Rotation;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::Rotation);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Rotation, "Photon.Voice", "Rotation");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.Rotation
struct CORDL_TYPE Rotation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Rotation_Unwrapped
enum struct __Rotation_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0xffffffff),
__E_Rotate0 = static_cast<int32_t>(0x0),
__E_Rotate90 = static_cast<int32_t>(0x5a),
__E_Rotate180 = static_cast<int32_t>(0xb4),
__E_Rotate270 = static_cast<int32_t>(0x10e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Rotation_Unwrapped () const noexcept {
return static_cast<__Rotation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Rotation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Rotation(int32_t  value__) noexcept;

/// @brief Field Rotate0 value: I32(0)
static ::Photon::Voice::Rotation const Rotate0;

/// @brief Field Rotate180 value: I32(180)
static ::Photon::Voice::Rotation const Rotate180;

/// @brief Field Rotate270 value: I32(270)
static ::Photon::Voice::Rotation const Rotate270;

/// @brief Field Rotate90 value: I32(90)
static ::Photon::Voice::Rotation const Rotate90;

/// @brief Field Undefined value: I32(-1)
static ::Photon::Voice::Rotation const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Rotation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Rotation) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice
