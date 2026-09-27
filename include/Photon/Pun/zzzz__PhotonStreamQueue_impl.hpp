#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonStreamQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonStreamQueue_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)(int32_t)>(&::Photon::Pun::PhotonStreamQueue::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa729acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.BeginWritePackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)()>(&::Photon::Pun::PhotonStreamQueue::BeginWritePackage)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa729b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"BeginWritePackage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)()>(&::Photon::Pun::PhotonStreamQueue::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa729e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.SendNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)(::System::Object*)>(&::Photon::Pun::PhotonStreamQueue::SendNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa729efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"SendNext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.HasQueuedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonStreamQueue::*)()>(&::Photon::Pun::PhotonStreamQueue::HasQueuedObjects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa729fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"HasQueuedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.ReceiveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Pun::PhotonStreamQueue::*)()>(&::Photon::Pun::PhotonStreamQueue::ReceiveNext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa729ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"ReceiveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonStreamQueue::Serialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa72a08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Serialize", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonStreamQueue.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonStreamQueue::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonStreamQueue::Deserialize)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa72a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_SampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleRate;
}
constexpr int32_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_SampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleRate;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_SampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleRate = value;
}
constexpr int32_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_SampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCount;
}
constexpr int32_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_SampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleCount;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_SampleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleCount = value;
}
constexpr int32_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_ObjectsPerSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectsPerSample;
}
constexpr int32_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_ObjectsPerSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectsPerSample;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_ObjectsPerSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectsPerSample = value;
}
constexpr float_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_LastSampleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSampleTime;
}
constexpr float_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_LastSampleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSampleTime;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_LastSampleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastSampleTime = value;
}
constexpr int32_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_LastFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameCount;
}
constexpr int32_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_LastFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameCount;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_LastFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameCount = value;
}
constexpr int32_t& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_NextObjectIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextObjectIndex;
}
constexpr int32_t const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_NextObjectIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextObjectIndex;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_NextObjectIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextObjectIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Objects;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Objects;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_Objects(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Objects = value;
}
constexpr bool& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_IsWriting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsWriting;
}
constexpr bool const& Photon::Pun::PhotonStreamQueue::__cordl_internal_get_m_IsWriting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsWriting;
}
constexpr void Photon::Pun::PhotonStreamQueue::__cordl_internal_set_m_IsWriting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsWriting = value;
}
inline void Photon::Pun::PhotonStreamQueue::_ctor(int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate);
}
inline void Photon::Pun::PhotonStreamQueue::BeginWritePackage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"BeginWritePackage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStreamQueue::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStreamQueue::SendNext(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"SendNext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Photon::Pun::PhotonStreamQueue::HasQueuedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"HasQueuedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Photon::Pun::PhotonStreamQueue::ReceiveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"ReceiveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Pun::PhotonStreamQueue::Serialize(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Serialize", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonStreamQueue::Deserialize(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonStreamQueue*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::Photon::Pun::PhotonStreamQueue* Photon::Pun::PhotonStreamQueue::New_ctor(int32_t  sampleRate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonStreamQueue*>(sampleRate));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonStreamQueue::PhotonStreamQueue()   {
}
