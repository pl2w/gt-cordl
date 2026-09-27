#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDelayedPacketList.hpp"
#include "Fusion/Sockets/zzzz__NetDelayedPacketList_def.hpp"
#include "Fusion/Sockets/zzzz__NetDelayedPacket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacketList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetDelayedPacketList::*)(::Fusion::Sockets::NetDelayedPacket*)>(&::Fusion::Sockets::NetDelayedPacketList::AddLast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x602b7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacketList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetDelayedPacket* (::Fusion::Sockets::NetDelayedPacketList::*)()>(&::Fusion::Sockets::NetDelayedPacketList::RemoveHead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x602b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacketList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetDelayedPacketList::*)(::Fusion::Sockets::NetDelayedPacket*)>(&::Fusion::Sockets::NetDelayedPacketList::Remove)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x602b900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacketList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetDelayedPacketList::*)(::Fusion::Sockets::NetDelayedPacket*)>(&::Fusion::Sockets::NetDelayedPacketList::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x602b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetDelayedPacketList.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetDelayedPacketList::*)()>(&::Fusion::Sockets::NetDelayedPacketList::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x602b998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetDelayedPacketList::AddLast(::Fusion::Sockets::NetDelayedPacket*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline ::Fusion::Sockets::NetDelayedPacket* Fusion::Sockets::NetDelayedPacketList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetDelayedPacket*>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetDelayedPacketList::Remove(::Fusion::Sockets::NetDelayedPacket*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool Fusion::Sockets::NetDelayedPacketList::IsInList(::Fusion::Sockets::NetDelayedPacket*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::Sockets::NetDelayedPacket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
inline void Fusion::Sockets::NetDelayedPacketList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetDelayedPacketList>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetDelayedPacketList::NetDelayedPacketList(int32_t  Count, ::Fusion::Sockets::NetDelayedPacket*  Head, ::Fusion::Sockets::NetDelayedPacket*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetDelayedPacketList::NetDelayedPacketList()   {
}
