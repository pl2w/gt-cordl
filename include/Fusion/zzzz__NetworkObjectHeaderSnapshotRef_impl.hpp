#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshotRef.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotRef_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fabdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.op_Implicit___Fusion__NetworkObjectHeaderSnapshotRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshotRef (*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotRef::op_Implicit___Fusion__NetworkObjectHeaderSnapshotRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fabdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.get_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkObjectHeaderSnapshotRef::*)()>(&::Fusion::NetworkObjectHeaderSnapshotRef::get_Tick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fabdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkObjectHeader> (::Fusion::NetworkObjectHeaderSnapshotRef::*)()>(&::Fusion::NetworkObjectHeaderSnapshotRef::get_Header)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fabdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.get_SnapshotCRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::NetworkObjectHeaderSnapshotRef::*)()>(&::Fusion::NetworkObjectHeaderSnapshotRef::get_SnapshotCRC)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fabe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_SnapshotCRC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.get_Raw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkObjectHeaderSnapshotRef::*)()>(&::Fusion::NetworkObjectHeaderSnapshotRef::get_Raw)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fabedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Raw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkObjectHeaderSnapshotRef::CopyFrom)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fabf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectHeaderSnapshotRef::CopyFrom)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fabfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkObjectHeaderSnapshotRef::CopyTo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fac08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::ArrayW<int32_t>)>(&::Fusion::NetworkObjectHeaderSnapshotRef::CopyTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fac138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkObjectHeaderSnapshotRef)>(&::Fusion::NetworkObjectHeaderSnapshotRef::CopyTo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fac1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotRef.GetBehaviourPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Fusion::NetworkObjectHeaderSnapshotRef::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkObjectHeaderSnapshotRef::GetBehaviourPtr)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fac290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectHeaderSnapshotRef::_ctor(::Fusion::NetworkObjectHeaderSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, snapshot);
}
inline ::Fusion::NetworkObjectHeaderSnapshotRef Fusion::NetworkObjectHeaderSnapshotRef::op_Implicit___Fusion__NetworkObjectHeaderSnapshotRef(::Fusion::NetworkObjectHeaderSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshotRef>(nullptr, ___internal_method, snapshot);
}
inline ::Fusion::Tick Fusion::NetworkObjectHeaderSnapshotRef::get_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(*this, ___internal_method);
}
inline ::by_ref<::Fusion::NetworkObjectHeader> Fusion::NetworkObjectHeaderSnapshotRef::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkObjectHeader>>(*this, ___internal_method);
}
inline uint64_t Fusion::NetworkObjectHeaderSnapshotRef::get_SnapshotCRC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_SnapshotCRC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkObjectHeaderSnapshotRef::get_Raw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"get_Raw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectHeaderSnapshotRef::CopyFrom(::Fusion::NetworkObjectMeta*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshotRef::CopyFrom(::Fusion::NetworkObjectHeaderSnapshotRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshotRef::CopyTo(::Fusion::NetworkObjectMeta*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshotRef::CopyTo(::ArrayW<int32_t>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void Fusion::NetworkObjectHeaderSnapshotRef::CopyTo(::Fusion::NetworkObjectHeaderSnapshotRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"CopyTo", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshotRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline int32_t* Fusion::NetworkObjectHeaderSnapshotRef::GetBehaviourPtr(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotRef>(),
                        {"GetBehaviourPtr", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method, behaviour);
}
// Ctor Parameters [CppParam { name: "_snapshot_P", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeaderSnapshotRef::NetworkObjectHeaderSnapshotRef(::Fusion::NetworkObjectHeaderSnapshot*  _snapshot_P) noexcept  {
this->_snapshot_P = _snapshot_P;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderSnapshotRef::NetworkObjectHeaderSnapshotRef()   {
}
