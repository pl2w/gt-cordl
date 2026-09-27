#pragma once
// IWYU pragma private; include "GlobalNamespace/SetOptInPermissionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetOptInPermissionsRequest)
// Forward declare root types
namespace GlobalNamespace {
class SetOptInPermissionsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetOptInPermissionsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetOptInPermissionsRequest*, "", "SetOptInPermissionsRequest");
// Dependencies KIDRequestData
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetOptInPermissionsRequest
class CORDL_TYPE SetOptInPermissionsRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field OptInPermissions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OptInPermissions, put=__cordl_internal_set_OptInPermissions)) ::ArrayW<::StringW>  OptInPermissions;

static inline ::GlobalNamespace::SetOptInPermissionsRequest* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_OptInPermissions() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_OptInPermissions() ;

constexpr void __cordl_internal_set_OptInPermissions(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5a262d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetOptInPermissionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetOptInPermissionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetOptInPermissionsRequest(SetOptInPermissionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetOptInPermissionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetOptInPermissionsRequest(SetOptInPermissionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2886};

/// @brief Field OptInPermissions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___OptInPermissions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetOptInPermissionsRequest, ___OptInPermissions) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetOptInPermissionsRequest) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
