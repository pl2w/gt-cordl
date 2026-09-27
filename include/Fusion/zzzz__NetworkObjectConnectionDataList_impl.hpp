#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionDataList.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataList_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionData_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fdfa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::AddLast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fdfb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*, ::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::AddBefore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fdfc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*, ::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::AddAfter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fdfda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectConnectionData* (::Fusion::NetworkObjectConnectionDataList::*)()>(&::Fusion::NetworkObjectConnectionDataList::RemoveHead)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fdff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fdffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectConnectionDataList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectConnectionDataList::IsInList)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fdfb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectConnectionDataList (::Fusion::NetworkObjectConnectionDataList::*)()>(&::Fusion::NetworkObjectConnectionDataList::RemoveAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fe00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionDataList.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionDataList::*)(::by_ref<::Fusion::NetworkObjectConnectionDataList>)>(&::Fusion::NetworkObjectConnectionDataList::Concat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5fe0114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"Concat", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionDataList>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectConnectionDataList::AddFirst(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::NetworkObjectConnectionDataList::AddLast(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::NetworkObjectConnectionDataList::AddBefore(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectConnectionData*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, before);
}
inline void Fusion::NetworkObjectConnectionDataList::AddAfter(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectConnectionData*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, after);
}
inline ::Fusion::NetworkObjectConnectionData* Fusion::NetworkObjectConnectionDataList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectConnectionData*>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectConnectionDataList::Remove(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool Fusion::NetworkObjectConnectionDataList::IsInList(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
inline ::Fusion::NetworkObjectConnectionDataList Fusion::NetworkObjectConnectionDataList::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectConnectionDataList>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectConnectionDataList::Concat(::by_ref<::Fusion::NetworkObjectConnectionDataList>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionDataList>(),
                        {"Concat", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkObjectConnectionDataList>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::NetworkObjectConnectionData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::NetworkObjectConnectionData*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectConnectionDataList::NetworkObjectConnectionDataList(int32_t  Count, ::Fusion::NetworkObjectConnectionData*  Head, ::Fusion::NetworkObjectConnectionData*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectConnectionDataList::NetworkObjectConnectionDataList()   {
}
