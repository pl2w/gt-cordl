#pragma once
// IWYU pragma private; include "System/Net/CookieCollection_Stamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieCollection_Stamp)
// Forward declare root types
namespace GlobalNamespace {
struct CookieCollection_Stamp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CookieCollection_Stamp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CookieCollection_Stamp, "System.Net", "CookieCollection/Stamp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.CookieCollection/Stamp
struct CORDL_TYPE CookieCollection_Stamp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CookieCollection_Stamp_Unwrapped
enum struct __CookieCollection_Stamp_Unwrapped : int32_t {
__E_Check = static_cast<int32_t>(0x0),
__E_Set = static_cast<int32_t>(0x1),
__E_SetToUnused = static_cast<int32_t>(0x2),
__E_SetToMaxUsed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieCollection_Stamp_Unwrapped () const noexcept {
return static_cast<__CookieCollection_Stamp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CookieCollection_Stamp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CookieCollection_Stamp(int32_t  value__) noexcept;

/// @brief Field Check value: I32(0)
static ::GlobalNamespace::CookieCollection_Stamp const Check;

/// @brief Field Set value: I32(1)
static ::GlobalNamespace::CookieCollection_Stamp const Set;

/// @brief Field SetToMaxUsed value: I32(3)
static ::GlobalNamespace::CookieCollection_Stamp const SetToMaxUsed;

/// @brief Field SetToUnused value: I32(2)
static ::GlobalNamespace::CookieCollection_Stamp const SetToUnused;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CookieCollection_Stamp, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CookieCollection_Stamp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
