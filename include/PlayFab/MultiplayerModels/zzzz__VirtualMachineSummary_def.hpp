#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/VirtualMachineSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VirtualMachineSummary)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class VirtualMachineSummary;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::VirtualMachineSummary*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::VirtualMachineSummary*, "PlayFab.MultiplayerModels", "VirtualMachineSummary");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.VirtualMachineSummary
class CORDL_TYPE VirtualMachineSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field HealthStatus, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_HealthStatus, put=__cordl_internal_set_HealthStatus)) ::StringW  HealthStatus;

/// @brief Field State, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::StringW  State;

/// @brief Field VmId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VmId, put=__cordl_internal_set_VmId)) ::StringW  VmId;

static inline ::PlayFab::MultiplayerModels::VirtualMachineSummary* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_HealthStatus() const;

constexpr ::StringW& __cordl_internal_get_HealthStatus() ;

constexpr ::StringW const& __cordl_internal_get_State() const;

constexpr ::StringW& __cordl_internal_get_State() ;

constexpr ::StringW const& __cordl_internal_get_VmId() const;

constexpr ::StringW& __cordl_internal_get_VmId() ;

constexpr void __cordl_internal_set_HealthStatus(::StringW  value) ;

constexpr void __cordl_internal_set_State(::StringW  value) ;

constexpr void __cordl_internal_set_VmId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840c88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualMachineSummary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualMachineSummary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualMachineSummary(VirtualMachineSummary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualMachineSummary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualMachineSummary(VirtualMachineSummary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19751};

/// @brief Field HealthStatus, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___HealthStatus;

/// @brief Field State, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___State;

/// @brief Field VmId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___VmId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::VirtualMachineSummary, ___HealthStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::VirtualMachineSummary, ___State) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::VirtualMachineSummary, ___VmId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::VirtualMachineSummary) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
