#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkCustomIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkCustomIDRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkCustomIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkCustomIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkCustomIDRequest*, "PlayFab.ClientModels", "UnlinkCustomIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkCustomIDRequest
class CORDL_TYPE UnlinkCustomIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CustomId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomId, put=__cordl_internal_set_CustomId)) ::StringW  CustomId;

static inline ::PlayFab::ClientModels::UnlinkCustomIDRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CustomId() const;

constexpr ::StringW& __cordl_internal_get_CustomId() ;

constexpr void __cordl_internal_set_CustomId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e2f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkCustomIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkCustomIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkCustomIDRequest(UnlinkCustomIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkCustomIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkCustomIDRequest(UnlinkCustomIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20247};

/// @brief Field CustomId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CustomId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkCustomIDRequest, ___CustomId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkCustomIDRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
