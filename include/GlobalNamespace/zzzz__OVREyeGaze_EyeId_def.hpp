#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREyeGaze_EyeId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREyeGaze_EyeId)
// Forward declare root types
namespace GlobalNamespace {
struct OVREyeGaze_EyeId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVREyeGaze_EyeId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVREyeGaze_EyeId, "", "OVREyeGaze/EyeId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVREyeGaze/EyeId
struct CORDL_TYPE OVREyeGaze_EyeId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVREyeGaze_EyeId_Unwrapped
enum struct __OVREyeGaze_EyeId_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVREyeGaze_EyeId_Unwrapped () const noexcept {
return static_cast<__OVREyeGaze_EyeId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVREyeGaze_EyeId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVREyeGaze_EyeId(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::OVREyeGaze_EyeId const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::OVREyeGaze_EyeId const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVREyeGaze_EyeId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVREyeGaze_EyeId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
