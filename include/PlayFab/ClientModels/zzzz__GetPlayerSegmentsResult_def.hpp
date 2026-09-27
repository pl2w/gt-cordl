#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerSegmentsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerSegmentsResult)
namespace PlayFab::ClientModels {
class GetSegmentResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerSegmentsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerSegmentsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerSegmentsResult*, "PlayFab.ClientModels", "GetPlayerSegmentsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerSegmentsResult
class CORDL_TYPE GetPlayerSegmentsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Segments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Segments, put=__cordl_internal_set_Segments)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*  Segments;

static inline ::PlayFab::ClientModels::GetPlayerSegmentsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>* const& __cordl_internal_get_Segments() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*& __cordl_internal_get_Segments() ;

constexpr void __cordl_internal_set_Segments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*  value) ;

/// @brief Method .ctor, addr 0xa84dcf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerSegmentsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerSegmentsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerSegmentsResult(GetPlayerSegmentsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerSegmentsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerSegmentsResult(GetPlayerSegmentsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20046};

/// @brief Field Segments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*  ___Segments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerSegmentsResult, ___Segments) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerSegmentsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
