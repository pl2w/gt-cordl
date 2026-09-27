#pragma once
// IWYU pragma private; include "Fusion/Protocol/ICommunicator.hpp"
#include "Fusion/Protocol/zzzz__ICommunicator_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::ICommunicator.get_CommunicatorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::ICommunicator::*)()>(&::Fusion::Protocol::ICommunicator::get_CommunicatorID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ICommunicator*>(),
                    {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ICommunicator.SendPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ICommunicator::*)(uint8_t, int32_t, bool, uint8_t*, int32_t)>(&::Fusion::Protocol::ICommunicator::SendPackage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ICommunicator*>(),
                    {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ICommunicator.ReceivePackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::ICommunicator::*)(::by_ref<int32_t>, uint8_t*, int32_t)>(&::Fusion::Protocol::ICommunicator::ReceivePackage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ICommunicator*>(),
                    {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Fusion::Protocol::ICommunicator::get_CommunicatorID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::Protocol::ICommunicator::SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, targetActor, reliable, buffer, bufferLength);
}
inline int32_t Fusion::Protocol::ICommunicator::ReceivePackage(::by_ref<int32_t>  senderActor, uint8_t*  buffer, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ICommunicator*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, senderActor, buffer, bufferLength);
}
