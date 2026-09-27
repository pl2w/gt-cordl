#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKImplRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKImplRequest)
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKBinding;
}
// Forward declare root types
namespace Oculus::Voice::Bindings::Android {
class VoiceSDKImplRequest;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest*, "Oculus.Voice.Bindings.Android", "VoiceSDKImplRequest");
// Dependencies Meta.WitAi.Requests.VoiceServiceRequest
namespace Oculus::Voice::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKImplRequest
class CORDL_TYPE VoiceSDKImplRequest : public ::Meta::WitAi::Requests::VoiceServiceRequest {
public:
// Declarations
 __declspec(property(get=get_DecodeRawResponses)) bool  DecodeRawResponses;

 __declspec(property(get=get_Immediately, put=set_Immediately)) bool  Immediately;

 __declspec(property(get=get_Service, put=set_Service)) ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  Service;

/// @brief Field <Immediately>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__Immediately_k__BackingField, put=__cordl_internal_set__Immediately_k__BackingField)) bool  _Immediately_k__BackingField;

/// @brief Field <Service>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Service_k__BackingField, put=__cordl_internal_set__Service_k__BackingField)) ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  _Service_k__BackingField;

/// @brief Method HandleAudioActivation, addr 0xb94d258, size 0x78, virtual true, abstract: false, final false
inline void HandleAudioActivation() ;

/// @brief Method HandleAudioDeactivation, addr 0xb94d2d0, size 0x68, virtual true, abstract: false, final false
inline void HandleAudioDeactivation() ;

/// @brief Method HandleCancel, addr 0xb94d3b8, size 0x50, virtual true, abstract: false, final false
inline void HandleCancel() ;

/// @brief Method HandleCanceled, addr 0xb94d4b4, size 0x10, virtual false, abstract: false, final false
inline void HandleCanceled() ;

/// @brief Method HandleError, addr 0xb94d4c4, size 0x78, virtual false, abstract: false, final false
inline void HandleError(::StringW  error, ::StringW  message, ::StringW  errorBody) ;

/// @brief Method HandleFullTranscription, addr 0xb94d430, size 0x14, virtual false, abstract: false, final false
inline void HandleFullTranscription(::StringW  transcription) ;

/// @brief Method HandlePartialResponse, addr 0xb94d408, size 0x14, virtual false, abstract: false, final false
inline void HandlePartialResponse(::StringW  responseJson) ;

/// @brief Method HandlePartialTranscription, addr 0xb94d41c, size 0x14, virtual false, abstract: false, final false
inline void HandlePartialTranscription(::StringW  transcription) ;

/// @brief Method HandleResponse, addr 0xb94d53c, size 0x14, virtual false, abstract: false, final false
inline void HandleResponse(::StringW  responseJson) ;

/// @brief Method HandleSend, addr 0xb94d338, size 0x80, virtual true, abstract: false, final false
inline void HandleSend() ;

/// @brief Method HandleTransmissionBegan, addr 0xb94d444, size 0x70, virtual false, abstract: false, final false
inline void HandleTransmissionBegan() ;

static inline ::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest* New_ctor(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  newService, ::Meta::Voice::NLPRequestInputType  newInputType, bool  newImmediately, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

constexpr bool const& __cordl_internal_get__Immediately_k__BackingField() const;

constexpr bool& __cordl_internal_get__Immediately_k__BackingField() ;

constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* const& __cordl_internal_get__Service_k__BackingField() const;

constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*& __cordl_internal_get__Service_k__BackingField() ;

constexpr void __cordl_internal_set__Immediately_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Service_k__BackingField(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  value) ;

/// @brief Method .ctor, addr 0xb94d184, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  newService, ::Meta::Voice::NLPRequestInputType  newInputType, bool  newImmediately, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents) ;

/// @brief Method get_DecodeRawResponses, addr 0xb94d250, size 0x8, virtual true, abstract: false, final false
inline bool get_DecodeRawResponses() ;

/// [CompilerGenerated]
/// @brief Method get_Immediately, addr 0xb94d240, size 0x8, virtual false, abstract: false, final false
inline bool get_Immediately() ;

/// [CompilerGenerated]
/// @brief Method get_Service, addr 0xb94d230, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* get_Service() ;

/// [CompilerGenerated]
/// @brief Method set_Immediately, addr 0xb94d248, size 0x8, virtual false, abstract: false, final false
inline void set_Immediately(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Service, addr 0xb94d238, size 0x8, virtual false, abstract: false, final false
inline void set_Service(::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKImplRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKImplRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKImplRequest(VoiceSDKImplRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKImplRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKImplRequest(VoiceSDKImplRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31702};

/// [CompilerGenerated]
/// @brief Field <Service>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Voice::Bindings::Android::VoiceSDKBinding*  ____Service_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Immediately>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____Immediately_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest, ____Service_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest, ____Immediately_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKImplRequest) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Voice::Bindings::Android
