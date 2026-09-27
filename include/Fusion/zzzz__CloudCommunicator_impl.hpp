#pragma once
// IWYU pragma private; include "Fusion/CloudCommunicator.hpp"
#include "Fusion/Protocol/zzzz__CommunicatorBase_impl.hpp"
#include "Fusion/zzzz__CloudCommunicator_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionRelayClient_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::CloudCommunicator.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::FusionRelayClient* (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.set_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)(::Fusion::Photon::Realtime::FusionRelayClient*)>(&::Fusion::CloudCommunicator::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionRelayClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.get_CommunicatorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::get_CommunicatorID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f7050c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                    {::i2c::class_of<::Fusion::CloudCommunicator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.get_WasExtracted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::get_WasExtracted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"get_WasExtracted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.set_WasExtracted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)(bool)>(&::Fusion::CloudCommunicator::set_WasExtracted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"set_WasExtracted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)(::Fusion::Photon::Realtime::FusionAppSettings*)>(&::Fusion::CloudCommunicator::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f70544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::Service)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f7064c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                    {::i2c::class_of<::Fusion::CloudCommunicator*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.SendPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::CloudCommunicator::*)(uint8_t, int32_t, bool, uint8_t*, int32_t)>(&::Fusion::CloudCommunicator::SendPackage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f7067c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                    {::i2c::class_of<::Fusion::CloudCommunicator*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.ConvertData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)(::System::Object*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(&::Fusion::CloudCommunicator::ConvertData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f706ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                    {::i2c::class_of<::Fusion::CloudCommunicator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f7073c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CloudCommunicator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CloudCommunicator::*)()>(&::Fusion::CloudCommunicator::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f707e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::FusionRelayClient*& Fusion::CloudCommunicator::__cordl_internal_get__Client_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::FusionRelayClient* const& Fusion::CloudCommunicator::__cordl_internal_get__Client_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr void Fusion::CloudCommunicator::__cordl_internal_set__Client_k__BackingField(::Fusion::Photon::Realtime::FusionRelayClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Client_k__BackingField = value;
}
constexpr bool& Fusion::CloudCommunicator::__cordl_internal_get__WasExtracted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasExtracted_k__BackingField;
}
constexpr bool const& Fusion::CloudCommunicator::__cordl_internal_get__WasExtracted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasExtracted_k__BackingField;
}
constexpr void Fusion::CloudCommunicator::__cordl_internal_set__WasExtracted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WasExtracted_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::CloudCommunicator::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& Fusion::CloudCommunicator::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Fusion::CloudCommunicator::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
inline ::Fusion::Photon::Realtime::FusionRelayClient* Fusion::CloudCommunicator::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::FusionRelayClient*>(this, ___internal_method);
}
inline void Fusion::CloudCommunicator::set_Client(::Fusion::Photon::Realtime::FusionRelayClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"set_Client", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionRelayClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::CloudCommunicator::get_CommunicatorID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CloudCommunicator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::CloudCommunicator::get_WasExtracted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"get_WasExtracted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::CloudCommunicator::set_WasExtracted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"set_WasExtracted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CloudCommunicator::_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  clientConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::FusionAppSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientConfig);
}
inline void Fusion::CloudCommunicator::Service()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CloudCommunicator*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::CloudCommunicator::SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CloudCommunicator*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, targetActor, reliable, buffer, bufferLength);
}
inline void Fusion::CloudCommunicator::ConvertData(::System::Object*  data, ::by_ref<::ArrayW<uint8_t>>  dataBuffer, ::by_ref<int32_t>  maxLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CloudCommunicator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataBuffer, maxLength);
}
inline void Fusion::CloudCommunicator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::CloudCommunicator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CloudCommunicator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::CloudCommunicator* Fusion::CloudCommunicator::New_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  clientConfig)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CloudCommunicator*>(clientConfig));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::CloudCommunicator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::CloudCommunicator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::CloudCommunicator::CloudCommunicator()   {
}
