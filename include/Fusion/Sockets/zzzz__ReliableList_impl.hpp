#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableList.hpp"
#include "Fusion/Sockets/zzzz__ReliableList_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableHeader_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&::Fusion::Sockets::ReliableList::AddFirst)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6033b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&::Fusion::Sockets::ReliableList::AddLast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6033ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::ReliableHeader* (::Fusion::Sockets::ReliableList::*)()>(&::Fusion::Sockets::ReliableList::RemoveHead)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6033c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&::Fusion::Sockets::ReliableList::Remove)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60337e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::ReliableList::*)(::Fusion::Sockets::ReliableHeader*)>(&::Fusion::Sockets::ReliableList::IsInList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6033bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableList.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableList::*)()>(&::Fusion::Sockets::ReliableList::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6033688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::ReliableList::AddFirst(::Fusion::Sockets::ReliableHeader*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::Sockets::ReliableList::AddLast(::Fusion::Sockets::ReliableHeader*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline ::Fusion::Sockets::ReliableHeader* Fusion::Sockets::ReliableList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::ReliableHeader*>(*this, ___internal_method);
}
inline void Fusion::Sockets::ReliableList::Remove(::Fusion::Sockets::ReliableHeader*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool Fusion::Sockets::ReliableList::IsInList(::Fusion::Sockets::ReliableHeader*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::Sockets::ReliableHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
inline void Fusion::Sockets::ReliableList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableList>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::ReliableList::ReliableList(int32_t  Count, ::Fusion::Sockets::ReliableHeader*  Head, ::Fusion::Sockets::ReliableHeader*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::ReliableList::ReliableList()   {
}
