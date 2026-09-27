#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncodedPacketHandler.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketHandler.get_CaptureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILckCaptureStateProvider* (::Liv::Lck::Encoding::LckEncodedPacketHandler::*)()>(&::Liv::Lck::Encoding::LckEncodedPacketHandler::get_CaptureStateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {"get_CaptureStateProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketHandler.get_EncodedPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::LckEncodedPacketCallback (::Liv::Lck::Encoding::LckEncodedPacketHandler::*)()>(&::Liv::Lck::Encoding::LckEncodedPacketHandler::get_EncodedPacketCallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d42d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {"get_EncodedPacketCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncodedPacketHandler::*)(::GlobalNamespace::ILckCaptureStateProvider*, ::Liv::Lck::Encoding::LckEncodedPacketCallback)>(&::Liv::Lck::Encoding::LckEncodedPacketHandler::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d42d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckCaptureStateProvider*>(), ::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Encoding::LckEncodedPacketHandler::get_CaptureStateProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {"get_CaptureStateProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILckCaptureStateProvider*>(*this, ___internal_method);
}
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback Liv::Lck::Encoding::LckEncodedPacketHandler::get_EncodedPacketCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {"get_EncodedPacketCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::LckEncodedPacketCallback>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncodedPacketHandler::_ctor(::GlobalNamespace::ILckCaptureStateProvider*  captureStateProvider, ::Liv::Lck::Encoding::LckEncodedPacketCallback  encodedPacketCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckCaptureStateProvider*>(), ::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, captureStateProvider, encodedPacketCallback);
}
// Ctor Parameters [CppParam { name: "_CaptureStateProvider_k__BackingField", ty: "::GlobalNamespace::ILckCaptureStateProvider*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EncodedPacketCallback_k__BackingField", ty: "::Liv::Lck::Encoding::LckEncodedPacketCallback", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler::LckEncodedPacketHandler(::GlobalNamespace::ILckCaptureStateProvider*  _CaptureStateProvider_k__BackingField, ::Liv::Lck::Encoding::LckEncodedPacketCallback  _EncodedPacketCallback_k__BackingField) noexcept  {
this->_CaptureStateProvider_k__BackingField = _CaptureStateProvider_k__BackingField;
this->_EncodedPacketCallback_k__BackingField = _EncodedPacketCallback_k__BackingField;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler::LckEncodedPacketHandler()   {
}
