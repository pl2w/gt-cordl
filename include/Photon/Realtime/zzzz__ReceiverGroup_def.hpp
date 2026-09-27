#pragma once
// IWYU pragma private; include "Photon/Realtime/ReceiverGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverGroup)
// Forward declare root types
namespace Photon::Realtime {
struct ReceiverGroup;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::ReceiverGroup);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ReceiverGroup, "Photon.Realtime", "ReceiverGroup");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.ReceiverGroup
struct CORDL_TYPE ReceiverGroup {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ReceiverGroup_Unwrapped
enum struct __ReceiverGroup_Unwrapped : uint8_t {
__E_Others = static_cast<uint8_t>(0x0u),
__E_All = static_cast<uint8_t>(0x1u),
__E_MasterClient = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReceiverGroup_Unwrapped () const noexcept {
return static_cast<__ReceiverGroup_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReceiverGroup() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ReceiverGroup(uint8_t  value__) noexcept;

/// @brief Field All value: U8(1)
static ::Photon::Realtime::ReceiverGroup const All;

/// @brief Field MasterClient value: U8(2)
static ::Photon::Realtime::ReceiverGroup const MasterClient;

/// @brief Field Others value: U8(0)
static ::Photon::Realtime::ReceiverGroup const Others;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ReceiverGroup, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ReceiverGroup) == 0x1, "Size mismatch!");

} // namespace end def Photon::Realtime
