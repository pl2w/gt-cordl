#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__CustomType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.TryRegisterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeMethod*, ::ExitGames::Client::Photon::DeserializeMethod*)>(&::ExitGames::Client::Photon::Protocol::TryRegisterType)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6cfc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"TryRegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.TryRegisterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeStreamMethod*, ::ExitGames::Client::Photon::DeserializeStreamMethod*)>(&::ExitGames::Client::Photon::Protocol::TryRegisterType)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6cfe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"TryRegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::ExitGames::Client::Photon::Protocol::Serialize)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6d0c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::Protocol::Deserialize)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6d0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Serialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa6d1178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Serialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6d11d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Serialize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa6d1278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6d14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int16_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Deserialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6d1534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::Protocol::Deserialize)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa6d158c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Protocol::*)()>(&::ExitGames::Client::Photon::Protocol::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d1798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::Protocol::setStaticF_TypeDict(::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*, "TypeDict", ::ExitGames::Client::Photon::Protocol*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>* ExitGames::Client::Photon::Protocol::getStaticF_TypeDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*, "TypeDict", ::ExitGames::Client::Photon::Protocol*>();
}
inline void ExitGames::Client::Photon::Protocol::setStaticF_CodeDict(::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*, "CodeDict", ::ExitGames::Client::Photon::Protocol*>(std::forward<::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>* ExitGames::Client::Photon::Protocol::getStaticF_CodeDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*, "CodeDict", ::ExitGames::Client::Photon::Protocol*>();
}
inline void ExitGames::Client::Photon::Protocol::setStaticF_ProtocolDefault(::ExitGames::Client::Photon::IProtocol*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::IProtocol*, "ProtocolDefault", ::ExitGames::Client::Photon::Protocol*>(std::forward<::ExitGames::Client::Photon::IProtocol*>(value));
}
inline ::ExitGames::Client::Photon::IProtocol* ExitGames::Client::Photon::Protocol::getStaticF_ProtocolDefault()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::IProtocol*, "ProtocolDefault", ::ExitGames::Client::Photon::Protocol*>();
}
inline void ExitGames::Client::Photon::Protocol::setStaticF_memFloatBlock(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "memFloatBlock", ::ExitGames::Client::Photon::Protocol*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> ExitGames::Client::Photon::Protocol::getStaticF_memFloatBlock()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "memFloatBlock", ::ExitGames::Client::Photon::Protocol*>();
}
inline void ExitGames::Client::Photon::Protocol::setStaticF_memDeserialize(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "memDeserialize", ::ExitGames::Client::Photon::Protocol*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol::getStaticF_memDeserialize()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "memDeserialize", ::ExitGames::Client::Photon::Protocol*>();
}
inline bool ExitGames::Client::Photon::Protocol::TryRegisterType(::System::Type*  type, uint8_t  typeCode, ::ExitGames::Client::Photon::SerializeMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeMethod*  deserializeFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"TryRegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, typeCode, serializeFunction, deserializeFunction);
}
inline bool ExitGames::Client::Photon::Protocol::TryRegisterType(::System::Type*  type, uint8_t  typeCode, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeStreamMethod*  deserializeFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"TryRegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::SerializeStreamMethod*>(), ::i2c::type_of<::ExitGames::Client::Photon::DeserializeStreamMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, typeCode, serializeFunction, deserializeFunction);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Protocol::Serialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, obj);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol::Deserialize(::ArrayW<uint8_t>  serializedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, serializedData);
}
inline void ExitGames::Client::Photon::Protocol::Serialize(int16_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, target, targetOffset);
}
inline void ExitGames::Client::Photon::Protocol::Serialize(int32_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, target, targetOffset);
}
inline void ExitGames::Client::Photon::Protocol::Serialize(float_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Serialize", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, target, targetOffset);
}
inline void ExitGames::Client::Photon::Protocol::Deserialize(::by_ref<int32_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, source, offset);
}
inline void ExitGames::Client::Photon::Protocol::Deserialize(::by_ref<int16_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, source, offset);
}
inline void ExitGames::Client::Photon::Protocol::Deserialize(::by_ref<float_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {"Deserialize", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, source, offset);
}
inline void ExitGames::Client::Photon::Protocol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Protocol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Protocol* ExitGames::Client::Photon::Protocol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Protocol*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Protocol::Protocol()   {
}
