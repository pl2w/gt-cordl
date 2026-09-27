#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_PageList.hpp"
#include "Fusion/zzzz__DynamicHeap_PageList_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Page_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::AddFirst)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f90630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::AddLast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f906c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*, ::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::AddBefore)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f90744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddBefore", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.MoveFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::MoveFirst)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f90868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.MoveLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::MoveLast)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f9093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"MoveLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*, ::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::AddAfter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f90974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddAfter", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.TryRemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DynamicHeap_PageList::*)(::by_ref<::GlobalNamespace::DynamicHeap_Page*>)>(&::GlobalNamespace::DynamicHeap_PageList::TryRemoveHead)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f90a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"TryRemoveHead", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DynamicHeap_Page*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DynamicHeap_Page* (::GlobalNamespace::DynamicHeap_PageList::*)()>(&::GlobalNamespace::DynamicHeap_PageList::RemoveHead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f90ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::Remove)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f908a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicHeap_PageList.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DynamicHeap_PageList::*)(::GlobalNamespace::DynamicHeap_Page*)>(&::GlobalNamespace::DynamicHeap_PageList::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f906a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicHeap_PageList::AddFirst(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_PageList::AddLast(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_PageList::AddBefore(::GlobalNamespace::DynamicHeap_Page*  before, ::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddBefore", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, before, item);
}
inline void GlobalNamespace::DynamicHeap_PageList::MoveFirst(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_PageList::MoveLast(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"MoveLast", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::DynamicHeap_PageList::AddAfter(::GlobalNamespace::DynamicHeap_Page*  after, ::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"AddAfter", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>(), ::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, after, item);
}
inline bool GlobalNamespace::DynamicHeap_PageList::TryRemoveHead(::by_ref<::GlobalNamespace::DynamicHeap_Page*>  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"TryRemoveHead", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DynamicHeap_Page*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, head);
}
inline ::GlobalNamespace::DynamicHeap_Page* GlobalNamespace::DynamicHeap_PageList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DynamicHeap_Page*>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicHeap_PageList::Remove(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool GlobalNamespace::DynamicHeap_PageList::Contains(::GlobalNamespace::DynamicHeap_Page*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicHeap_PageList>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::DynamicHeap_Page*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_PageList::DynamicHeap_PageList(int32_t  Count, ::GlobalNamespace::DynamicHeap_Page*  Head, ::GlobalNamespace::DynamicHeap_Page*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_PageList::DynamicHeap_PageList()   {
}
