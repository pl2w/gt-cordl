#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubSettings.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_impl.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::PubSubSettings::*)(::StringW)>(&::Meta::Voice::Net::PubSub::PubSubSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e6b054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::PubSub::PubSubSettings::*)(::Meta::Voice::Net::PubSub::PubSubSettings)>(&::Meta::Voice::Net::PubSub::PubSubSettings::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e6b07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.GetSubscribeTopics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::Voice::Net::PubSub::PubSubSettings::*)()>(&::Meta::Voice::Net::PubSub::PubSubSettings::GetSubscribeTopics)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e6b11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetSubscribeTopics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.GetTopics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::Meta::Voice::Net::PubSub::PubSubResponseOptions)>(&::Meta::Voice::Net::PubSub::PubSubSettings::GetTopics)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e6b1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetTopics", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.GetTopics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (*)(::StringW, ::Meta::Voice::Net::PubSub::PubSubResponseOptions)>(&::Meta::Voice::Net::PubSub::PubSubSettings::GetTopics)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e6b12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetTopics", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.SetTopicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::StringW, ::StringW)>(&::Meta::Voice::Net::PubSub::PubSubSettings::SetTopicKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e6b28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"SetTopicKey", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.IsSubscribedTopicId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::PubSub::PubSubSettings::*)(::StringW)>(&::Meta::Voice::Net::PubSub::PubSubSettings::IsSubscribedTopicId)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e6b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"IsSubscribedTopicId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubSettings.GetDefaultOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubResponseOptions (*)()>(&::Meta::Voice::Net::PubSub::PubSubSettings::GetDefaultOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6b074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetDefaultOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::PubSub::PubSubSettings::_ctor(::StringW  pubSubTopicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pubSubTopicId);
}
inline bool Meta::Voice::Net::PubSub::PubSubSettings::Equals(::Meta::Voice::Net::PubSub::PubSubSettings  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::Voice::Net::PubSub::PubSubSettings::GetSubscribeTopics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetSubscribeTopics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(*this, ___internal_method);
}
inline void Meta::Voice::Net::PubSub::PubSubSettings::GetTopics(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  topics, ::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetTopics", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topics, topicId, options);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::Voice::Net::PubSub::PubSubSettings::GetTopics(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetTopics", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(nullptr, ___internal_method, topicId, options);
}
inline void Meta::Voice::Net::PubSub::PubSubSettings::SetTopicKey(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  topics, ::StringW  topicId, ::StringW  key, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"SetTopicKey", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topics, topicId, key, append);
}
inline bool Meta::Voice::Net::PubSub::PubSubSettings::IsSubscribedTopicId(::StringW  topicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"IsSubscribedTopicId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, topicId);
}
inline ::Meta::Voice::Net::PubSub::PubSubResponseOptions Meta::Voice::Net::PubSub::PubSubSettings::GetDefaultOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubSettings>(),
                        {"GetDefaultOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubResponseOptions>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PubSubTopicId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PublishOptions", ty: "::Meta::Voice::Net::PubSub::PubSubResponseOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubscribeOptions", ty: "::Meta::Voice::Net::PubSub::PubSubResponseOptions", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings::PubSubSettings(::StringW  PubSubTopicId, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  PublishOptions, ::Meta::Voice::Net::PubSub::PubSubResponseOptions  SubscribeOptions) noexcept  {
this->PubSubTopicId = PubSubTopicId;
this->PublishOptions = PublishOptions;
this->SubscribeOptions = SubscribeOptions;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings::PubSubSettings()   {
}
