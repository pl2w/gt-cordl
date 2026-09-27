#pragma once
// IWYU pragma private; include "Fusion/Protocol/CommunicatorBase.hpp"
#include "Fusion/Protocol/zzzz__IMessage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Protocol/zzzz__CommunicatorBase_def.hpp"
#include "Fusion/Protocol/zzzz__CommunicatorBase_def.hpp"
#include "Fusion/Protocol/zzzz__ICommunicator_def.hpp"
#include "Fusion/Protocol/zzzz__IMessage_def.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.get_CommunicatorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::CommunicatorBase::*)()>(&::Fusion::Protocol::CommunicatorBase::get_CommunicatorID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                    {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.Poll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::CommunicatorBase::*)()>(&::Fusion::Protocol::CommunicatorBase::Poll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6021b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"Poll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.PushPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)(int32_t, int32_t, ::System::Object*)>(&::Fusion::Protocol::CommunicatorBase::PushPackage)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6021b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"PushPackage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)(int32_t, ::Fusion::Protocol::IMessage*)>(&::Fusion::Protocol::CommunicatorBase::SendMessage)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6021f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"SendMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::IMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)()>(&::Fusion::Protocol::CommunicatorBase::Service)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60222d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                    {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.HandleProtocolPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)(int32_t, ::System::Object*)>(&::Fusion::Protocol::CommunicatorBase::HandleProtocolPackage)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6021cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"HandleProtocolPackage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.ReceivePackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::CommunicatorBase::*)(::by_ref<int32_t>, uint8_t*, int32_t)>(&::Fusion::Protocol::CommunicatorBase::ReceivePackage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60225c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"ReceivePackage", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.SendPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::CommunicatorBase::*)(uint8_t, int32_t, bool, uint8_t*, int32_t)>(&::Fusion::Protocol::CommunicatorBase::SendPackage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                    {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase.ConvertData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)(::System::Object*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(&::Fusion::Protocol::CommunicatorBase::ConvertData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                    {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::CommunicatorBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::CommunicatorBase::*)()>(&::Fusion::Protocol::CommunicatorBase::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x60226dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_Callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>* const& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_Callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callbacks;
}
constexpr void Fusion::Protocol::CommunicatorBase::__cordl_internal_set_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Action_2<int32_t,::Fusion::Protocol::IMessage*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callbacks = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_MessageSendQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageSendQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>* const& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_MessageSendQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageSendQueue;
}
constexpr void Fusion::Protocol::CommunicatorBase::__cordl_internal_set_MessageSendQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::Fusion::Protocol::Message*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessageSendQueue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_RecvQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>* const& Fusion::Protocol::CommunicatorBase::__cordl_internal_get_RecvQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvQueue;
}
constexpr void Fusion::Protocol::CommunicatorBase::__cordl_internal_set_RecvQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::System::Object*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecvQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*& Fusion::Protocol::CommunicatorBase::__cordl_internal_get__messageList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageList;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>* const& Fusion::Protocol::CommunicatorBase::__cordl_internal_get__messageList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageList;
}
constexpr void Fusion::Protocol::CommunicatorBase::__cordl_internal_set__messageList(::System::Collections::Generic::List_1<::Fusion::Protocol::Message*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageList = value;
}
constexpr ::Fusion::Protocol::ProtocolSerializer*& Fusion::Protocol::CommunicatorBase::__cordl_internal_get__protocolSerializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolSerializer;
}
constexpr ::Fusion::Protocol::ProtocolSerializer* const& Fusion::Protocol::CommunicatorBase::__cordl_internal_get__protocolSerializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolSerializer;
}
constexpr void Fusion::Protocol::CommunicatorBase::__cordl_internal_set__protocolSerializer(::Fusion::Protocol::ProtocolSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____protocolSerializer = value;
}
inline int32_t Fusion::Protocol::CommunicatorBase::get_CommunicatorID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::Protocol::CommunicatorBase::Poll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"Poll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::CommunicatorBase::PushPackage(int32_t  senderActor, int32_t  eventCode, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"PushPackage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, senderActor, eventCode, data);
}
inline void Fusion::Protocol::CommunicatorBase::SendMessage(int32_t  targetActor, ::Fusion::Protocol::IMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"SendMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::IMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetActor, message);
}
inline void Fusion::Protocol::CommunicatorBase::Service()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::CommunicatorBase::HandleProtocolPackage(int32_t  actorNr, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"HandleProtocolPackage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr, data);
}
inline int32_t Fusion::Protocol::CommunicatorBase::ReceivePackage(::by_ref<int32_t>  senderActor, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {"ReceivePackage", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, senderActor, buffer, bufferLength);
}
inline bool Fusion::Protocol::CommunicatorBase::SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, targetActor, reliable, buffer, bufferLength);
}
inline void Fusion::Protocol::CommunicatorBase::ConvertData(::System::Object*  data, ::by_ref<::ArrayW<uint8_t>>  dataBuffer, ::by_ref<int32_t>  maxLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dataBuffer, maxLength);
}
template<typename K>
requires(::cordl_internals::type_constraint<K, ::Fusion::Protocol::IMessage*>)
inline void Fusion::Protocol::CommunicatorBase::RegisterPackageCallback(::System::Action_2<int32_t,K>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                    {"RegisterPackageCallback", {::i2c::class_of<K>()}, {::i2c::type_of<::System::Action_2<int32_t,K>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Fusion::Protocol::CommunicatorBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Protocol::CommunicatorBase* Fusion::Protocol::CommunicatorBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::CommunicatorBase*>());
}
/// @brief Convert operator to "::Fusion::Protocol::ICommunicator"
constexpr  Fusion::Protocol::CommunicatorBase::operator ::Fusion::Protocol::ICommunicator*() noexcept {
return static_cast<::Fusion::Protocol::ICommunicator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Protocol::ICommunicator"
constexpr ::Fusion::Protocol::ICommunicator* Fusion::Protocol::CommunicatorBase::i___Fusion__Protocol__ICommunicator() noexcept {
return static_cast<::Fusion::Protocol::ICommunicator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::CommunicatorBase::CommunicatorBase()   {
}
template<typename K>
constexpr ::System::Action_2<int32_t,K>*& Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename K>
constexpr ::System::Action_2<int32_t,K>* const& Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename K>
constexpr void Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::__cordl_internal_set_callback(::System::Action_2<int32_t,K>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename K>
inline void Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K>
inline void Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::_RegisterPackageCallback_b__0(int32_t  actor, ::Fusion::Protocol::IMessage*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>*>(),
                        {"<RegisterPackageCallback>b__0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::IMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor, msg);
}
template<typename K>
inline ::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>* Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>*>());
}
// Ctor Parameters []
template<typename K>
constexpr ::Fusion::Protocol::CommunicatorBase___c__DisplayClass15_0_1<K>::CommunicatorBase___c__DisplayClass15_0_1()   {
}
