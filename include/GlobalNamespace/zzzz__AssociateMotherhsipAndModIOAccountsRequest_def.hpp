#pragma once
// IWYU pragma private; include "GlobalNamespace/AssociateMotherhsipAndModIOAccountsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssociateMotherhsipAndModIOAccountsRequest)
// Forward declare root types
namespace GlobalNamespace {
class AssociateMotherhsipAndModIOAccountsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*, "", "AssociateMotherhsipAndModIOAccountsRequest");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssociateMotherhsipAndModIOAccountsRequest
class CORDL_TYPE AssociateMotherhsipAndModIOAccountsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field ModIOId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModIOId, put=__cordl_internal_set_ModIOId)) ::StringW  ModIOId;

/// @brief Field ModIOToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModIOToken, put=__cordl_internal_set_ModIOToken)) ::StringW  ModIOToken;

/// @brief Field MothershipEnvId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipPlayerId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipPlayerId, put=__cordl_internal_set_MothershipPlayerId)) ::StringW  MothershipPlayerId;

/// @brief Field MothershipToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

static inline ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ModIOId() const;

constexpr ::StringW& __cordl_internal_get_ModIOId() ;

constexpr ::StringW const& __cordl_internal_get_ModIOToken() const;

constexpr ::StringW& __cordl_internal_get_ModIOToken() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipPlayerId() const;

constexpr ::StringW& __cordl_internal_get_MothershipPlayerId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr void __cordl_internal_set_ModIOId(::StringW  value) ;

constexpr void __cordl_internal_set_ModIOToken(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x59f1858, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssociateMotherhsipAndModIOAccountsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssociateMotherhsipAndModIOAccountsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssociateMotherhsipAndModIOAccountsRequest(AssociateMotherhsipAndModIOAccountsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssociateMotherhsipAndModIOAccountsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssociateMotherhsipAndModIOAccountsRequest(AssociateMotherhsipAndModIOAccountsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2722};

/// @brief Field MothershipPlayerId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipPlayerId;

/// @brief Field MothershipToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field ModIOId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ModIOId;

/// @brief Field ModIOToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ModIOToken;

/// @brief Field MothershipEnvId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest, ___MothershipPlayerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest, ___MothershipToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest, ___ModIOId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest, ___ModIOToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest, ___MothershipEnvId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
