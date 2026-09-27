#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageEnvelope.hpp"
#include "Fusion/Sockets/zzzz__INetBitWriteStream_impl.hpp"
#include "Fusion/zzzz__SimulationMessageEnvelope_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::SimulationMessageEnvelope::Write)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x600597c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.GetBitCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::SimulationMessageEnvelope::GetBitCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6005af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"GetBitCount", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageEnvelope* (*)(::Fusion::Simulation*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::SimulationMessageEnvelope::Read)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x6005b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageEnvelope* (*)(::Fusion::Simulation*, ::Fusion::SimulationMessage*, uint64_t)>(&::Fusion::SimulationMessageEnvelope::Allocate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6006024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Simulation*, ::by_ref<::Fusion::SimulationMessageEnvelope*>)>(&::Fusion::SimulationMessageEnvelope::Free)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60060a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageEnvelope*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SimulationMessageEnvelope::*)()>(&::Fusion::SimulationMessageEnvelope::ToString)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x600617c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                    {::i2c::class_of<::Fusion::SimulationMessageEnvelope>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageEnvelope.Fusion_ILogDumpable_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageEnvelope::*)(::System::Text::StringBuilder*)>(&::Fusion::SimulationMessageEnvelope::Fusion_ILogDumpable_Dump)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x600635c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::Sockets::INetBitWriteStream*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::SimulationMessageEnvelope::WriteInternal(::Fusion::SimulationMessageEnvelope*  envelope, T*  buffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                    {"WriteInternal", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<T*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, envelope, buffer);
}
inline void Fusion::SimulationMessageEnvelope::Write(::Fusion::SimulationMessageEnvelope*  envelope, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, envelope, buffer);
}
inline int32_t Fusion::SimulationMessageEnvelope::GetBitCount(::Fusion::SimulationMessageEnvelope*  envelope, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"GetBitCount", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, envelope, buffer);
}
inline ::Fusion::SimulationMessageEnvelope* Fusion::SimulationMessageEnvelope::Read(::Fusion::Simulation*  sim, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageEnvelope*>(nullptr, ___internal_method, sim, buffer);
}
inline ::Fusion::SimulationMessageEnvelope* Fusion::SimulationMessageEnvelope::Allocate(::Fusion::Simulation*  sim, ::Fusion::SimulationMessage*  message, uint64_t  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageEnvelope*>(nullptr, ___internal_method, sim, message, sequence);
}
inline void Fusion::SimulationMessageEnvelope::Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationMessageEnvelope*>  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessageEnvelope*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sim, envelope);
}
inline ::StringW Fusion::SimulationMessageEnvelope::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationMessageEnvelope>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Fusion::SimulationMessageEnvelope::Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageEnvelope>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr  Fusion::SimulationMessageEnvelope::operator ::Fusion::ILogDumpable*()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* Fusion::SimulationMessageEnvelope::i___Fusion__ILogDumpable()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Sequence", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::Fusion::SimulationMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prev", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageEnvelope::SimulationMessageEnvelope(uint64_t  Sequence, ::Fusion::SimulationMessage*  Message, ::Fusion::SimulationMessageEnvelope*  Prev, ::Fusion::SimulationMessageEnvelope*  Next) noexcept  {
this->Sequence = Sequence;
this->Message = Message;
this->Prev = Prev;
this->Next = Next;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageEnvelope::SimulationMessageEnvelope()   {
}
