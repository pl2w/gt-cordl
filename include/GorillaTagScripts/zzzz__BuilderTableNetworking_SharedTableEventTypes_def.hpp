#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableNetworking_SharedTableEventTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableNetworking_SharedTableEventTypes)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTableNetworking_SharedTableEventTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes, "GorillaTagScripts", "BuilderTableNetworking/SharedTableEventTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTableNetworking/SharedTableEventTypes
struct CORDL_TYPE BuilderTableNetworking_SharedTableEventTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTableNetworking_SharedTableEventTypes_Unwrapped
enum struct __BuilderTableNetworking_SharedTableEventTypes_Unwrapped : int32_t {
__E_LOAD_STARTED = static_cast<int32_t>(0x0),
__E_LOAD_FAILED = static_cast<int32_t>(0x1),
__E_OUT_OF_BOUNDS = static_cast<int32_t>(0x2),
__E_COUNT = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTableNetworking_SharedTableEventTypes_Unwrapped () const noexcept {
return static_cast<__BuilderTableNetworking_SharedTableEventTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableNetworking_SharedTableEventTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTableNetworking_SharedTableEventTypes(int32_t  value__) noexcept;

/// @brief Field COUNT value: I32(3)
static ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes const COUNT;

/// @brief Field LOAD_FAILED value: I32(1)
static ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes const LOAD_FAILED;

/// @brief Field LOAD_STARTED value: I32(0)
static ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes const LOAD_STARTED;

/// @brief Field OUT_OF_BOUNDS value: I32(2)
static ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes const OUT_OF_BOUNDS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
