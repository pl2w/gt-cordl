#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IWitWebSocketClient)
namespace Meta::Voice::Net::PubSub {
class IPubSubSubscriber;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketResponseProcessor;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClient;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*, "Meta.Voice.Net.WebSockets", "IWitWebSocketClient");
// Dependencies 
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.IWitWebSocketClient
class CORDL_TYPE IWitWebSocketClient {
public:
// Declarations
/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr operator  ::Meta::Voice::Net::PubSub::IPubSubSubscriber*() noexcept;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Connect() ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disconnect() ;

/// @brief Method SendRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method TrackRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// [CompilerGenerated]
/// @brief Method add_OnProcessForwardedResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTopicRequestTracked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr ::Meta::Voice::Net::PubSub::IPubSubSubscriber* i___Meta__Voice__Net__PubSub__IPubSubSubscriber() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnProcessForwardedResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTopicRequestTracked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWitWebSocketClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitWebSocketClient(IWitWebSocketClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::WebSockets
