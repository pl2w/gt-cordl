#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersManager_AllowGrabbingFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersManager_AllowGrabbingFlags)
// Forward declare root types
namespace GlobalNamespace {
struct CrittersManager_AllowGrabbingFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersManager_AllowGrabbingFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersManager_AllowGrabbingFlags, "", "CrittersManager/AllowGrabbingFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersManager/AllowGrabbingFlags
struct CORDL_TYPE CrittersManager_AllowGrabbingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrittersManager_AllowGrabbingFlags_Unwrapped
enum struct __CrittersManager_AllowGrabbingFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutOfHands = static_cast<int32_t>(0x1),
__E_FromBags = static_cast<int32_t>(0x2),
__E_EntireBag = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrittersManager_AllowGrabbingFlags_Unwrapped () const noexcept {
return static_cast<__CrittersManager_AllowGrabbingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrittersManager_AllowGrabbingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CrittersManager_AllowGrabbingFlags(int32_t  value__) noexcept;

/// @brief Field EntireBag value: I32(4)
static ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const EntireBag;

/// @brief Field FromBags value: I32(2)
static ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const FromBags;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const None;

/// @brief Field OutOfHands value: I32(1)
static ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const OutOfHands;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersManager_AllowGrabbingFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersManager_AllowGrabbingFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
