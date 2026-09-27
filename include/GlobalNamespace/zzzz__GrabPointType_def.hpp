#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabPointType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabPointType)
// Forward declare root types
namespace GlobalNamespace {
struct GrabPointType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GrabPointType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabPointType, "", "GrabPointType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GrabPointType
struct CORDL_TYPE GrabPointType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GrabPointType_Unwrapped
enum struct __GrabPointType_Unwrapped : int32_t {
__E_SinglePoint = static_cast<int32_t>(0x0),
__E_Line = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GrabPointType_Unwrapped () const noexcept {
return static_cast<__GrabPointType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GrabPointType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GrabPointType(int32_t  value__) noexcept;

/// @brief Field Line value: I32(1)
static ::GlobalNamespace::GrabPointType const Line;

/// @brief Field SinglePoint value: I32(0)
static ::GlobalNamespace::GrabPointType const SinglePoint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabPointType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabPointType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
