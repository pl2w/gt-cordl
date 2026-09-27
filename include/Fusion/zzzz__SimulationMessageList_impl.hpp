#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageList.hpp"
#include "Fusion/zzzz__SimulationMessageList_def.hpp"
#include "Fusion/zzzz__SimulationMessageEnvelope_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationMessageList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::AddFirst)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fdf44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::AddLast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdf4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::AddBefore)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fdf568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*, ::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::AddAfter)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fdf6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageEnvelope* (::Fusion::SimulationMessageList::*)()>(&::Fusion::SimulationMessageList::RemoveHead)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fdf820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::Remove)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fdf8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageEnvelope*)>(&::Fusion::SimulationMessageList::IsInList)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fdf4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationMessageList (::Fusion::SimulationMessageList::*)()>(&::Fusion::SimulationMessageList::RemoveAll)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fdf93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationMessageList.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationMessageList::*)(::Fusion::SimulationMessageList)>(&::Fusion::SimulationMessageList::Concat)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fdf960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationMessageList>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SimulationMessageList::AddFirst(::Fusion::SimulationMessageEnvelope*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::SimulationMessageList::AddLast(::Fusion::SimulationMessageEnvelope*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::SimulationMessageList::AddBefore(::Fusion::SimulationMessageEnvelope*  item, ::Fusion::SimulationMessageEnvelope*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, before);
}
inline void Fusion::SimulationMessageList::AddAfter(::Fusion::SimulationMessageEnvelope*  item, ::Fusion::SimulationMessageEnvelope*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>(), ::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, after);
}
inline ::Fusion::SimulationMessageEnvelope* Fusion::SimulationMessageList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageEnvelope*>(*this, ___internal_method);
}
inline void Fusion::SimulationMessageList::Remove(::Fusion::SimulationMessageEnvelope*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool Fusion::SimulationMessageList::IsInList(::Fusion::SimulationMessageEnvelope*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationMessageEnvelope*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
inline ::Fusion::SimulationMessageList Fusion::SimulationMessageList::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationMessageList>(*this, ___internal_method);
}
inline void Fusion::SimulationMessageList::Concat(::Fusion::SimulationMessageList  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationMessageList>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationMessageList>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageList::SimulationMessageList(int32_t  Count, ::Fusion::SimulationMessageEnvelope*  Head, ::Fusion::SimulationMessageEnvelope*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageList::SimulationMessageList()   {
}
