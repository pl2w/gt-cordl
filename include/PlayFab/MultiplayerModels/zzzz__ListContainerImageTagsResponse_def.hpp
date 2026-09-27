#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListContainerImageTagsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListContainerImageTagsResponse)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListContainerImageTagsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListContainerImageTagsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListContainerImageTagsResponse*, "PlayFab.MultiplayerModels", "ListContainerImageTagsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListContainerImageTagsResponse
class CORDL_TYPE ListContainerImageTagsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Tags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

static inline ::PlayFab::MultiplayerModels::ListContainerImageTagsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListContainerImageTagsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListContainerImageTagsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListContainerImageTagsResponse(ListContainerImageTagsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListContainerImageTagsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListContainerImageTagsResponse(ListContainerImageTagsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19691};

/// @brief Field Tags, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListContainerImageTagsResponse, ___Tags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListContainerImageTagsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
