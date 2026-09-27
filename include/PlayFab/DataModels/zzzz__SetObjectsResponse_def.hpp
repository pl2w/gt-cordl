#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetObjectsResponse)
namespace PlayFab::DataModels {
class SetObjectInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::DataModels {
class SetObjectsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::SetObjectsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::SetObjectsResponse*, "PlayFab.DataModels", "SetObjectsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.SetObjectsResponse
class CORDL_TYPE SetObjectsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field ProfileVersion, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field SetResults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SetResults, put=__cordl_internal_set_SetResults)) ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*  SetResults;

static inline ::PlayFab::DataModels::SetObjectsResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>* const& __cordl_internal_get_SetResults() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*& __cordl_internal_get_SetResults() ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_SetResults(::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa842f04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetObjectsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetObjectsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetObjectsResponse(SetObjectsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetObjectsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetObjectsResponse(SetObjectsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19868};

/// @brief Field ProfileVersion, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field SetResults, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObjectInfo*>*  ___SetResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::SetObjectsResponse, ___ProfileVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObjectsResponse, ___SetResults) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::SetObjectsResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::DataModels
