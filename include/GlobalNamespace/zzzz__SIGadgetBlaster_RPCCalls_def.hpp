#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlaster_RPCCalls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetBlaster_RPCCalls)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetBlaster_RPCCalls;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetBlaster_RPCCalls);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetBlaster_RPCCalls, "", "SIGadgetBlaster/RPCCalls");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetBlaster/RPCCalls
struct CORDL_TYPE SIGadgetBlaster_RPCCalls {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetBlaster_RPCCalls_Unwrapped
enum struct __SIGadgetBlaster_RPCCalls_Unwrapped : int32_t {
__E_FireProjectile = static_cast<int32_t>(0x0),
__E_ProjectileHitPlayer = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetBlaster_RPCCalls_Unwrapped () const noexcept {
return static_cast<__SIGadgetBlaster_RPCCalls_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetBlaster_RPCCalls() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetBlaster_RPCCalls(int32_t  value__) noexcept;

/// @brief Field FireProjectile value: I32(0)
static ::GlobalNamespace::SIGadgetBlaster_RPCCalls const FireProjectile;

/// @brief Field ProjectileHitPlayer value: I32(1)
static ::GlobalNamespace::SIGadgetBlaster_RPCCalls const ProjectileHitPlayer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetBlaster_RPCCalls, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetBlaster_RPCCalls) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
