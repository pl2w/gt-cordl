#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ExecuteFunctionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExecuteFunctionRequest)
namespace PlayFab::CloudScriptModels {
class EntityKey;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*, "PlayFab.CloudScriptModels", "ExecuteFunctionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::CloudScriptModels {
// Is value type: false
// CS Name: PlayFab.CloudScriptModels.ExecuteFunctionRequest
class CORDL_TYPE ExecuteFunctionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::CloudScriptModels::EntityKey*  Entity;

/// @brief Field FunctionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field FunctionParameter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionParameter, put=__cordl_internal_set_FunctionParameter)) ::System::Object*  FunctionParameter;

/// @brief Field GeneratePlayStreamEvent, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_GeneratePlayStreamEvent, put=__cordl_internal_set_GeneratePlayStreamEvent)) ::System::Nullable_1<bool>  GeneratePlayStreamEvent;

static inline ::PlayFab::CloudScriptModels::ExecuteFunctionRequest* New_ctor() ;

constexpr ::PlayFab::CloudScriptModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::CloudScriptModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr ::System::Object* const& __cordl_internal_get_FunctionParameter() const;

constexpr ::System::Object*& __cordl_internal_get_FunctionParameter() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_GeneratePlayStreamEvent() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_GeneratePlayStreamEvent() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_FunctionParameter(::System::Object*  value) ;

constexpr void __cordl_internal_set_GeneratePlayStreamEvent(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa842f3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecuteFunctionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecuteFunctionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteFunctionRequest(ExecuteFunctionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteFunctionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteFunctionRequest(ExecuteFunctionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19879};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::CloudScriptModels::EntityKey*  ___Entity;

/// @brief Field FunctionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field FunctionParameter, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___FunctionParameter;

/// @brief Field GeneratePlayStreamEvent, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___GeneratePlayStreamEvent;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionRequest, ___FunctionName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionRequest, ___FunctionParameter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::CloudScriptModels::ExecuteFunctionRequest, ___GeneratePlayStreamEvent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::CloudScriptModels::ExecuteFunctionRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::CloudScriptModels
