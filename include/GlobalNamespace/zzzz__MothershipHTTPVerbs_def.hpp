#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHTTPVerbs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipHTTPVerbs)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipHTTPVerbs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipHTTPVerbs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipHTTPVerbs, "", "MothershipHTTPVerbs");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipHTTPVerbs
struct CORDL_TYPE MothershipHTTPVerbs {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MothershipHTTPVerbs_Unwrapped
enum struct __MothershipHTTPVerbs_Unwrapped : int32_t {
__E_GET = static_cast<int32_t>(0x0),
__E_POST = static_cast<int32_t>(0x1),
__E_PUT = static_cast<int32_t>(0x2),
__E_PATCH = static_cast<int32_t>(0x3),
__E_DELETE = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MothershipHTTPVerbs_Unwrapped () const noexcept {
return static_cast<__MothershipHTTPVerbs_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MothershipHTTPVerbs() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MothershipHTTPVerbs(int32_t  value__) noexcept;

/// @brief Field DELETE value: I32(4)
static ::GlobalNamespace::MothershipHTTPVerbs const DELETE;

/// @brief Field GET value: I32(0)
static ::GlobalNamespace::MothershipHTTPVerbs const GET;

/// @brief Field PATCH value: I32(3)
static ::GlobalNamespace::MothershipHTTPVerbs const PATCH;

/// @brief Field POST value: I32(1)
static ::GlobalNamespace::MothershipHTTPVerbs const POST;

/// @brief Field PUT value: I32(2)
static ::GlobalNamespace::MothershipHTTPVerbs const PUT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipHTTPVerbs, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipHTTPVerbs) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
