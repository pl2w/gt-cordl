#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncodedPacketCallback.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback.get_CallbackObjectPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)()>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::get_CallbackObjectPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_CallbackObjectPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback.set_CallbackObjectPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::set_CallbackObjectPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"set_CallbackObjectPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback.get_CallbackFunctionPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)()>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::get_CallbackFunctionPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_CallbackFunctionPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback.set_CallbackFunctionPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::set_CallbackFunctionPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"set_CallbackFunctionPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)()>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d42d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncodedPacketCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncodedPacketCallback::*)(::System::IntPtr, ::System::IntPtr)>(&::Liv::Lck::Encoding::LckEncodedPacketCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Liv::Lck::Encoding::LckEncodedPacketCallback::get_CallbackObjectPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_CallbackObjectPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncodedPacketCallback::set_CallbackObjectPtr(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"set_CallbackObjectPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckEncodedPacketCallback::get_CallbackFunctionPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_CallbackFunctionPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncodedPacketCallback::set_CallbackFunctionPtr(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"set_CallbackFunctionPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Liv::Lck::Encoding::LckEncodedPacketCallback::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncodedPacketCallback::_ctor(::System::IntPtr  callbackObjectPtr, ::System::IntPtr  callbackFunctionPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncodedPacketCallback>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callbackObjectPtr, callbackFunctionPtr);
}
// Ctor Parameters [CppParam { name: "_CallbackObjectPtr_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CallbackFunctionPtr_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Encoding::LckEncodedPacketCallback::LckEncodedPacketCallback(::System::IntPtr  _CallbackObjectPtr_k__BackingField, ::System::IntPtr  _CallbackFunctionPtr_k__BackingField) noexcept  {
this->_CallbackObjectPtr_k__BackingField = _CallbackObjectPtr_k__BackingField;
this->_CallbackFunctionPtr_k__BackingField = _CallbackFunctionPtr_k__BackingField;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckEncodedPacketCallback::LckEncodedPacketCallback()   {
}
