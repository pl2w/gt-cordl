#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GenericServiceId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenericServiceId)
// Forward declare root types
namespace PlayFab::ClientModels {
class GenericServiceId;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GenericServiceId*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GenericServiceId*, "PlayFab.ClientModels", "GenericServiceId");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GenericServiceId
class CORDL_TYPE GenericServiceId : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ServiceName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServiceName, put=__cordl_internal_set_ServiceName)) ::StringW  ServiceName;

/// @brief Field UserId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::PlayFab::ClientModels::GenericServiceId* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ServiceName() const;

constexpr ::StringW& __cordl_internal_get_ServiceName() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_ServiceName(::StringW  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dbb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericServiceId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericServiceId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericServiceId(GenericServiceId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericServiceId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericServiceId(GenericServiceId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20005};

/// @brief Field ServiceName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ServiceName;

/// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GenericServiceId, ___ServiceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GenericServiceId, ___UserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GenericServiceId) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
