#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshot.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPtr_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotRef_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::Allocator*)>(&::Fusion::NetworkObjectHeaderSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fac2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.get_HeaderPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderPtr (::Fusion::NetworkObjectHeaderSnapshot::*)()>(&::Fusion::NetworkObjectHeaderSnapshot::get_HeaderPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fac2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_HeaderPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkObjectHeader> (::Fusion::NetworkObjectHeaderSnapshot::*)()>(&::Fusion::NetworkObjectHeaderSnapshot::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fac2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.get_Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectHeaderSnapshot::*)()>(&::Fusion::NetworkObjectHeaderSnapshot::get_Raw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fac304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_Raw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectMeta*, bool)>(&::Fusion::NetworkObjectHeaderSnapshot::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fac358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(int32_t)>(&::Fusion::NetworkObjectHeaderSnapshot::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fac420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)()>(&::Fusion::NetworkObjectHeaderSnapshot::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fac474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::Simulation*)>(&::Fusion::NetworkObjectHeaderSnapshot::Clone)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fac4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Clone", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::ArrayW<int32_t>)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyTo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fac588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyFrom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fac630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyTo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fac6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fac780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fac824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fac8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectHeaderSnapshot::CopyTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fac96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.GetBehaviourPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Fusion::NetworkObjectHeaderSnapshot::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkObjectHeaderSnapshot::GetBehaviourPtr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fac2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshot.BuildCRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::NetworkObjectHeaderSnapshot::*)()>(&::Fusion::NetworkObjectHeaderSnapshot::BuildCRC)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fabe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"BuildCRC", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Allocator*& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get__allocator_P()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator_P;
}
constexpr ::Fusion::Allocator* const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get__allocator_P() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allocator_P;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set__allocator_P(::Fusion::Allocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allocator_P = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set_Prev(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot*& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Fusion::NetworkObjectHeaderSnapshot* const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set_Next(::Fusion::NetworkObjectHeaderSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set_Tick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr int32_t& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_WordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr int32_t const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get_WordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set_WordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WordCount = value;
}
constexpr int32_t*& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get__ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr int32_t* const& Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_get__ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr void Fusion::NetworkObjectHeaderSnapshot::__cordl_internal_set__ptr(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ptr = value;
}
inline void Fusion::NetworkObjectHeaderSnapshot::_ctor(::Fusion::Allocator*  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Allocator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocator);
}
inline ::Fusion::NetworkObjectHeaderPtr Fusion::NetworkObjectHeaderSnapshot::get_HeaderPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_HeaderPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderPtr>(this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkObjectHeader> Fusion::NetworkObjectHeaderSnapshot::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkObjectHeader>>(this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectHeaderSnapshot::get_Raw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"get_Raw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(this, ___internal_method);
}
inline void Fusion::NetworkObjectHeaderSnapshot::Init(::Fusion::NetworkObjectMeta*  meta, bool  copyData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta, copyData);
}
inline void Fusion::NetworkObjectHeaderSnapshot::Init(int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordCount);
}
inline void Fusion::NetworkObjectHeaderSnapshot::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshot::Clone(::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"Clone", {}, {::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(this, ___internal_method, simulation);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyTo(::ArrayW<int32_t>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyFrom(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyTo(::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meta);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyFrom(::Fusion::NetworkObjectHeaderSnapshot*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyTo(::Fusion::NetworkObjectHeaderSnapshot*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyFrom(::Fusion::NetworkObjectHeaderSnapshotRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshot::CopyTo(::Fusion::NetworkObjectHeaderSnapshotRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline int32_t* Fusion::NetworkObjectHeaderSnapshot::GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(this, ___internal_method, behaviour);
}
inline uint64_t Fusion::NetworkObjectHeaderSnapshot::BuildCRC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshot*>(),
                        {"BuildCRC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshot::New_ctor(::Fusion::Allocator*  allocator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectHeaderSnapshot*>(allocator));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderSnapshot::NetworkObjectHeaderSnapshot()   {
}
