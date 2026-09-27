#pragma once
// IWYU pragma private; include "GlobalNamespace/NetEventOptions_RecieverTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetEventOptions_RecieverTarget)
// Forward declare root types
namespace GlobalNamespace {
struct NetEventOptions_RecieverTarget;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetEventOptions_RecieverTarget);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetEventOptions_RecieverTarget, "", "NetEventOptions/RecieverTarget");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetEventOptions/RecieverTarget
struct CORDL_TYPE NetEventOptions_RecieverTarget {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetEventOptions_RecieverTarget_Unwrapped
enum struct __NetEventOptions_RecieverTarget_Unwrapped : int32_t {
__E_others = static_cast<int32_t>(0x0),
__E_all = static_cast<int32_t>(0x1),
__E_master = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetEventOptions_RecieverTarget_Unwrapped () const noexcept {
return static_cast<__NetEventOptions_RecieverTarget_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetEventOptions_RecieverTarget() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetEventOptions_RecieverTarget(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field all value: I32(1)
static ::GlobalNamespace::NetEventOptions_RecieverTarget const all;

/// @brief Field master value: I32(2)
static ::GlobalNamespace::NetEventOptions_RecieverTarget const master;

/// @brief Field others value: I32(0)
static ::GlobalNamespace::NetEventOptions_RecieverTarget const others;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetEventOptions_RecieverTarget, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetEventOptions_RecieverTarget) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
