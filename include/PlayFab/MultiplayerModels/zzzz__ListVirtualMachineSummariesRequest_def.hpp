#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListVirtualMachineSummariesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListVirtualMachineSummariesRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListVirtualMachineSummariesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest*, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListVirtualMachineSummariesRequest
class CORDL_TYPE ListVirtualMachineSummariesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field PageSize, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) ::System::Nullable_1<int32_t>  PageSize;

/// @brief Field Region, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field SkipToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkipToken, put=__cordl_internal_set_SkipToken)) ::StringW  SkipToken;

static inline ::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_PageSize() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_PageSize() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_SkipToken() const;

constexpr ::StringW& __cordl_internal_get_SkipToken() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_PageSize(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_SkipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListVirtualMachineSummariesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListVirtualMachineSummariesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListVirtualMachineSummariesRequest(ListVirtualMachineSummariesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListVirtualMachineSummariesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListVirtualMachineSummariesRequest(ListVirtualMachineSummariesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19706};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field PageSize, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___PageSize;

/// @brief Field Region, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field SkipToken, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SkipToken;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest, ___PageSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest, ___Region) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest, ___SkipToken) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
