#pragma once
// IWYU pragma private; include "Fusion/SimulationMessage.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationMessage_BuiltInFlags_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationMessage.ReferenceCountAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::ReferenceCountAdd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ReferenceCountAdd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.ReferenceCountSub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::ReferenceCountSub)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6004b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ReferenceCountSub", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)(::Fusion::PlayerRef)>(&::Fusion::SimulationMessage::SetTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6004bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetTarget", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.SetStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::SetStatic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.SetUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::SetUnreliable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetUnreliable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.SetNotTickAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::SetNotTickAligned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetNotTickAligned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.SetDummy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::SetDummy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6004c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetDummy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.GetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationMessage::*)(int32_t)>(&::Fusion::SimulationMessage::GetFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetFlag", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.IsTargeted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::IsTargeted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6004c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"IsTargeted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.get_IsUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::get_IsUnreliable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6004c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"get_IsUnreliable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessage* (*)(::Fusion::Simulation*, ::Fusion::SimulationMessage*)>(&::Fusion::SimulationMessage::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6004ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Clone", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Simulation*, ::by_ref<::Fusion::SimulationMessage*>)>(&::Fusion::SimulationMessage::Free)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6004edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessage*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::Fusion::SimulationMessage*)>(&::Fusion::SimulationMessage::GetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetData", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.GetRawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (*)(::Fusion::SimulationMessage*)>(&::Fusion::SimulationMessage::GetRawData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6005034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetRawData", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessage* (*)(::Fusion::Simulation*, int32_t)>(&::Fusion::SimulationMessage::Allocate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6004d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.CanAllocateUserPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Fusion::SimulationMessage::CanAllocateUserPayload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60050cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"CanAllocateUserPayload", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SimulationMessage::*)()>(&::Fusion::SimulationMessage::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60050d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::SimulationMessage>(),
                    {::i2c::class_of<::Fusion::SimulationMessage>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::SimulationMessage::*)(bool)>(&::Fusion::SimulationMessage::ToString)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x60050e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ToString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.DumpContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Fusion::SimulationMessage*)>(&::Fusion::SimulationMessage::DumpContents)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6005690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"DumpContents", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessage.Fusion_ILogDumpable_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessage::*)(::System::Text::StringBuilder*)>(&::Fusion::SimulationMessage::Fusion_ILogDumpable_Dump)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60058f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationMessage::__cordl_internal_get_Tick()  {
return this->___Tick;
}
constexpr int32_t const& Fusion::SimulationMessage::__cordl_internal_get_Tick() const {
return this->___Tick;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Tick(int32_t  value)  {
this->___Tick = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationMessage::__cordl_internal_get_Source()  {
return this->___Source;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationMessage::__cordl_internal_get_Source() const {
return this->___Source;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Source(::Fusion::PlayerRef  value)  {
this->___Source = value;
}
constexpr int32_t& Fusion::SimulationMessage::__cordl_internal_get_Capacity()  {
return this->___Capacity;
}
constexpr int32_t const& Fusion::SimulationMessage::__cordl_internal_get_Capacity() const {
return this->___Capacity;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Capacity(int32_t  value)  {
this->___Capacity = value;
}
constexpr int32_t& Fusion::SimulationMessage::__cordl_internal_get_Offset()  {
return this->___Offset;
}
constexpr int32_t const& Fusion::SimulationMessage::__cordl_internal_get_Offset() const {
return this->___Offset;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Offset(int32_t  value)  {
this->___Offset = value;
}
constexpr int32_t& Fusion::SimulationMessage::__cordl_internal_get_References()  {
return this->___References;
}
constexpr int32_t const& Fusion::SimulationMessage::__cordl_internal_get_References() const {
return this->___References;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_References(int32_t  value)  {
this->___References = value;
}
constexpr int32_t& Fusion::SimulationMessage::__cordl_internal_get_Flags()  {
return this->___Flags;
}
constexpr int32_t const& Fusion::SimulationMessage::__cordl_internal_get_Flags() const {
return this->___Flags;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Flags(int32_t  value)  {
this->___Flags = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationMessage::__cordl_internal_get_Target()  {
return this->___Target;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationMessage::__cordl_internal_get_Target() const {
return this->___Target;
}
constexpr void Fusion::SimulationMessage::__cordl_internal_set_Target(::Fusion::PlayerRef  value)  {
this->___Target = value;
}
inline void Fusion::SimulationMessage::ReferenceCountAdd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ReferenceCountAdd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::SimulationMessage::ReferenceCountSub()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ReferenceCountSub", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::SimulationMessage::SetTarget(::Fusion::PlayerRef  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetTarget", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void Fusion::SimulationMessage::SetStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::SimulationMessage::SetUnreliable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetUnreliable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::SimulationMessage::SetNotTickAligned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetNotTickAligned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::SimulationMessage::SetDummy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"SetDummy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::SimulationMessage::GetFlag(int32_t  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetFlag", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, flag);
}
inline bool Fusion::SimulationMessage::IsTargeted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"IsTargeted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::SimulationMessage::get_IsUnreliable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"get_IsUnreliable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::SimulationMessage* Fusion::SimulationMessage::Clone(::Fusion::Simulation*  sim, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Clone", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessage*>(nullptr, ___internal_method, sim, message);
}
inline void Fusion::SimulationMessage::Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationMessage*>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Free", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<::by_ref<::Fusion::SimulationMessage*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sim, message);
}
inline uint8_t* Fusion::SimulationMessage::GetData(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetData", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, message);
}
inline ::System::Span_1<uint8_t> Fusion::SimulationMessage::GetRawData(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"GetRawData", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(nullptr, ___internal_method, message);
}
inline ::Fusion::SimulationMessage* Fusion::SimulationMessage::Allocate(::Fusion::Simulation*  sim, int32_t  capacityInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Allocate", {}, {::i2c::type_of<::Fusion::Simulation*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessage*>(nullptr, ___internal_method, sim, capacityInBytes);
}
inline bool Fusion::SimulationMessage::CanAllocateUserPayload(int32_t  capacityInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"CanAllocateUserPayload", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, capacityInBytes);
}
inline ::StringW Fusion::SimulationMessage::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::SimulationMessage>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::SimulationMessage::ToString(bool  useBrackets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"ToString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, useBrackets);
}
inline ::StringW Fusion::SimulationMessage::DumpContents(::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"DumpContents", {}, {::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message);
}
inline void Fusion::SimulationMessage::Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessage>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr  Fusion::SimulationMessage::operator ::Fusion::ILogDumpable*()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* Fusion::SimulationMessage::i___Fusion__ILogDumpable()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Source", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "References", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Target", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessage::SimulationMessage(int32_t  Tick, ::Fusion::PlayerRef  Source, int32_t  Capacity, int32_t  Offset, int32_t  References, int32_t  Flags, ::Fusion::PlayerRef  Target) noexcept  {
this->Tick = Tick;
this->Source = Source;
this->Capacity = Capacity;
this->Offset = Offset;
this->References = References;
this->Flags = Flags;
this->Target = Target;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessage::SimulationMessage()   {
}
