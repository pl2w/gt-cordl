#pragma once
// IWYU pragma private; include "Fusion/SimulationInput.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__SimulationInputHeader_impl.hpp"
#include "Fusion/zzzz__TickRate_Resolved_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferSerializer_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__NetworkProjectConfig_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationConfig_def.hpp"
#include "Fusion/zzzz__SimulationInputHeader_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationInput.get_Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::PlayerRef (::Fusion::SimulationInput::*)()>(&::Fusion::SimulationInput::get_Player)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60035d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.set_Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(::Fusion::PlayerRef)>(&::Fusion::SimulationInput::set_Player)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60035fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"set_Player", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInputHeader* (::Fusion::SimulationInput::*)()>(&::Fusion::SimulationInput::get_Header)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6003630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Fusion::SimulationInput::*)()>(&::Fusion::SimulationInput::get_Data)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6003658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.get_Sent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationInput::*)()>(&::Fusion::SimulationInput::get_Sent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6003684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Sent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.set_Sent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(int32_t)>(&::Fusion::SimulationInput::set_Sent)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60036ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"set_Sent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(int32_t)>(&::Fusion::SimulationInput::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60036e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(::Fusion::SimulationInput*, int32_t)>(&::Fusion::SimulationInput::CopyFrom)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x600371c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(::Fusion::SimulationInput*, ::Fusion::SimulationConfig*, ::Fusion::Sockets::NetBitBufferSerializer)>(&::Fusion::SimulationInput::Serialize)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6003768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationConfig*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBufferSerializer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)(::Fusion::Allocator*)>(&::Fusion::SimulationInput::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60039e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput::*)()>(&::Fusion::SimulationInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6003a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationInput::__cordl_internal_get__sent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sent;
}
constexpr int32_t const& Fusion::SimulationInput::__cordl_internal_get__sent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sent;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set__sent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sent = value;
}
constexpr bool& Fusion::SimulationInput::__cordl_internal_get__pooled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooled;
}
constexpr bool const& Fusion::SimulationInput::__cordl_internal_get__pooled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooled;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set__pooled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pooled = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationInput::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationInput::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set__player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
constexpr int32_t*& Fusion::SimulationInput::__cordl_internal_get__ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr int32_t* const& Fusion::SimulationInput::__cordl_internal_get__ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set__ptr(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ptr = value;
}
constexpr ::Fusion::SimulationInput*& Fusion::SimulationInput::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Fusion::SimulationInput* const& Fusion::SimulationInput::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set_Prev(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::Fusion::SimulationInput*& Fusion::SimulationInput::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Fusion::SimulationInput* const& Fusion::SimulationInput::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Fusion::SimulationInput::__cordl_internal_set_Next(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline ::Fusion::PlayerRef Fusion::SimulationInput::get_Player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::PlayerRef>(this, ___internal_method);
}
inline void Fusion::SimulationInput::set_Player(::Fusion::PlayerRef  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"set_Player", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::SimulationInputHeader* Fusion::SimulationInput::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInputHeader*>(this, ___internal_method);
}
inline int32_t* Fusion::SimulationInput::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method);
}
inline int32_t Fusion::SimulationInput::get_Sent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"get_Sent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::SimulationInput::set_Sent(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"set_Sent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::SimulationInput::Clear(int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordCount);
}
inline void Fusion::SimulationInput::CopyFrom(::Fusion::SimulationInput*  source, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, wordCount);
}
inline void Fusion::SimulationInput::Serialize(::Fusion::SimulationInput*  previous, ::Fusion::SimulationConfig*  config, ::Fusion::Sockets::NetBitBufferSerializer  serializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationConfig*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBufferSerializer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, config, serializer);
}
inline void Fusion::SimulationInput::Dispose(::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {"Dispose", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocator);
}
inline void Fusion::SimulationInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationInput*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInput::SimulationInput()   {
}
//  Writing Method size for method: ::Fusion::SimulationInput_Pool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput_Pool::*)(::Fusion::SimulationConfig*, ::Fusion::Allocator*)>(&::Fusion::SimulationInput_Pool::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6004348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationConfig*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Pool.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::SimulationInput_Pool::*)()>(&::Fusion::SimulationInput_Pool::Acquire)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x600445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Acquire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Pool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput_Pool::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInput_Pool::Release)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6004648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Pool.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput_Pool::*)()>(&::Fusion::SimulationInput_Pool::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6004714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Allocator*& Fusion::SimulationInput_Pool::__cordl_internal_get__allocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr ::Fusion::Allocator* const& Fusion::SimulationInput_Pool::__cordl_internal_get__allocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator;
}
constexpr void Fusion::SimulationInput_Pool::__cordl_internal_set__allocator(::Fusion::Allocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocator = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*& Fusion::SimulationInput_Pool::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>* const& Fusion::SimulationInput_Pool::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void Fusion::SimulationInput_Pool::__cordl_internal_set__pool(::System::Collections::Generic::Stack_1<::Fusion::SimulationInput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*& Fusion::SimulationInput_Pool::__cordl_internal_get__created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::SimulationInput*>* const& Fusion::SimulationInput_Pool::__cordl_internal_get__created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created;
}
constexpr void Fusion::SimulationInput_Pool::__cordl_internal_set__created(::System::Collections::Generic::List_1<::Fusion::SimulationInput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____created = value;
}
constexpr ::Fusion::SimulationConfig*& Fusion::SimulationInput_Pool::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Fusion::SimulationConfig* const& Fusion::SimulationInput_Pool::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::SimulationInput_Pool::__cordl_internal_set__config(::Fusion::SimulationConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr bool& Fusion::SimulationInput_Pool::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Fusion::SimulationInput_Pool::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Fusion::SimulationInput_Pool::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Fusion::SimulationInput_Pool::_ctor(::Fusion::SimulationConfig*  config, ::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationConfig*>(), ::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config, allocator);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInput_Pool::Acquire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Acquire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method);
}
inline void Fusion::SimulationInput_Pool::Release(::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Fusion::SimulationInput_Pool::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Pool*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationInput_Pool* Fusion::SimulationInput_Pool::New_ctor(::Fusion::SimulationConfig*  config, ::Fusion::Allocator*  allocator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationInput_Pool*>(config, allocator));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInput_Pool::SimulationInput_Pool()   {
}
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationInput_Buffer::*)()>(&::Fusion::SimulationInput_Buffer::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6003a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.get_Full
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationInput_Buffer::*)()>(&::Fusion::SimulationInput_Buffer::get_Full)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6003a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"get_Full", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput_Buffer::*)(::Fusion::NetworkProjectConfig*)>(&::Fusion::SimulationInput_Buffer::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6003af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInput_Buffer::*)()>(&::Fusion::SimulationInput_Buffer::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6003c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.CopySortedTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationInput_Buffer::*)(::ArrayW<::Fusion::SimulationInput*>)>(&::Fusion::SimulationInput_Buffer::CopySortedTo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6003ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"CopySortedTo", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationInput_Buffer::*)(::Fusion::Tick)>(&::Fusion::SimulationInput_Buffer::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6003e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Contains", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationInput_Buffer::*)(::Fusion::Tick, ::by_ref<::Fusion::SimulationInput*>)>(&::Fusion::SimulationInput_Buffer::Remove)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6003ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::by_ref<::Fusion::SimulationInput*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.GetInsertTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Fusion::SimulationInput_Buffer::*)(::Fusion::Tick)>(&::Fusion::SimulationInput_Buffer::GetInsertTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x600400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"GetInsertTime", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::SimulationInput_Buffer::*)(::Fusion::Tick)>(&::Fusion::SimulationInput_Buffer::Get)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60040b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.GetLastUsedInputHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInputHeader (::Fusion::SimulationInput_Buffer::*)()>(&::Fusion::SimulationInput_Buffer::GetLastUsedInputHeader)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x600413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"GetLastUsedInputHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInput_Buffer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationInput_Buffer::*)(::Fusion::SimulationInput*, ::System::Nullable_1<double_t>)>(&::Fusion::SimulationInput_Buffer::Add)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6004148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkProjectConfig*& Fusion::SimulationInput_Buffer::__cordl_internal_get__cfg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cfg;
}
constexpr ::Fusion::NetworkProjectConfig* const& Fusion::SimulationInput_Buffer::__cordl_internal_get__cfg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cfg;
}
constexpr void Fusion::SimulationInput_Buffer::__cordl_internal_set__cfg(::Fusion::NetworkProjectConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cfg = value;
}
constexpr ::GlobalNamespace::TickRate_Resolved& Fusion::SimulationInput_Buffer::__cordl_internal_get__rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr ::GlobalNamespace::TickRate_Resolved const& Fusion::SimulationInput_Buffer::__cordl_internal_get__rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr void Fusion::SimulationInput_Buffer::__cordl_internal_set__rate(::GlobalNamespace::TickRate_Resolved  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rate = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*& Fusion::SimulationInput_Buffer::__cordl_internal_get__map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>* const& Fusion::SimulationInput_Buffer::__cordl_internal_get__map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____map;
}
constexpr void Fusion::SimulationInput_Buffer::__cordl_internal_set__map(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,::Fusion::SimulationInput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____map = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*& Fusion::SimulationInput_Buffer::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>* const& Fusion::SimulationInput_Buffer::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void Fusion::SimulationInput_Buffer::__cordl_internal_set__time(::System::Collections::Generic::Dictionary_2<::Fusion::Tick,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
constexpr ::Fusion::SimulationInputHeader& Fusion::SimulationInput_Buffer::__cordl_internal_get__lastUsedInputHeaderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUsedInputHeaderData;
}
constexpr ::Fusion::SimulationInputHeader const& Fusion::SimulationInput_Buffer::__cordl_internal_get__lastUsedInputHeaderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUsedInputHeaderData;
}
constexpr void Fusion::SimulationInput_Buffer::__cordl_internal_set__lastUsedInputHeaderData(::Fusion::SimulationInputHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUsedInputHeaderData = value;
}
inline int32_t Fusion::SimulationInput_Buffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::SimulationInput_Buffer::get_Full()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"get_Full", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::SimulationInput_Buffer::_ctor(::Fusion::NetworkProjectConfig*  cfg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkProjectConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cfg);
}
inline void Fusion::SimulationInput_Buffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::SimulationInput_Buffer::CopySortedTo(::ArrayW<::Fusion::SimulationInput*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"CopySortedTo", {}, {::i2c::type_of<::ArrayW<::Fusion::SimulationInput*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array);
}
inline bool Fusion::SimulationInput_Buffer::Contains(::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Contains", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tick);
}
inline bool Fusion::SimulationInput_Buffer::Remove(::Fusion::Tick  tick, ::by_ref<::Fusion::SimulationInput*>  removed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<::by_ref<::Fusion::SimulationInput*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tick, removed);
}
inline ::System::Nullable_1<double_t> Fusion::SimulationInput_Buffer::GetInsertTime(::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"GetInsertTime", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method, tick);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInput_Buffer::Get(::Fusion::Tick  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Get", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, tick);
}
inline ::Fusion::SimulationInputHeader Fusion::SimulationInput_Buffer::GetLastUsedInputHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"GetLastUsedInputHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInputHeader>(this, ___internal_method);
}
inline bool Fusion::SimulationInput_Buffer::Add(::Fusion::SimulationInput*  input, ::System::Nullable_1<double_t>  insertTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInput_Buffer*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, insertTime);
}
inline ::Fusion::SimulationInput_Buffer* Fusion::SimulationInput_Buffer::New_ctor(::Fusion::NetworkProjectConfig*  cfg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationInput_Buffer*>(cfg));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInput_Buffer::SimulationInput_Buffer()   {
}
