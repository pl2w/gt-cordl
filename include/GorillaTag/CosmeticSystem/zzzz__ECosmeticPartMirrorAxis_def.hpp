#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/ECosmeticPartMirrorAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ECosmeticPartMirrorAxis)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct ECosmeticPartMirrorAxis;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis, "GorillaTag.CosmeticSystem", "ECosmeticPartMirrorAxis");
// Dependencies 
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.ECosmeticPartMirrorAxis
struct CORDL_TYPE ECosmeticPartMirrorAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ECosmeticPartMirrorAxis_Unwrapped
enum struct __ECosmeticPartMirrorAxis_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_Z = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ECosmeticPartMirrorAxis_Unwrapped () const noexcept {
return static_cast<__ECosmeticPartMirrorAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ECosmeticPartMirrorAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ECosmeticPartMirrorAxis(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis const Disabled;

/// @brief Field X value: I32(1)
static ::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis const X;

/// @brief Field Y value: I32(2)
static ::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis const Y;

/// @brief Field Z value: I32(3)
static ::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
