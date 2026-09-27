#pragma once
// IWYU pragma private; include "Fusion/SimulationConnection.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__SimulationMessageList_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__Timer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionData_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__NetworkObjectPriorityList_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__TimeSeries_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationConnection.get_ConnectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationConnection::*)()>(&::Fusion::SimulationConnection::get_ConnectionIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60025fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"get_ConnectionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.get_DestroysPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationConnection::*)()>(&::Fusion::SimulationConnection::get_DestroysPending)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ffeef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"get_DestroysPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.op_Implicit___Fusion__PlayerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (*)(::Fusion::SimulationConnection*)>(&::Fusion::SimulationConnection::op_Implicit___Fusion__PlayerRef)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6002614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::Simulation*)>(&::Fusion::SimulationConnection::_ctor)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6002684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.GetPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationConnection::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::SimulationConnection::GetPriority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6002a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"GetPriority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.TryGetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationConnection::*)(::Fusion::NetworkId, ::by_ref<::Fusion::NetworkObjectConnectionData*>)>(&::Fusion::SimulationConnection::TryGetObjectData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fff980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectConnectionData* (::Fusion::SimulationConnection::*)(::Fusion::NetworkId, bool, bool)>(&::Fusion::SimulationConnection::GetObjectData)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5ff87fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"GetObjectData", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.DestroyedNextId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationConnection::*)(::by_ref<::Fusion::NetworkId>)>(&::Fusion::SimulationConnection::DestroyedNextId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ffef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"DestroyedNextId", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.ObjectData_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkId)>(&::Fusion::SimulationConnection::ObjectData_Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6000e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_Remove", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.ObjectData_Destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkId, bool)>(&::Fusion::SimulationConnection::ObjectData_Destroyed)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6000aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_Destroyed", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.ObjectData_IsCreateUnconfirmed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Fusion::SimulationConnection::*)(::Fusion::NetworkId)>(&::Fusion::SimulationConnection::ObjectData_IsCreateUnconfirmed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6002ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_IsCreateUnconfirmed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.ObjectData_IsDestroyUnconfirmed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Fusion::SimulationConnection::*)(::Fusion::NetworkId)>(&::Fusion::SimulationConnection::ObjectData_IsDestroyUnconfirmed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ffea78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_IsDestroyUnconfirmed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::Simulation*)>(&::Fusion::SimulationConnection::Free)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6002b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.PacketReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)()>(&::Fusion::SimulationConnection::PacketReceiveDelta)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6002b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"PacketReceiveDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.ResetTimeFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)()>(&::Fusion::SimulationConnection::ResetTimeFeedback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ff8d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ResetTimeFeedback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.InputReceiveDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::Tick, double_t, double_t)>(&::Fusion::SimulationConnection::InputReceiveDelta)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ff962c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"InputReceiveDelta", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkObjectConnectionData*, ::Fusion::NetworkObjectMeta*)>(&::Fusion::SimulationConnection::SetActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ffeafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"SetActive", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.SetIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::SimulationConnection::SetIdle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ffeb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"SetIdle", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.AddAlwaysInterested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::SimulationConnection::AddAlwaysInterested)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6002dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"AddAlwaysInterested", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationConnection.RemoveAlwaysInterested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationConnection::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::SimulationConnection::RemoveAlwaysInterested)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x6002fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"RemoveAlwaysInterested", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Simulation*& Fusion::SimulationConnection::__cordl_internal_get__simulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr ::Fusion::Simulation* const& Fusion::SimulationConnection::__cordl_internal_get__simulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulation;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__simulation(::Fusion::Simulation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulation = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*& Fusion::SimulationConnection::__cordl_internal_get__objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>* const& Fusion::SimulationConnection::__cordl_internal_get__objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__objects(::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId,::Fusion::NetworkObjectConnectionData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objects = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*& Fusion::SimulationConnection::__cordl_internal_get__objectsDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsDestroyed;
}
constexpr ::System::Collections::Generic::Queue_1<::Fusion::NetworkId>* const& Fusion::SimulationConnection::__cordl_internal_get__objectsDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsDestroyed;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__objectsDestroyed(::System::Collections::Generic::Queue_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectsDestroyed = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationConnection::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationConnection::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr bool& Fusion::SimulationConnection::__cordl_internal_get_AreaOfInterestHasBeenUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestHasBeenUpdated;
}
constexpr bool const& Fusion::SimulationConnection::__cordl_internal_get_AreaOfInterestHasBeenUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestHasBeenUpdated;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_AreaOfInterestHasBeenUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AreaOfInterestHasBeenUpdated = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Fusion::SimulationConnection::__cordl_internal_get_AreaOfInterestCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestCells;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Fusion::SimulationConnection::__cordl_internal_get_AreaOfInterestCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AreaOfInterestCells;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_AreaOfInterestCells(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AreaOfInterestCells = value;
}
constexpr uint64_t& Fusion::SimulationConnection::__cordl_internal_get_MessagesInSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesInSequence;
}
constexpr uint64_t const& Fusion::SimulationConnection::__cordl_internal_get_MessagesInSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesInSequence;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_MessagesInSequence(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessagesInSequence = value;
}
constexpr uint64_t& Fusion::SimulationConnection::__cordl_internal_get_MessagesOutSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesOutSequence;
}
constexpr uint64_t const& Fusion::SimulationConnection::__cordl_internal_get_MessagesOutSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesOutSequence;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_MessagesOutSequence(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessagesOutSequence = value;
}
constexpr ::Fusion::SimulationMessageList& Fusion::SimulationConnection::__cordl_internal_get_MessagesIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesIn;
}
constexpr ::Fusion::SimulationMessageList const& Fusion::SimulationConnection::__cordl_internal_get_MessagesIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesIn;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_MessagesIn(::Fusion::SimulationMessageList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessagesIn = value;
}
constexpr ::Fusion::SimulationMessageList& Fusion::SimulationConnection::__cordl_internal_get_MessagesOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesOut;
}
constexpr ::Fusion::SimulationMessageList const& Fusion::SimulationConnection::__cordl_internal_get_MessagesOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessagesOut;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_MessagesOut(::Fusion::SimulationMessageList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessagesOut = value;
}
constexpr double_t& Fusion::SimulationConnection::__cordl_internal_get_LastSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSend;
}
constexpr double_t const& Fusion::SimulationConnection::__cordl_internal_get_LastSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSend;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_LastSend(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastSend = value;
}
constexpr int32_t& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructsVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructsVersion;
}
constexpr int32_t const& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructsVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructsVersion;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_ActiveStructsVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveStructsVersion = value;
}
constexpr int32_t& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructsIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructsIndex;
}
constexpr int32_t const& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructsIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructsIndex;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_ActiveStructsIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveStructsIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructs;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>* const& Fusion::SimulationConnection::__cordl_internal_get_ActiveStructs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveStructs;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_ActiveStructs(::System::Collections::Generic::List_1<::Fusion::NetworkObjectConnectionData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveStructs = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::SimulationConnection::__cordl_internal_get__packetRecvDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetRecvDelta;
}
constexpr ::Fusion::TimeSeries* const& Fusion::SimulationConnection::__cordl_internal_get__packetRecvDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetRecvDelta;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__packetRecvDelta(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packetRecvDelta = value;
}
constexpr ::Fusion::Timer& Fusion::SimulationConnection::__cordl_internal_get__packetRecvDeltaTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetRecvDeltaTimer;
}
constexpr ::Fusion::Timer const& Fusion::SimulationConnection::__cordl_internal_get__packetRecvDeltaTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packetRecvDeltaTimer;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__packetRecvDeltaTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____packetRecvDeltaTimer = value;
}
constexpr ::Fusion::SimulationInput_Buffer*& Fusion::SimulationConnection::__cordl_internal_get__inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputs;
}
constexpr ::Fusion::SimulationInput_Buffer* const& Fusion::SimulationConnection::__cordl_internal_get__inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputs;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__inputs(::Fusion::SimulationInput_Buffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputs = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::SimulationConnection::__cordl_internal_get__clientOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientOffset;
}
constexpr ::Fusion::TimeSeries* const& Fusion::SimulationConnection::__cordl_internal_get__clientOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientOffset;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__clientOffset(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientOffset = value;
}
constexpr ::Fusion::Tick& Fusion::SimulationConnection::__cordl_internal_get__latestTickReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestTickReceived;
}
constexpr ::Fusion::Tick const& Fusion::SimulationConnection::__cordl_internal_get__latestTickReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestTickReceived;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__latestTickReceived(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestTickReceived = value;
}
constexpr ::Fusion::Tick& Fusion::SimulationConnection::__cordl_internal_get__latestTickAcknowledged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestTickAcknowledged;
}
constexpr ::Fusion::Tick const& Fusion::SimulationConnection::__cordl_internal_get__latestTickAcknowledged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestTickAcknowledged;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set__latestTickAcknowledged(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestTickAcknowledged = value;
}
constexpr ::Fusion::NetworkObjectPriorityList*& Fusion::SimulationConnection::__cordl_internal_get_ObjectPriorityList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectPriorityList;
}
constexpr ::Fusion::NetworkObjectPriorityList* const& Fusion::SimulationConnection::__cordl_internal_get_ObjectPriorityList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectPriorityList;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_ObjectPriorityList(::Fusion::NetworkObjectPriorityList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectPriorityList = value;
}
constexpr ::Fusion::Sockets::NetConnection*& Fusion::SimulationConnection::__cordl_internal_get_Connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr ::Fusion::Sockets::NetConnection* const& Fusion::SimulationConnection::__cordl_internal_get_Connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connection;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_Connection(::Fusion::Sockets::NetConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Connection = value;
}
constexpr ::Fusion::Sockets::NetConnectionId& Fusion::SimulationConnection::__cordl_internal_get_ConnectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr ::Fusion::Sockets::NetConnectionId const& Fusion::SimulationConnection::__cordl_internal_get_ConnectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_ConnectionId(::Fusion::Sockets::NetConnectionId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionId = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*& Fusion::SimulationConnection::__cordl_internal_get_PendingDeleteMainTRSP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingDeleteMainTRSP;
}
constexpr ::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>* const& Fusion::SimulationConnection::__cordl_internal_get_PendingDeleteMainTRSP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingDeleteMainTRSP;
}
constexpr void Fusion::SimulationConnection::__cordl_internal_set_PendingDeleteMainTRSP(::System::Collections::Generic::HashSet_1<::Fusion::NetworkId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingDeleteMainTRSP = value;
}
inline int32_t Fusion::SimulationConnection::get_ConnectionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"get_ConnectionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::SimulationConnection::get_DestroysPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"get_DestroysPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Fusion::PlayerRef Fusion::SimulationConnection::op_Implicit___Fusion__PlayerRef(::Fusion::SimulationConnection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::SimulationConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(nullptr, ___internal_method, c);
}
inline void Fusion::SimulationConnection::_ctor(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation);
}
inline int32_t Fusion::SimulationConnection::GetPriority(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"GetPriority", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, meta);
}
inline bool Fusion::SimulationConnection::TryGetObjectData(::Fusion::NetworkId  id, ::by_ref<::Fusion::NetworkObjectConnectionData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"TryGetObjectData", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data);
}
inline ::Fusion::NetworkObjectConnectionData* Fusion::SimulationConnection::GetObjectData(::Fusion::NetworkId  id, bool  create, bool  allowFail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"GetObjectData", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectConnectionData*>(this, ___internal_method, id, create, allowFail);
}
inline bool Fusion::SimulationConnection::DestroyedNextId(::by_ref<::Fusion::NetworkId>  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"DestroyedNextId", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Fusion::SimulationConnection::ObjectData_Remove(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_Remove", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Fusion::SimulationConnection::ObjectData_Destroyed(::Fusion::NetworkId  id, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_Destroyed", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, force);
}
inline ::System::Nullable_1<bool> Fusion::SimulationConnection::ObjectData_IsCreateUnconfirmed(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_IsCreateUnconfirmed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, id);
}
inline ::System::Nullable_1<bool> Fusion::SimulationConnection::ObjectData_IsDestroyUnconfirmed(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ObjectData_IsDestroyUnconfirmed", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, id);
}
inline void Fusion::SimulationConnection::Free(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation);
}
inline void Fusion::SimulationConnection::PacketReceiveDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"PacketReceiveDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationConnection::ResetTimeFeedback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"ResetTimeFeedback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationConnection::InputReceiveDelta(::Fusion::Tick  tick, double_t  receive, double_t  expected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"InputReceiveDelta", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, receive, expected);
}
inline void Fusion::SimulationConnection::SetActive(::Fusion::NetworkObjectConnectionData*  data, ::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"SetActive", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, meta);
}
inline void Fusion::SimulationConnection::SetIdle(::Fusion::NetworkObjectConnectionData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"SetIdle", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::SimulationConnection::AddAlwaysInterested(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"AddAlwaysInterested", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::SimulationConnection::RemoveAlwaysInterested(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationConnection*>(),
                        {"RemoveAlwaysInterested", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline ::Fusion::SimulationConnection* Fusion::SimulationConnection::New_ctor(::Fusion::Simulation*  simulation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationConnection*>(simulation));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationConnection::SimulationConnection()   {
}
