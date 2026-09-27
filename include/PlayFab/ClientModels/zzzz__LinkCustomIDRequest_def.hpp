#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkCustomIDRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LinkCustomIDRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class LinkCustomIDRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LinkCustomIDRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LinkCustomIDRequest*, "PlayFab.ClientModels", "LinkCustomIDRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LinkCustomIDRequest
class CORDL_TYPE LinkCustomIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CustomId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomId, put=__cordl_internal_set_CustomId)) ::StringW  CustomId;

/// @brief Field ForceLink, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ForceLink, put=__cordl_internal_set_ForceLink)) ::System::Nullable_1<bool>  ForceLink;

static inline ::PlayFab::ClientModels::LinkCustomIDRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CustomId() const;

constexpr ::StringW& __cordl_internal_get_CustomId() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_ForceLink() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_ForceLink() ;

constexpr void __cordl_internal_set_CustomId(::StringW  value) ;

constexpr void __cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa84df00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkCustomIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkCustomIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkCustomIDRequest(LinkCustomIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkCustomIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkCustomIDRequest(LinkCustomIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20111};

/// @brief Field CustomId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CustomId;

/// @brief Field ForceLink, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___ForceLink;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LinkCustomIDRequest, ___CustomId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LinkCustomIDRequest, ___ForceLink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LinkCustomIDRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
