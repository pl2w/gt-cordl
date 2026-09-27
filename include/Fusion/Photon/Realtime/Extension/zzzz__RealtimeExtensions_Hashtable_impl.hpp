#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Extension/RealtimeExtensions_Hashtable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Extension/zzzz__RealtimeExtensions_Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable.ConvertToDictionaryProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::ConvertToDictionaryProperty)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5f68bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"ConvertToDictionaryProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable.ConvertToHashtable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (*)(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*)>(&::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::ConvertToHashtable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5f68d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"ConvertToHashtable", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable.CalculateTotalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::CalculateTotalSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f68ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"CalculateTotalSize", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::setStaticF_buffer(::ExitGames::Client::Photon::StreamBuffer*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::StreamBuffer*, "buffer", ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(std::forward<::ExitGames::Client::Photon::StreamBuffer*>(value));
}
inline ::ExitGames::Client::Photon::StreamBuffer* Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::getStaticF_buffer()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::StreamBuffer*, "buffer", ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>();
}
inline void Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::setStaticF_protocol(::ExitGames::Client::Photon::Protocol18*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::Protocol18*, "protocol", ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(std::forward<::ExitGames::Client::Photon::Protocol18*>(value));
}
inline ::ExitGames::Client::Photon::Protocol18* Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::getStaticF_protocol()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::Protocol18*, "protocol", ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::ConvertToDictionaryProperty(::ExitGames::Client::Photon::Hashtable*  customProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"ConvertToDictionaryProperty", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(nullptr, ___internal_method, customProperties);
}
inline ::ExitGames::Client::Photon::Hashtable* Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::ConvertToHashtable(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"ConvertToHashtable", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(nullptr, ___internal_method, properties);
}
inline int32_t Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::CalculateTotalSize(::ExitGames::Client::Photon::Hashtable*  hashtable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable*>(),
                        {"CalculateTotalSize", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hashtable);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Extension::RealtimeExtensions_Hashtable::RealtimeExtensions_Hashtable()   {
}
