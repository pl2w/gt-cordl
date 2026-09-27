#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ExecuteCloudScriptRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__CloudScriptRevisionOption_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExecuteCloudScriptRequest)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ExecuteCloudScriptRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ExecuteCloudScriptRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ExecuteCloudScriptRequest*, "PlayFab.ClientModels", "ExecuteCloudScriptRequest");
// Dependencies PlayFab.ClientModels.CloudScriptRevisionOption, PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ExecuteCloudScriptRequest
class CORDL_TYPE ExecuteCloudScriptRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FunctionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field FunctionParameter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionParameter, put=__cordl_internal_set_FunctionParameter)) ::System::Object*  FunctionParameter;

/// @brief Field GeneratePlayStreamEvent, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_GeneratePlayStreamEvent, put=__cordl_internal_set_GeneratePlayStreamEvent)) ::System::Nullable_1<bool>  GeneratePlayStreamEvent;

/// @brief Field RevisionSelection, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_RevisionSelection, put=__cordl_internal_set_RevisionSelection)) ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption>  RevisionSelection;

/// @brief Field SpecificRevision, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_SpecificRevision, put=__cordl_internal_set_SpecificRevision)) ::System::Nullable_1<int32_t>  SpecificRevision;

static inline ::PlayFab::ClientModels::ExecuteCloudScriptRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::System::Object* const& __cordl_internal_get_FunctionParameter() const;

constexpr ::System::Object*& __cordl_internal_get_FunctionParameter() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_GeneratePlayStreamEvent() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_GeneratePlayStreamEvent() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption> const& __cordl_internal_get_RevisionSelection() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption>& __cordl_internal_get_RevisionSelection() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_SpecificRevision() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_SpecificRevision() ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionParameter(::System::Object*  value) ;

constexpr void __cordl_internal_set_GeneratePlayStreamEvent(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_RevisionSelection(::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption>  value) ;

constexpr void __cordl_internal_set_SpecificRevision(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa84db60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecuteCloudScriptRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCloudScriptRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteCloudScriptRequest(ExecuteCloudScriptRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCloudScriptRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteCloudScriptRequest(ExecuteCloudScriptRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19994};

/// @brief Field FunctionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field FunctionParameter, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___FunctionParameter;

/// @brief Field GeneratePlayStreamEvent, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___GeneratePlayStreamEvent;

/// @brief Field RevisionSelection, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption>  ___RevisionSelection;

/// @brief Size padding 0x40 - 0x58 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field SpecificRevision, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___SpecificRevision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptRequest, ___FunctionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptRequest, ___FunctionParameter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptRequest, ___GeneratePlayStreamEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptRequest, ___RevisionSelection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ExecuteCloudScriptRequest, ___SpecificRevision) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ExecuteCloudScriptRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
