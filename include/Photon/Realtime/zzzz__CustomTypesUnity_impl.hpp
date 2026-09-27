#pragma once
// IWYU pragma private; include "Photon/Realtime/CustomTypesUnity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__CustomTypesUnity_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Photon::Realtime::CustomTypesUnity::Register)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa6f6c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.SerializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Photon::Realtime::CustomTypesUnity::SerializeVector3)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa6f6ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.DeserializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Photon::Realtime::CustomTypesUnity::DeserializeVector3)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa6f70c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.SerializeVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Photon::Realtime::CustomTypesUnity::SerializeVector2)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa6f7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.DeserializeVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Photon::Realtime::CustomTypesUnity::DeserializeVector2)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa6f74f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.SerializeQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Photon::Realtime::CustomTypesUnity::SerializeQuaternion)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa6f7704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::CustomTypesUnity.DeserializeQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Photon::Realtime::CustomTypesUnity::DeserializeQuaternion)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa6f7938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::CustomTypesUnity::setStaticF_memVector3(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memVector3", ::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Photon::Realtime::CustomTypesUnity::getStaticF_memVector3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memVector3", ::Photon::Realtime::CustomTypesUnity*>();
}
inline void Photon::Realtime::CustomTypesUnity::setStaticF_memVector2(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memVector2", ::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Photon::Realtime::CustomTypesUnity::getStaticF_memVector2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memVector2", ::Photon::Realtime::CustomTypesUnity*>();
}
inline void Photon::Realtime::CustomTypesUnity::setStaticF_memQuarternion(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memQuarternion", ::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Photon::Realtime::CustomTypesUnity::getStaticF_memQuarternion()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memQuarternion", ::Photon::Realtime::CustomTypesUnity*>();
}
inline void Photon::Realtime::CustomTypesUnity::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int16_t Photon::Realtime::CustomTypesUnity::SerializeVector3(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Photon::Realtime::CustomTypesUnity::DeserializeVector3(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
inline int16_t Photon::Realtime::CustomTypesUnity::SerializeVector2(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Photon::Realtime::CustomTypesUnity::DeserializeVector2(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
inline int16_t Photon::Realtime::CustomTypesUnity::SerializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Photon::Realtime::CustomTypesUnity::DeserializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::CustomTypesUnity::CustomTypesUnity()   {
}
