#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityZoneProxy_ProxyBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GravityZoneProxy_ProxyBehaviour)
// Forward declare root types
namespace GlobalNamespace {
struct GravityZoneProxy_ProxyBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour, "GorillaTag.Gravity", "GravityZoneProxy/ProxyBehaviour");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Gravity.GravityZoneProxy/ProxyBehaviour
struct CORDL_TYPE GravityZoneProxy_ProxyBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GravityZoneProxy_ProxyBehaviour_Unwrapped
enum struct __GravityZoneProxy_ProxyBehaviour_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EnterZone = static_cast<int32_t>(0x1),
__E_ExitZone = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GravityZoneProxy_ProxyBehaviour_Unwrapped () const noexcept {
return static_cast<__GravityZoneProxy_ProxyBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GravityZoneProxy_ProxyBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GravityZoneProxy_ProxyBehaviour(int32_t  value__) noexcept;

/// @brief Field EnterZone value: I32(1)
static ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const EnterZone;

/// @brief Field ExitZone value: I32(2)
static ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const ExitZone;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GravityZoneProxy_ProxyBehaviour const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GravityZoneProxy_ProxyBehaviour) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
