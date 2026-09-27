#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonStream.get_IsWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::get_IsWriting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_IsWriting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.set_IsWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(bool)>(&::Photon::Pun::PhotonStream::set_IsWriting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"set_IsWriting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.get_IsReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::get_IsReading)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa72b934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_IsReading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa727ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(bool, ::ArrayW<::System::Object*>)>(&::Photon::Pun::PhotonStream::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa718b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.SetReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::ArrayW<::System::Object*>, int32_t)>(&::Photon::Pun::PhotonStream::SetReadStream)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa728430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SetReadStream", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.SetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::System::Collections::Generic::List_1<::System::Object*>*, int32_t)>(&::Photon::Pun::PhotonStream::SetWriteStream)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa727958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SetWriteStream", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.GetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::GetWriteStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"GetWriteStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.ResetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::ResetWriteStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa72b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ResetWriteStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.ReceiveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::ReceiveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa72a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ReceiveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.PeekNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::PeekNext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa72b9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"PeekNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.SendNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::System::Object*)>(&::Photon::Pun::PhotonStream::SendNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa727a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SendNext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.CopyToListAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonStream::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(&::Photon::Pun::PhotonStream::CopyToListAndClear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa72ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"CopyToListAndClear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Photon::Pun::PhotonStream::*)()>(&::Photon::Pun::PhotonStream::ToArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa72bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<bool>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa72bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<int32_t>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa72bcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<::StringW>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa72be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<char16_t>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa72bf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<int16_t>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa72c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<float_t>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa72c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<::Photon::Realtime::Player*>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa72c308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<::UnityEngine::Vector3>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa72c488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<::UnityEngine::Vector2>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa72c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStream::*)(::by_ref<::UnityEngine::Quaternion>)>(&::Photon::Pun::PhotonStream::Serialize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa72c728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonStream::__cordl_internal_get_writeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeData;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Photon::Pun::PhotonStream::__cordl_internal_get_writeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeData;
}
constexpr void Photon::Pun::PhotonStream::__cordl_internal_set_writeData(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeData = value;
}
constexpr ::ArrayW<::System::Object*>& Photon::Pun::PhotonStream::__cordl_internal_get_readData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readData;
}
constexpr ::ArrayW<::System::Object*> const& Photon::Pun::PhotonStream::__cordl_internal_get_readData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readData;
}
constexpr void Photon::Pun::PhotonStream::__cordl_internal_set_readData(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readData = value;
}
constexpr int32_t& Photon::Pun::PhotonStream::__cordl_internal_get_currentItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentItem;
}
constexpr int32_t const& Photon::Pun::PhotonStream::__cordl_internal_get_currentItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentItem;
}
constexpr void Photon::Pun::PhotonStream::__cordl_internal_set_currentItem(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentItem = value;
}
constexpr bool& Photon::Pun::PhotonStream::__cordl_internal_get__IsWriting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWriting_k__BackingField;
}
constexpr bool const& Photon::Pun::PhotonStream::__cordl_internal_get__IsWriting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWriting_k__BackingField;
}
constexpr void Photon::Pun::PhotonStream::__cordl_internal_set__IsWriting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsWriting_k__BackingField = value;
}
inline bool Photon::Pun::PhotonStream::get_IsWriting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_IsWriting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStream::set_IsWriting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"set_IsWriting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Pun::PhotonStream::get_IsReading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_IsReading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Photon::Pun::PhotonStream::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStream::_ctor(bool  write, ::ArrayW<::System::Object*>  incomingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, write, incomingData);
}
inline void Photon::Pun::PhotonStream::SetReadStream(::ArrayW<::System::Object*>  incomingData, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SetReadStream", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incomingData, pos);
}
inline void Photon::Pun::PhotonStream::SetWriteStream(::System::Collections::Generic::List_1<::System::Object*>*  newWriteData, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SetWriteStream", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newWriteData, pos);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Pun::PhotonStream::GetWriteStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"GetWriteStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStream::ResetWriteStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ResetWriteStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Photon::Pun::PhotonStream::ReceiveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ReceiveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* Photon::Pun::PhotonStream::PeekNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"PeekNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStream::SendNext(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"SendNext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Photon::Pun::PhotonStream::CopyToListAndClear(::System::Collections::Generic::List_1<::System::Object*>*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"CopyToListAndClear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline ::ArrayW<::System::Object*> Photon::Pun::PhotonStream::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<bool>  myBool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myBool);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<int32_t>  myInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myInt);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<int16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<float_t>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<::Photon::Realtime::Player*>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::Photon::Realtime::Player*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<::UnityEngine::Vector3>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<::UnityEngine::Vector2>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Photon::Pun::PhotonStream::Serialize(::by_ref<::UnityEngine::Quaternion>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Photon::Pun::PhotonStream* Photon::Pun::PhotonStream::New_ctor(bool  write, ::ArrayW<::System::Object*>  incomingData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonStream*>(write, incomingData));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonStream::PhotonStream()   {
}
