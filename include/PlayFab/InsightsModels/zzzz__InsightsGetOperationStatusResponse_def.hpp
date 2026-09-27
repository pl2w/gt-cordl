#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetOperationStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsGetOperationStatusResponse)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*, "PlayFab.InsightsModels", "InsightsGetOperationStatusResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetOperationStatusResponse
class CORDL_TYPE InsightsGetOperationStatusResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Message, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field OperationCompletedTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationCompletedTime, put=__cordl_internal_set_OperationCompletedTime)) ::System::DateTime  OperationCompletedTime;

/// @brief Field OperationId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationId, put=__cordl_internal_set_OperationId)) ::StringW  OperationId;

/// @brief Field OperationLastUpdated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationLastUpdated, put=__cordl_internal_set_OperationLastUpdated)) ::System::DateTime  OperationLastUpdated;

/// @brief Field OperationStartedTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationStartedTime, put=__cordl_internal_set_OperationStartedTime)) ::System::DateTime  OperationStartedTime;

/// @brief Field OperationType, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationType, put=__cordl_internal_set_OperationType)) ::StringW  OperationType;

/// @brief Field OperationValue, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_OperationValue, put=__cordl_internal_set_OperationValue)) int32_t  OperationValue;

/// @brief Field Status, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::StringW  Status;

static inline ::PlayFab::InsightsModels::InsightsGetOperationStatusResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::System::DateTime const& __cordl_internal_get_OperationCompletedTime() const;

constexpr ::System::DateTime& __cordl_internal_get_OperationCompletedTime() ;

constexpr ::StringW const& __cordl_internal_get_OperationId() const;

constexpr ::StringW& __cordl_internal_get_OperationId() ;

constexpr ::System::DateTime const& __cordl_internal_get_OperationLastUpdated() const;

constexpr ::System::DateTime& __cordl_internal_get_OperationLastUpdated() ;

constexpr ::System::DateTime const& __cordl_internal_get_OperationStartedTime() const;

constexpr ::System::DateTime& __cordl_internal_get_OperationStartedTime() ;

constexpr ::StringW const& __cordl_internal_get_OperationType() const;

constexpr ::StringW& __cordl_internal_get_OperationType() ;

constexpr int32_t const& __cordl_internal_get_OperationValue() const;

constexpr int32_t& __cordl_internal_get_OperationValue() ;

constexpr ::StringW const& __cordl_internal_get_Status() const;

constexpr ::StringW& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_OperationCompletedTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_OperationId(::StringW  value) ;

constexpr void __cordl_internal_set_OperationLastUpdated(::System::DateTime  value) ;

constexpr void __cordl_internal_set_OperationStartedTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_OperationType(::StringW  value) ;

constexpr void __cordl_internal_set_OperationValue(int32_t  value) ;

constexpr void __cordl_internal_set_Status(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840cc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetOperationStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetOperationStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetOperationStatusResponse(InsightsGetOperationStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetOperationStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetOperationStatusResponse(InsightsGetOperationStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19758};

/// @brief Field Message, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field OperationCompletedTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___OperationCompletedTime;

/// @brief Field OperationId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___OperationId;

/// @brief Field OperationLastUpdated, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___OperationLastUpdated;

/// @brief Field OperationStartedTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___OperationStartedTime;

/// @brief Field OperationType, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___OperationType;

/// @brief Field OperationValue, offset: 0x50, size: 0x4, def value: None
 int32_t  ___OperationValue;

/// @brief Field Status, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___Message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationCompletedTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationLastUpdated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationStartedTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___OperationValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse, ___Status) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetOperationStatusResponse) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
