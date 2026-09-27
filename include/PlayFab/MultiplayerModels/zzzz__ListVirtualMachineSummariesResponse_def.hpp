#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListVirtualMachineSummariesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListVirtualMachineSummariesResponse)
namespace PlayFab::MultiplayerModels {
class VirtualMachineSummary;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListVirtualMachineSummariesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*, "PlayFab.MultiplayerModels", "ListVirtualMachineSummariesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListVirtualMachineSummariesResponse
class CORDL_TYPE ListVirtualMachineSummariesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PageSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) int32_t  PageSize;

/// @brief Field SkipToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkipToken, put=__cordl_internal_set_SkipToken)) ::StringW  SkipToken;

/// @brief Field VirtualMachines, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualMachines, put=__cordl_internal_set_VirtualMachines)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*  VirtualMachines;

static inline ::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_PageSize() const;

constexpr int32_t& __cordl_internal_get_PageSize() ;

constexpr ::StringW const& __cordl_internal_get_SkipToken() const;

constexpr ::StringW& __cordl_internal_get_SkipToken() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>* const& __cordl_internal_get_VirtualMachines() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*& __cordl_internal_get_VirtualMachines() ;

constexpr void __cordl_internal_set_PageSize(int32_t  value) ;

constexpr void __cordl_internal_set_SkipToken(::StringW  value) ;

constexpr void __cordl_internal_set_VirtualMachines(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*  value) ;

/// @brief Method .ctor, addr 0xa840b48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListVirtualMachineSummariesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListVirtualMachineSummariesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListVirtualMachineSummariesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19707};

/// @brief Field PageSize, offset: 0x20, size: 0x4, def value: None
 int32_t  ___PageSize;

/// @brief Field SkipToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___SkipToken;

/// @brief Field VirtualMachines, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*  ___VirtualMachines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse, ___PageSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse, ___SkipToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse, ___VirtualMachines) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
