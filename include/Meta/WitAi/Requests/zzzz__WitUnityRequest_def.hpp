#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitUnityRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitUnityRequest)
namespace GlobalNamespace {
struct WitUnityRequest__SendMessageAsync_d__20;
}
namespace GlobalNamespace {
struct __c__DisplayClass19_0_WitUnityRequest___HandleSend_b__0_d;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::Voice {
struct VoiceRequestState;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class WitMessageVRequest;
}
namespace Meta::WitAi::Requests {
class WitUnityRequest___c__DisplayClass19_0;
}
namespace Meta::WitAi::Requests {
class WitVRequest;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitUnityRequest;
}
namespace Meta::WitAi::Requests {
class WitUnityRequest___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitUnityRequest*);
MARK_REF_T(::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitUnityRequest*, "Meta.WitAi.Requests", "WitUnityRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0*, "Meta.WitAi.Requests", "WitUnityRequest/<>c__DisplayClass19_0");
// Dependencies Meta.WitAi.Requests.VoiceServiceRequest
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitUnityRequest
class CORDL_TYPE WitUnityRequest : public ::Meta::WitAi::Requests::VoiceServiceRequest {
public:
// Declarations
using _SendMessageAsync_d__20 = ::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20;

using __c__DisplayClass19_0 = ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0;

 __declspec(property(get=get_Configuration, put=set_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

 __declspec(property(get=get_DecodeRawResponses)) bool  DecodeRawResponses;

 __declspec(property(get=get_Endpoint, put=set_Endpoint)) ::StringW  Endpoint;

 __declspec(property(get=get_ShouldPost, put=set_ShouldPost)) bool  ShouldPost;

/// @brief Field <Configuration>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  _Configuration_k__BackingField;

/// @brief Field <Endpoint>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Endpoint_k__BackingField, put=__cordl_internal_set__Endpoint_k__BackingField)) ::StringW  _Endpoint_k__BackingField;

/// @brief Field <ShouldPost>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShouldPost_k__BackingField, put=__cordl_internal_set__ShouldPost_k__BackingField)) bool  _ShouldPost_k__BackingField;

/// @brief Field _initialized, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _request, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__request, put=__cordl_internal_set__request)) ::Meta::WitAi::Requests::WitVRequest*  _request;

/// @brief Method GetActivateAudioError, addr 0x9e94408, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method GetSendError, addr 0x9e93e84, size 0xc8, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method HandleAudioActivation, addr 0x9e94448, size 0x14, virtual true, abstract: false, final false
inline void HandleAudioActivation() ;

/// @brief Method HandleAudioDeactivation, addr 0x9e9445c, size 0x14, virtual true, abstract: false, final false
inline void HandleAudioDeactivation() ;

/// @brief Method HandleCancel, addr 0x9e94374, size 0x1c, virtual true, abstract: false, final false
inline void HandleCancel() ;

/// @brief Method HandleFinalResponse, addr 0x9e9436c, size 0x8, virtual false, abstract: false, final false
inline void HandleFinalResponse(::StringW  rawResponse, ::StringW  error) ;

/// @brief Method HandlePartialResponse, addr 0x9e94224, size 0xc, virtual false, abstract: false, final false
inline void HandlePartialResponse(::StringW  rawResponse) ;

/// @brief Method HandleResponse, addr 0x9e94230, size 0x13c, virtual false, abstract: false, final false
inline void HandleResponse(::StringW  rawResponse, ::StringW  error, bool  final) ;

/// @brief Method HandleSend, addr 0x9e93f4c, size 0x1d8, virtual true, abstract: false, final false
inline void HandleSend() ;

static inline ::Meta::WitAi::Requests::WitUnityRequest* New_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::Meta::Voice::NLPRequestInputType  newDataType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

/// @brief Method OnComplete, addr 0x9e94390, size 0x78, virtual true, abstract: false, final false
inline void OnComplete() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitUnityRequest::<SendMessageAsync>d__20))]
/// @brief Method SendMessageAsync, addr 0x9e9412c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendMessageAsync(::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest) ;

/// @brief Method SetState, addr 0x9e93e20, size 0x64, virtual true, abstract: false, final false
inline void SetState(::Meta::Voice::VoiceRequestState  newState) ;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShouldPost_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShouldPost_k__BackingField() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::Meta::WitAi::Requests::WitVRequest* const& __cordl_internal_get__request() const;

constexpr ::Meta::WitAi::Requests::WitVRequest*& __cordl_internal_get__request() ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value) ;

constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ShouldPost_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__request(::Meta::WitAi::Requests::WitVRequest*  value) ;

/// @brief Method .ctor, addr 0x9e93b64, size 0x2bc, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::Meta::Voice::NLPRequestInputType  newDataType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

/// [CompilerGenerated]
/// @brief Method get_Configuration, addr 0x9e93b2c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_DecodeRawResponses, addr 0x9e93b5c, size 0x8, virtual true, abstract: false, final false
inline bool get_DecodeRawResponses() ;

/// [CompilerGenerated]
/// @brief Method get_Endpoint, addr 0x9e93b3c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Endpoint() ;

/// [CompilerGenerated]
/// @brief Method get_ShouldPost, addr 0x9e93b4c, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldPost() ;

/// [CompilerGenerated]
/// @brief Method set_Configuration, addr 0x9e93b34, size 0x8, virtual false, abstract: false, final false
inline void set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Endpoint, addr 0x9e93b44, size 0x8, virtual false, abstract: false, final false
inline void set_Endpoint(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldPost, addr 0x9e93b54, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldPost(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitUnityRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitUnityRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitUnityRequest(WitUnityRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitUnityRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitUnityRequest(WitUnityRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25655};

/// [CompilerGenerated]
/// @brief Field <Configuration>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  ____Configuration_k__BackingField;

/// @brief Field _request, offset: 0x98, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitVRequest*  ____request;

/// [CompilerGenerated]
/// @brief Field <Endpoint>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____Endpoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShouldPost>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____ShouldPost_k__BackingField;

/// @brief Field _initialized, offset: 0xa9, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest, ____Configuration_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest, ____request) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest, ____Endpoint_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest, ____ShouldPost_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest, ____initialized) == 0xa9, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitUnityRequest) == 0xb0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitUnityRequest/<>c__DisplayClass19_0
class CORDL_TYPE WitUnityRequest___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
using __HandleSend_b__0_d = ::GlobalNamespace::__c__DisplayClass19_0_WitUnityRequest___HandleSend_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::WitUnityRequest*  __4__this;

/// @brief Field messageRequest, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_messageRequest, put=__cordl_internal_set_messageRequest)) ::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest;

static inline ::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitUnityRequest::<>c__DisplayClass19_0::<<HandleSend>b__0>d))]
/// @brief Method <HandleSend>b__0, addr 0x9e94470, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _HandleSend_b__0() ;

constexpr ::Meta::WitAi::Requests::WitUnityRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::WitUnityRequest*& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Requests::WitMessageVRequest* const& __cordl_internal_get_messageRequest() const;

constexpr ::Meta::WitAi::Requests::WitMessageVRequest*& __cordl_internal_get_messageRequest() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::WitUnityRequest*  value) ;

constexpr void __cordl_internal_set_messageRequest(::Meta::WitAi::Requests::WitMessageVRequest*  value) ;

/// @brief Method .ctor, addr 0x9e94124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitUnityRequest___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitUnityRequest___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitUnityRequest___c__DisplayClass19_0(WitUnityRequest___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitUnityRequest___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitUnityRequest___c__DisplayClass19_0(WitUnityRequest___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25653};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitUnityRequest*  _____4__this;

/// @brief Field messageRequest, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitMessageVRequest*  ___messageRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0, ___messageRequest) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitUnityRequest___c__DisplayClass19_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
