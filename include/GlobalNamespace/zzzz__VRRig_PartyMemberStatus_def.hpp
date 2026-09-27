#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig_PartyMemberStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRig_PartyMemberStatus)
// Forward declare root types
namespace GlobalNamespace {
struct VRRig_PartyMemberStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRRig_PartyMemberStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRig_PartyMemberStatus, "", "VRRig/PartyMemberStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRRig/PartyMemberStatus
struct CORDL_TYPE VRRig_PartyMemberStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRRig_PartyMemberStatus_Unwrapped
enum struct __VRRig_PartyMemberStatus_Unwrapped : int32_t {
__E_NeedsUpdate = static_cast<int32_t>(0x0),
__E_InLocalParty = static_cast<int32_t>(0x1),
__E_NotInLocalParty = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRRig_PartyMemberStatus_Unwrapped () const noexcept {
return static_cast<__VRRig_PartyMemberStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VRRig_PartyMemberStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VRRig_PartyMemberStatus(int32_t  value__) noexcept;

/// @brief Field InLocalParty value: I32(1)
static ::GlobalNamespace::VRRig_PartyMemberStatus const InLocalParty;

/// @brief Field NeedsUpdate value: I32(0)
static ::GlobalNamespace::VRRig_PartyMemberStatus const NeedsUpdate;

/// @brief Field NotInLocalParty value: I32(2)
static ::GlobalNamespace::VRRig_PartyMemberStatus const NotInLocalParty;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRig_PartyMemberStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRig_PartyMemberStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
