#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_BlockList.hpp"
#include "Fusion/zzzz__DynamicHeap_BlockList_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Block_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::AddFirst)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f8ff64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.MoveFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::MoveFirst)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f90004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.MoveLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::MoveLast)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f900d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"MoveLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::AddLast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f90110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*, ::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::AddBefore)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f9018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddBefore", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*, ::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::AddAfter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f902b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddAfter", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.TryRemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DynamicHeap_BlockList::*)(::by_ref<::GlobalNamespace::DynamicHeap_Block*>)>(&::GlobalNamespace::DynamicHeap_BlockList::TryRemoveHead)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f903d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"TryRemoveHead", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DynamicHeap_Block*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Block* (::GlobalNamespace::DynamicHeap_BlockList::*)()>(&::GlobalNamespace::DynamicHeap_BlockList::RemoveHead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f9040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::Remove)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f9003c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_BlockList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DynamicHeap_BlockList::*)(::GlobalNamespace::DynamicHeap_Block*)>(&::GlobalNamespace::DynamicHeap_BlockList::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f8ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"IsInList", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicHeap_BlockList::AddFirst(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_BlockList::MoveFirst(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_BlockList::MoveLast(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"MoveLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_BlockList::AddLast(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_BlockList::AddBefore(::GlobalNamespace::DynamicHeap_Block*  before, ::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddBefore", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, before, item);
}
inline void GlobalNamespace::DynamicHeap_BlockList::AddAfter(::GlobalNamespace::DynamicHeap_Block*  after, ::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"AddAfter", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, after, item);
}
inline bool GlobalNamespace::DynamicHeap_BlockList::TryRemoveHead(::by_ref<::GlobalNamespace::DynamicHeap_Block*>  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"TryRemoveHead", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DynamicHeap_Block*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, head);
}
inline ::GlobalNamespace::DynamicHeap_Block* GlobalNamespace::DynamicHeap_BlockList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Block*>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicHeap_BlockList::Remove(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool GlobalNamespace::DynamicHeap_BlockList::IsInList(::GlobalNamespace::DynamicHeap_Block*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_BlockList>(),
                        {"IsInList", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Block*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_BlockList::DynamicHeap_BlockList(int32_t  Count, ::GlobalNamespace::DynamicHeap_Block*  Head, ::GlobalNamespace::DynamicHeap_Block*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_BlockList::DynamicHeap_BlockList()   {
}
