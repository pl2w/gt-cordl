#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteRemoteUserRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteRemoteUserRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DeleteRemoteUserRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*, "PlayFab.MultiplayerModels", "DeleteRemoteUserRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DeleteRemoteUserRequest
class CORDL_TYPE DeleteRemoteUserRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field Region, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field Username, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

/// @brief Field VmId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VmId, put=__cordl_internal_set_VmId)) ::StringW  VmId;

static inline ::PlayFab::MultiplayerModels::DeleteRemoteUserRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr ::StringW const& __cordl_internal_get_VmId() const;

constexpr ::StringW& __cordl_internal_get_VmId() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

constexpr void __cordl_internal_set_VmId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840908, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteRemoteUserRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteRemoteUserRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteRemoteUserRequest(DeleteRemoteUserRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteRemoteUserRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteRemoteUserRequest(DeleteRemoteUserRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19635};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field Region, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field Username, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field VmId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___VmId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest, ___Region) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest, ___Username) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest, ___VmId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
