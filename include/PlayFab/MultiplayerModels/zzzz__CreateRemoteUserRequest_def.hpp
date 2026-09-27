#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateRemoteUserRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateRemoteUserRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CreateRemoteUserRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CreateRemoteUserRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CreateRemoteUserRequest*, "PlayFab.MultiplayerModels", "CreateRemoteUserRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CreateRemoteUserRequest
class CORDL_TYPE CreateRemoteUserRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field ExpirationTime, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpirationTime, put=__cordl_internal_set_ExpirationTime)) ::System::Nullable_1<::System::DateTime>  ExpirationTime;

/// @brief Field Region, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field Username, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

/// @brief Field VmId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_VmId, put=__cordl_internal_set_VmId)) ::StringW  VmId;

static inline ::PlayFab::MultiplayerModels::CreateRemoteUserRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_ExpirationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_ExpirationTime() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr ::StringW const& __cordl_internal_get_VmId() const;

constexpr ::StringW& __cordl_internal_get_VmId() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

constexpr void __cordl_internal_set_VmId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840880, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateRemoteUserRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateRemoteUserRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateRemoteUserRequest(CreateRemoteUserRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateRemoteUserRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateRemoteUserRequest(CreateRemoteUserRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19618};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field ExpirationTime, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___ExpirationTime;

/// @brief Field Region, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field Username, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field VmId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___VmId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest, ___ExpirationTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest, ___Region) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest, ___Username) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest, ___VmId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CreateRemoteUserRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
