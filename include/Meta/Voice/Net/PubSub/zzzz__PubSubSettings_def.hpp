#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PubSubSettings)
namespace Meta::Voice::Net::PubSub {
struct PubSubResponseOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::Voice::Net::PubSub {
struct PubSubSettings;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::PubSub::PubSubSettings);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::PubSub::PubSubSettings, "Meta.Voice.Net.PubSub", "PubSubSettings");
// Dependencies Meta.Voice.Net.PubSub.PubSubResponseOptions
namespace Meta::Voice::Net::PubSub {
// Is value type: true
// CS Name: Meta.Voice.Net.PubSub.PubSubSettings
struct CORDL_TYPE PubSubSettings {
public:
// Declarations
/// @brief Method Equals, addr 0x9e6b07c, size 0x74, virtual false, abstract: false, final false
inline bool Equals(::Meta::Voice::Net::PubSub::PubSubSettings  other) ;

/// @brief Method GetDefaultOptions, addr 0x9e6b074, size 0x8, virtual false, abstract: false, final false
static inline ::Meta::Voice::Net::PubSub::PubSubResponseOptions GetDefaultOptions() ;

/// @brief Method GetSubscribeTopics, addr 0x9e6b11c, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetSubscribeTopics() ;

/// @brief Method GetTopics, addr 0x9e6b12c, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetTopics(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  options) ;

/// @brief Method GetTopics, addr 0x9e6b1b4, size 0xd8, virtual false, abstract: false, final false
static inline void GetTopics(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  topics, ::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  options) ;

/// @brief Method IsSubscribedTopicId, addr 0x9e6b308, size 0xe8, virtual false, abstract: false, final false
inline bool IsSubscribedTopicId(::StringW  topicId) ;

/// @brief Method SetTopicKey, addr 0x9e6b28c, size 0x7c, virtual false, abstract: false, final false
static inline void SetTopicKey(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  topics, ::StringW  topicId, ::StringW  key, ::StringW  append) ;

/// @brief Method .ctor, addr 0x9e6b054, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::StringW  pubSubTopicId) ;

// Ctor Parameters []
// @brief default ctor
constexpr PubSubSettings() ;

// Ctor Parameters [CppParam { name: "PubSubTopicId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PublishOptions", ty: "::Meta::Voice::Net::PubSub::PubSubResponseOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubscribeOptions", ty: "::Meta::Voice::Net::PubSub::PubSubResponseOptions", modifiers: "", def_value: None, comment: None }]
constexpr PubSubSettings(::StringW  PubSubTopicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  PublishOptions, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  SubscribeOptions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("The unique pubsub topic id to publish and/or subscribe to")]
/// @brief Field PubSubTopicId, offset: 0x0, size: 0x8, def value: None
 ::StringW  PubSubTopicId;

/// [Tooltip("Toggles for publishing per response type.")]
/// @brief Field PublishOptions, offset: 0x8, size: 0x2, def value: None
 ::Meta::Voice::Net::PubSub::PubSubResponseOptions  PublishOptions;

/// [Tooltip("Toggles for subscribing per response type.")]
/// @brief Field SubscribeOptions, offset: 0xa, size: 0x2, def value: None
 ::Meta::Voice::Net::PubSub::PubSubResponseOptions  SubscribeOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubSettings, PubSubTopicId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubSettings, PublishOptions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::PubSub::PubSubSettings, SubscribeOptions) == 0xa, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::PubSub::PubSubSettings) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Net::PubSub
