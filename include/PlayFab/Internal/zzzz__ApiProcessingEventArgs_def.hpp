#pragma once
// IWYU pragma private; include "PlayFab/Internal/ApiProcessingEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Internal/zzzz__ApiProcessingEventType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ApiProcessingEventArgs)
namespace PlayFab::SharedModels {
class PlayFabRequestCommon;
}
namespace PlayFab::SharedModels {
class PlayFabResultCommon;
}
// Forward declare root types
namespace PlayFab::Internal {
class ApiProcessingEventArgs;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::ApiProcessingEventArgs*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::ApiProcessingEventArgs*, "PlayFab.Internal", "ApiProcessingEventArgs");
// Dependencies PlayFab.Internal.ApiProcessingEventType, PlayFab.SharedModels.PlayFabRequestCommon, System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.ApiProcessingEventArgs
class CORDL_TYPE ApiProcessingEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field ApiEndpoint, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiEndpoint, put=__cordl_internal_set_ApiEndpoint)) ::StringW  ApiEndpoint;

/// @brief Field EventType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_EventType, put=__cordl_internal_set_EventType)) ::PlayFab::Internal::ApiProcessingEventType  EventType;

/// @brief Field Request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Request, put=__cordl_internal_set_Request)) ::PlayFab::SharedModels::PlayFabRequestCommon*  Request;

/// @brief Field Result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) ::PlayFab::SharedModels::PlayFabResultCommon*  Result;

/// @brief Method GetRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TRequest>
requires(::cordl_internals::type_constraint<TRequest, ::PlayFab::SharedModels::PlayFabRequestCommon*>)
inline TRequest GetRequest() ;

static inline ::PlayFab::Internal::ApiProcessingEventArgs* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ApiEndpoint() const;

constexpr ::StringW& __cordl_internal_get_ApiEndpoint() ;

constexpr ::PlayFab::Internal::ApiProcessingEventType const& __cordl_internal_get_EventType() const;

constexpr ::PlayFab::Internal::ApiProcessingEventType& __cordl_internal_get_EventType() ;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& __cordl_internal_get_Request() const;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& __cordl_internal_get_Request() ;

constexpr ::PlayFab::SharedModels::PlayFabResultCommon* const& __cordl_internal_get_Result() const;

constexpr ::PlayFab::SharedModels::PlayFabResultCommon*& __cordl_internal_get_Result() ;

constexpr void __cordl_internal_set_ApiEndpoint(::StringW  value) ;

constexpr void __cordl_internal_set_EventType(::PlayFab::Internal::ApiProcessingEventType  value) ;

constexpr void __cordl_internal_set_Request(::PlayFab::SharedModels::PlayFabRequestCommon*  value) ;

constexpr void __cordl_internal_set_Result(::PlayFab::SharedModels::PlayFabResultCommon*  value) ;

/// @brief Method .ctor, addr 0xa8467d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApiProcessingEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApiProcessingEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApiProcessingEventArgs(ApiProcessingEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApiProcessingEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApiProcessingEventArgs(ApiProcessingEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19925};

/// @brief Field ApiEndpoint, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ApiEndpoint;

/// @brief Field EventType, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::Internal::ApiProcessingEventType  ___EventType;

/// @brief Field Request, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::SharedModels::PlayFabRequestCommon*  ___Request;

/// @brief Field Result, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::SharedModels::PlayFabResultCommon*  ___Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::ApiProcessingEventArgs, ___ApiEndpoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::ApiProcessingEventArgs, ___EventType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::ApiProcessingEventArgs, ___Request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::ApiProcessingEventArgs, ___Result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::ApiProcessingEventArgs) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::Internal
