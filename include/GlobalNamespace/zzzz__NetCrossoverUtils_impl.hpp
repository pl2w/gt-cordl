#pragma once
// IWYU pragma private; include "GlobalNamespace/NetCrossoverUtils.hpp"
#include "Fusion/zzzz__INetworkStruct_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetCrossoverUtils_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/zzzz__SessionProperty_def.hpp"
#include "GlobalNamespace/zzzz__RPCArgBuffer_1_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetCrossoverUtils.Prewarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetCrossoverUtils::Prewarm)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56e7438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"Prewarm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetCrossoverUtils.WriteNetDataToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::NetCrossoverUtils::WriteNetDataToBuffer)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x56e74ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"WriteNetDataToBuffer", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetCrossoverUtils.ToPropDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* (*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::NetCrossoverUtils::ToPropDict)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x56e3a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"ToPropDict", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetCrossoverUtils::setStaticF_FixedBuffer(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FixedBuffer", ::GlobalNamespace::NetCrossoverUtils*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> GlobalNamespace::NetCrossoverUtils::getStaticF_FixedBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FixedBuffer", ::GlobalNamespace::NetCrossoverUtils*>();
}
inline void GlobalNamespace::NetCrossoverUtils::Prewarm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"Prewarm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetCrossoverUtils::WriteNetDataToBuffer(T  data, ::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                    {"WriteNetDataToBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, stream);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Object* GlobalNamespace::NetCrossoverUtils::ReadNetDataFromBuffer(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                    {"ReadNetDataFromBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, stream);
}
inline void GlobalNamespace::NetCrossoverUtils::WriteNetDataToBuffer(::System::Object*  data, ::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"WriteNetDataToBuffer", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, stream);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetCrossoverUtils::SerializeToRPCData(::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>  argBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                    {"SerializeToRPCData", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argBuffer);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void GlobalNamespace::NetCrossoverUtils::PopulateWithRPCData(::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>  argBuffer, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                    {"PopulateWithRPCData", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argBuffer, data);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* GlobalNamespace::NetCrossoverUtils::ToPropDict(::ExitGames::Client::Photon::Hashtable*  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetCrossoverUtils*>(),
                        {"ToPropDict", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>*>(nullptr, ___internal_method, hash);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetCrossoverUtils::NetCrossoverUtils()   {
}
