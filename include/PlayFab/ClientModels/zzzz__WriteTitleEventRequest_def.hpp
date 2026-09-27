#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/WriteTitleEventRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WriteTitleEventRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class WriteTitleEventRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::WriteTitleEventRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::WriteTitleEventRequest*, "PlayFab.ClientModels", "WriteTitleEventRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.WriteTitleEventRequest
class CORDL_TYPE WriteTitleEventRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Body, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Body, put=__cordl_internal_set_Body)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Body;

/// @brief Field EventName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventName, put=__cordl_internal_set_EventName)) ::StringW  EventName;

/// @brief Field Timestamp, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Timestamp, put=__cordl_internal_set_Timestamp)) ::System::Nullable_1<::System::DateTime>  Timestamp;

static inline ::PlayFab::ClientModels::WriteTitleEventRequest* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_Body() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_Body() ;

constexpr ::StringW const& __cordl_internal_get_EventName() const;

constexpr ::StringW& __cordl_internal_get_EventName() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_Timestamp() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_Timestamp() ;

constexpr void __cordl_internal_set_Body(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_EventName(::StringW  value) ;

constexpr void __cordl_internal_set_Timestamp(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method .ctor, addr 0xa84e578, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteTitleEventRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteTitleEventRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteTitleEventRequest(WriteTitleEventRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteTitleEventRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteTitleEventRequest(WriteTitleEventRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20329};

/// @brief Field Body, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___Body;

/// @brief Field EventName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___EventName;

/// @brief Field Timestamp, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___Timestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::WriteTitleEventRequest, ___Body) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::WriteTitleEventRequest, ___EventName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::WriteTitleEventRequest, ___Timestamp) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::WriteTitleEventRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
