#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceQueryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceQueryType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceQueryType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceQueryType, "", "OVRPlugin/SpaceQueryType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceQueryType
struct CORDL_TYPE OVRPlugin_SpaceQueryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SpaceQueryType_Unwrapped
enum struct __OVRPlugin_SpaceQueryType_Unwrapped : int32_t {
__E_Action = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SpaceQueryType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SpaceQueryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceQueryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceQueryType(int32_t  value__) noexcept;

/// @brief Field Action value: I32(0)
static ::GlobalNamespace::OVRPlugin_SpaceQueryType const Action;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceQueryType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
