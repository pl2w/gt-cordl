#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection_FailReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResourceCollection_FailReason)
// Forward declare root types
namespace GlobalNamespace {
struct SIResourceCollection_FailReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResourceCollection_FailReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollection_FailReason, "", "SIResourceCollection/FailReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResourceCollection/FailReason
struct CORDL_TYPE SIResourceCollection_FailReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIResourceCollection_FailReason_Unwrapped
enum struct __SIResourceCollection_FailReason_Unwrapped : int32_t {
__E_NotEnoughRocks = static_cast<int32_t>(0x0),
__E_ResourcesFull = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIResourceCollection_FailReason_Unwrapped () const noexcept {
return static_cast<__SIResourceCollection_FailReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollection_FailReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIResourceCollection_FailReason(int32_t  value__) noexcept;

/// @brief Field NotEnoughRocks value: I32(0)
static ::GlobalNamespace::SIResourceCollection_FailReason const NotEnoughRocks;

/// @brief Field ResourcesFull value: I32(1)
static ::GlobalNamespace::SIResourceCollection_FailReason const ResourcesFull;

/// @brief Field Unknown value: I32(2)
static ::GlobalNamespace::SIResourceCollection_FailReason const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceCollection_FailReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceCollection_FailReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
