#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
CORDL_MODULE_EXPORT(UpgradeSessionRequest)
namespace KID::Model {
class RequestedPermission;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UpgradeSessionRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpgradeSessionRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpgradeSessionRequest*, "", "UpgradeSessionRequest");
// Dependencies KIDRequestData
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpgradeSessionRequest
class CORDL_TYPE UpgradeSessionRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field Permissions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Permissions, put=__cordl_internal_set_Permissions)) ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  Permissions;

static inline ::GlobalNamespace::UpgradeSessionRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* const& __cordl_internal_get_Permissions() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*& __cordl_internal_get_Permissions() ;

constexpr void __cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value) ;

/// @brief Method .ctor, addr 0x5a262dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpgradeSessionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpgradeSessionRequest(UpgradeSessionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpgradeSessionRequest(UpgradeSessionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2887};

/// @brief Field Permissions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  ___Permissions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpgradeSessionRequest, ___Permissions) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpgradeSessionRequest) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
