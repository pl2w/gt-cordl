#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/EventData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6d037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::EventData::*)(uint8_t)>(&::ExitGames::Client::Photon::EventData::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6d0400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EventData::*)(uint8_t, ::System::Object*)>(&::ExitGames::Client::Photon::EventData::set_Item)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6d0428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.get_Sender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::get_Sender)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6d0440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_Sender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.set_Sender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EventData::*)(int32_t)>(&::ExitGames::Client::Photon::EventData::set_Sender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d04bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_Sender", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.get_CustomData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::get_CustomData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6d04c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_CustomData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.set_CustomData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EventData::*)(::System::Object*)>(&::ExitGames::Client::Photon::EventData::set_CustomData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6d04fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_CustomData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6d0504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa6d0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::EventData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::EventData.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::EventData::*)()>(&::ExitGames::Client::Photon::EventData::ToStringFull)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6d059c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& ExitGames::Client::Photon::EventData::__cordl_internal_get_Code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr uint8_t const& ExitGames::Client::Photon::EventData::__cordl_internal_get_Code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_Code(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Code = value;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary*& ExitGames::Client::Photon::EventData::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& ExitGames::Client::Photon::EventData::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
constexpr uint8_t& ExitGames::Client::Photon::EventData::__cordl_internal_get_SenderKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SenderKey;
}
constexpr uint8_t const& ExitGames::Client::Photon::EventData::__cordl_internal_get_SenderKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SenderKey;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_SenderKey(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SenderKey = value;
}
constexpr int32_t& ExitGames::Client::Photon::EventData::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr int32_t const& ExitGames::Client::Photon::EventData::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_sender(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr uint8_t& ExitGames::Client::Photon::EventData::__cordl_internal_get_CustomDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDataKey;
}
constexpr uint8_t const& ExitGames::Client::Photon::EventData::__cordl_internal_get_CustomDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDataKey;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_CustomDataKey(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomDataKey = value;
}
constexpr ::System::Object*& ExitGames::Client::Photon::EventData::__cordl_internal_get_customData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr ::System::Object* const& ExitGames::Client::Photon::EventData::__cordl_internal_get_customData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr void ExitGames::Client::Photon::EventData::__cordl_internal_set_customData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customData = value;
}
inline void ExitGames::Client::Photon::EventData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* ExitGames::Client::Photon::EventData::get_Item(uint8_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void ExitGames::Client::Photon::EventData::set_Item(uint8_t  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline int32_t ExitGames::Client::Photon::EventData::get_Sender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_Sender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EventData::set_Sender(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_Sender", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* ExitGames::Client::Photon::EventData::get_CustomData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"get_CustomData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::EventData::set_CustomData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"set_CustomData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::EventData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::EventData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::EventData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::EventData::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::EventData*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::EventData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::EventData*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::EventData::EventData()   {
}
