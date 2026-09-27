#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__NLPRequest_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceServiceRequest)
namespace GlobalNamespace {
struct VoiceServiceRequest__SimulateResponse_d__10;
}
namespace Meta::Voice {
template<typename TResults>
class INLPRequestResponseDecoder_1;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvent;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestResults;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest___c__DisplayClass14_0;
}
namespace Meta::WitAi::Requests {
class WitResponseDecoder;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequest*);
MARK_REF_T(::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequest*, "Meta.WitAi.Requests", "VoiceServiceRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0*, "Meta.WitAi.Requests", "VoiceServiceRequest/<>c__DisplayClass14_0");
// Dependencies Meta.Voice.NLPRequest`5<TUnityEvent, TOptions, TEvents, TResults, TResponseData>
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequest
class CORDL_TYPE VoiceServiceRequest : public ::Meta::Voice::NLPRequest_5<::Meta::WitAi::Requests::VoiceServiceRequestEvent*,::Meta::WitAi::Configuration::WitRequestOptions*,::Meta::WitAi::Requests::VoiceServiceRequestEvents*,::Meta::WitAi::Requests::VoiceServiceRequestResults*,::Meta::WitAi::Json::WitResponseNode*> {
public:
// Declarations
using _SimulateResponse_d__10 = ::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10;

using __c__DisplayClass14_0 = ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0;

 __declspec(property(get=get_IsLocalRequest)) bool  IsLocalRequest;

 __declspec(property(get=get_ResponseDecoder)) ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*  ResponseDecoder;

 __declspec(property(get=get_StatusCode)) int32_t  StatusCode;

/// @brief Field _responseDecoder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__responseDecoder, put=setStaticF__responseDecoder)) ::Meta::WitAi::Requests::WitResponseDecoder*  _responseDecoder;

/// @brief Method ApplyResponseData, addr 0x9e90db8, size 0x16c, virtual true, abstract: false, final false
inline void ApplyResponseData(::Meta::WitAi::Json::WitResponseNode*  responseData, bool  isFinal) ;

static inline ::Meta::WitAi::Requests::VoiceServiceRequest* New_ctor(::Meta::Voice::NLPRequestInputType  newInputType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

/// @brief Method OnSimulateResponse, addr 0x9e90c78, size 0x60, virtual true, abstract: false, final false
inline bool OnSimulateResponse() ;

/// @brief Method RaiseEvent, addr 0x9e915a0, size 0x100, virtual true, abstract: false, final false
inline void RaiseEvent(::Meta::WitAi::Requests::VoiceServiceRequestEvent*  eventCallback) ;

/// @brief Method SetEventListeners, addr 0x9e90f24, size 0x5c, virtual true, abstract: false, final false
inline void SetEventListeners(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents, bool  add) ;

/// @brief Method ShouldIgnoreError, addr 0x9e90bdc, size 0x9c, virtual true, abstract: false, final false
inline bool ShouldIgnoreError(int32_t  errorStatusCode, ::StringW  errorMessage) ;

/// @brief Method SimulateError, addr 0x9e90d80, size 0x38, virtual true, abstract: false, final false
inline void SimulateError(::Meta::WitAi::Requests::VoiceErrorSimulationType  errorType) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.VoiceServiceRequest::<SimulateResponse>d__10))]
/// @brief Method SimulateResponse, addr 0x9e90cd8, size 0xa8, virtual false, abstract: false, final false
inline void SimulateResponse() ;

/// @brief Method .ctor, addr 0x9e90a48, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::NLPRequestInputType  newInputType, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

static inline ::Meta::WitAi::Requests::WitResponseDecoder* getStaticF__responseDecoder() ;

/// @brief Method get_IsLocalRequest, addr 0x9e90ab8, size 0x84, virtual false, abstract: false, final false
inline bool get_IsLocalRequest() ;

/// @brief Method get_ResponseDecoder, addr 0x9e90b84, size 0x58, virtual true, abstract: false, final false
inline ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>* get_ResponseDecoder() ;

/// @brief Method get_StatusCode, addr 0x9e90b3c, size 0x48, virtual false, abstract: false, final false
inline int32_t get_StatusCode() ;

static inline void setStaticF__responseDecoder(::Meta::WitAi::Requests::WitResponseDecoder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequest(VoiceServiceRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequest(VoiceServiceRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25642};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequest) == 0x90, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.VoiceServiceRequest/<>c__DisplayClass14_0
class CORDL_TYPE VoiceServiceRequest___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::VoiceServiceRequest*  __4__this;

/// @brief Field eventCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventCallback, put=__cordl_internal_set_eventCallback)) ::Meta::WitAi::Requests::VoiceServiceRequestEvent*  eventCallback;

static inline ::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <RaiseEvent>b__0, addr 0x9e9172c, size 0x5c, virtual false, abstract: false, final false
inline void _RaiseEvent_b__0() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvent* const& __cordl_internal_get_eventCallback() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvent*& __cordl_internal_get_eventCallback() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

constexpr void __cordl_internal_set_eventCallback(::Meta::WitAi::Requests::VoiceServiceRequestEvent*  value) ;

/// @brief Method .ctor, addr 0x9e916a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequest___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequest___c__DisplayClass14_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceRequest___c__DisplayClass14_0(VoiceServiceRequest___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceRequest___c__DisplayClass14_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceRequest___c__DisplayClass14_0(VoiceServiceRequest___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25640};

/// @brief Field eventCallback, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequestEvent*  ___eventCallback;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0, ___eventCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::VoiceServiceRequest___c__DisplayClass14_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
