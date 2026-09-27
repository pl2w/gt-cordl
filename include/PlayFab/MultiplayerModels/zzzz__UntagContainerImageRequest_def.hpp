#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UntagContainerImageRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UntagContainerImageRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class UntagContainerImageRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::UntagContainerImageRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::UntagContainerImageRequest*, "PlayFab.MultiplayerModels", "UntagContainerImageRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.UntagContainerImageRequest
class CORDL_TYPE UntagContainerImageRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ImageName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImageName, put=__cordl_internal_set_ImageName)) ::StringW  ImageName;

/// @brief Field Tag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tag, put=__cordl_internal_set_Tag)) ::StringW  Tag;

static inline ::PlayFab::MultiplayerModels::UntagContainerImageRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ImageName() const;

constexpr ::StringW& __cordl_internal_get_ImageName() ;

constexpr ::StringW const& __cordl_internal_get_Tag() const;

constexpr ::StringW& __cordl_internal_get_Tag() ;

constexpr void __cordl_internal_set_ImageName(::StringW  value) ;

constexpr void __cordl_internal_set_Tag(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840c60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UntagContainerImageRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UntagContainerImageRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UntagContainerImageRequest(UntagContainerImageRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UntagContainerImageRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UntagContainerImageRequest(UntagContainerImageRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19746};

/// @brief Field ImageName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ImageName;

/// @brief Field Tag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::UntagContainerImageRequest, ___ImageName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::UntagContainerImageRequest, ___Tag) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::UntagContainerImageRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
