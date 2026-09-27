#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsOperationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InsightsOperationResponse)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsOperationResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsOperationResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsOperationResponse*, "PlayFab.InsightsModels", "InsightsOperationResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsOperationResponse
class CORDL_TYPE InsightsOperationResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Message, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field OperationId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationId, put=__cordl_internal_set_OperationId)) ::StringW  OperationId;

/// @brief Field OperationType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationType, put=__cordl_internal_set_OperationType)) ::StringW  OperationType;

static inline ::PlayFab::InsightsModels::InsightsOperationResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::StringW const& __cordl_internal_get_OperationId() const;

constexpr ::StringW& __cordl_internal_get_OperationId() ;

constexpr ::StringW const& __cordl_internal_get_OperationType() const;

constexpr ::StringW& __cordl_internal_get_OperationType() ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_OperationId(::StringW  value) ;

constexpr void __cordl_internal_set_OperationType(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840cd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsOperationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsOperationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsOperationResponse(InsightsOperationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsOperationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsOperationResponse(InsightsOperationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19761};

/// @brief Field Message, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field OperationId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OperationId;

/// @brief Field OperationType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___OperationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsOperationResponse, ___Message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsOperationResponse, ___OperationId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsOperationResponse, ___OperationType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsOperationResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
