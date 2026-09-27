#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWitWebSocketRequest)
namespace Meta::Voice::Net::PubSub {
struct PubSubResponseOptions;
}
namespace Meta::Voice::Net::WebSockets {
class UploadChunkDelegate;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*, "Meta.Voice.Net.WebSockets", "IWitWebSocketRequest");
// Dependencies 
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.IWitWebSocketRequest
class CORDL_TYPE IWitWebSocketRequest {
public:
// Declarations
 __declspec(property(get=get_ClientUserId)) ::StringW  ClientUserId;

 __declspec(property(get=get_Code)) int32_t  Code;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_OnComplete, put=set_OnComplete)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  OnComplete;

 __declspec(property(get=get_OperationId)) ::StringW  OperationId;

 __declspec(property(put=set_PublishOptions)) ::Meta::Voice::Net::PubSub::PubSubResponseOptions  PublishOptions;

 __declspec(property(get=get_RequestId)) ::StringW  RequestId;

 __declspec(property(get=get_SimulatedErrorType)) ::Meta::WitAi::Requests::VoiceErrorSimulationType  SimulatedErrorType;

 __declspec(property(get=get_TimeoutMs, put=set_TimeoutMs)) int32_t  TimeoutMs;

 __declspec(property(get=get_TopicId, put=set_TopicId)) ::StringW  TopicId;

/// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Cancel() ;

/// @brief Method HandleDownload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method HandleUpload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleUpload(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  uploadChunk) ;

/// @brief Method get_ClientUserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ClientUserId() ;

/// @brief Method get_Code, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Code() ;

/// @brief Method get_Completion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Method get_IsComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsComplete() ;

/// @brief Method get_OnComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* get_OnComplete() ;

/// @brief Method get_OperationId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_OperationId() ;

/// @brief Method get_RequestId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_RequestId() ;

/// @brief Method get_SimulatedErrorType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType get_SimulatedErrorType() ;

/// @brief Method get_TimeoutMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_TimeoutMs() ;

/// @brief Method get_TopicId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_TopicId() ;

/// @brief Method set_OnComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnComplete(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// @brief Method set_PublishOptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PublishOptions(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value) ;

/// @brief Method set_TimeoutMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_TimeoutMs(int32_t  value) ;

/// @brief Method set_TopicId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_TopicId(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWitWebSocketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitWebSocketRequest(IWitWebSocketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::WebSockets
