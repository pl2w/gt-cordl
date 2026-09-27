#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaBodyType)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaBodyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaBodyType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaBodyType, "", "GorillaBodyType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaBodyType
struct CORDL_TYPE GorillaBodyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaBodyType_Unwrapped
enum struct __GorillaBodyType_Unwrapped : int32_t {
__E_Invisible = static_cast<int32_t>(0xffffffff),
__E_Default = static_cast<int32_t>(0x0),
__E_NoHead = static_cast<int32_t>(0x1),
__E_Skeleton = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaBodyType_Unwrapped () const noexcept {
return static_cast<__GorillaBodyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaBodyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaBodyType(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::GorillaBodyType const Default;

/// @brief Field Invisible value: I32(-1)
static ::GlobalNamespace::GorillaBodyType const Invisible;

/// @brief Field NoHead value: I32(1)
static ::GlobalNamespace::GorillaBodyType const NoHead;

/// @brief Field Skeleton value: I32(2)
static ::GlobalNamespace::GorillaBodyType const Skeleton;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaBodyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaBodyType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
