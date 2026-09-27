#pragma once
// IWYU pragma private; include "Photon/Pun/RpcTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcTarget)
// Forward declare root types
namespace Photon::Pun {
struct RpcTarget;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::RpcTarget);
DEFINE_IL2CPP_CLASS(::Photon::Pun::RpcTarget, "Photon.Pun", "RpcTarget");
// Dependencies 
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.RpcTarget
struct CORDL_TYPE RpcTarget {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcTarget_Unwrapped
enum struct __RpcTarget_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Others = static_cast<int32_t>(0x1),
__E_MasterClient = static_cast<int32_t>(0x2),
__E_AllBuffered = static_cast<int32_t>(0x3),
__E_OthersBuffered = static_cast<int32_t>(0x4),
__E_AllViaServer = static_cast<int32_t>(0x5),
__E_AllBufferedViaServer = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcTarget_Unwrapped () const noexcept {
return static_cast<__RpcTarget_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcTarget() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcTarget(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::Photon::Pun::RpcTarget const All;

/// @brief Field AllBuffered value: I32(3)
static ::Photon::Pun::RpcTarget const AllBuffered;

/// @brief Field AllBufferedViaServer value: I32(6)
static ::Photon::Pun::RpcTarget const AllBufferedViaServer;

/// @brief Field AllViaServer value: I32(5)
static ::Photon::Pun::RpcTarget const AllViaServer;

/// @brief Field MasterClient value: I32(2)
static ::Photon::Pun::RpcTarget const MasterClient;

/// @brief Field Others value: I32(1)
static ::Photon::Pun::RpcTarget const Others;

/// @brief Field OthersBuffered value: I32(4)
static ::Photon::Pun::RpcTarget const OthersBuffered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::RpcTarget, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::RpcTarget) == 0x4, "Size mismatch!");

} // namespace end def Photon::Pun
