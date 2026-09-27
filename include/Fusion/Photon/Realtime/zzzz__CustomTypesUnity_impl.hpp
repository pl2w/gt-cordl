#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/CustomTypesUnity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__CustomTypesUnity_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__CustomTypesUnity_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::Photon::Realtime::CustomTypesUnity::Register)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5f4c7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.SerializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Fusion::Photon::Realtime::CustomTypesUnity::SerializeVector3)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f4cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.DeserializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Fusion::Photon::Realtime::CustomTypesUnity::DeserializeVector3)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f4cd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.SerializeVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Fusion::Photon::Realtime::CustomTypesUnity::SerializeVector2)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f4cfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.DeserializeVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Fusion::Photon::Realtime::CustomTypesUnity::DeserializeVector2)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f4d1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.SerializeQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::Fusion::Photon::Realtime::CustomTypesUnity::SerializeQuaternion)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f4d3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::CustomTypesUnity.DeserializeQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t)>(&::Fusion::Photon::Realtime::CustomTypesUnity::DeserializeQuaternion)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5f4d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::CustomTypesUnity::setStaticF_memVector3(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memVector3", ::Fusion::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::Photon::Realtime::CustomTypesUnity::getStaticF_memVector3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memVector3", ::Fusion::Photon::Realtime::CustomTypesUnity*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity::setStaticF_memVector2(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memVector2", ::Fusion::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::Photon::Realtime::CustomTypesUnity::getStaticF_memVector2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memVector2", ::Fusion::Photon::Realtime::CustomTypesUnity*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity::setStaticF_memQuarternion(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memQuarternion", ::Fusion::Photon::Realtime::CustomTypesUnity*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::Photon::Realtime::CustomTypesUnity::getStaticF_memQuarternion()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memQuarternion", ::Fusion::Photon::Realtime::CustomTypesUnity*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int16_t Fusion::Photon::Realtime::CustomTypesUnity::SerializeVector3(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Fusion::Photon::Realtime::CustomTypesUnity::DeserializeVector3(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector3", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
inline int16_t Fusion::Photon::Realtime::CustomTypesUnity::SerializeVector2(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Fusion::Photon::Realtime::CustomTypesUnity::DeserializeVector2(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeVector2", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
inline int16_t Fusion::Photon::Realtime::CustomTypesUnity::SerializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"SerializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, outStream, customobject);
}
inline ::System::Object* Fusion::Photon::Realtime::CustomTypesUnity::DeserializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::CustomTypesUnity*>(),
                        {"DeserializeQuaternion", {}, {::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inStream, length);
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::CustomTypesUnity::CustomTypesUnity()   {
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__0___SerializeVector2(::ExitGames::Client::Photon::SerializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<0>__SerializeVector2", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::SerializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::SerializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__0___SerializeVector2()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<0>__SerializeVector2", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__1___DeserializeVector2(::ExitGames::Client::Photon::DeserializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<1>__DeserializeVector2", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::DeserializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::DeserializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__1___DeserializeVector2()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<1>__DeserializeVector2", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__2___SerializeVector3(::ExitGames::Client::Photon::SerializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<2>__SerializeVector3", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::SerializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::SerializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__2___SerializeVector3()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<2>__SerializeVector3", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__3___DeserializeVector3(::ExitGames::Client::Photon::DeserializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<3>__DeserializeVector3", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::DeserializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::DeserializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__3___DeserializeVector3()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<3>__DeserializeVector3", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__4___SerializeQuaternion(::ExitGames::Client::Photon::SerializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<4>__SerializeQuaternion", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::SerializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::SerializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__4___SerializeQuaternion()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SerializeStreamMethod*, "<4>__SerializeQuaternion", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
inline void Fusion::Photon::Realtime::CustomTypesUnity___O::setStaticF__5___DeserializeQuaternion(::ExitGames::Client::Photon::DeserializeStreamMethod*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<5>__DeserializeQuaternion", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>(std::forward<::ExitGames::Client::Photon::DeserializeStreamMethod*>(value));
}
inline ::ExitGames::Client::Photon::DeserializeStreamMethod* Fusion::Photon::Realtime::CustomTypesUnity___O::getStaticF__5___DeserializeQuaternion()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::DeserializeStreamMethod*, "<5>__DeserializeQuaternion", ::Fusion::Photon::Realtime::CustomTypesUnity___O*>();
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::CustomTypesUnity___O::CustomTypesUnity___O()   {
}
