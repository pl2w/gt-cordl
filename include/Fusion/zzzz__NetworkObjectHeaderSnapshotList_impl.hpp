#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshotList.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshotList_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectHeaderSnapshotList::*)()>(&::Fusion::NetworkObjectHeaderSnapshotList::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.get_Oldest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectHeaderSnapshotList::*)()>(&::Fusion::NetworkObjectHeaderSnapshotList::get_Oldest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Oldest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.get_Latest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectHeaderSnapshotList::*)()>(&::Fusion::NetworkObjectHeaderSnapshotList::get_Latest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Latest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5faca28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::AddLast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5facb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*, ::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::AddBefore)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5facbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*, ::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::AddAfter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5facd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.RemoveOldest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectHeaderSnapshotList::*)()>(&::Fusion::NetworkObjectHeaderSnapshotList::RemoveOldest)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5face5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"RemoveOldest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.RemoveLatest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectHeaderSnapshot* (::Fusion::NetworkObjectHeaderSnapshotList::*)()>(&::Fusion::NetworkObjectHeaderSnapshotList::RemoveLatest)> {
  constexpr static std::size_t size = 0x8d4;
  constexpr static std::size_t addrs = 0x5facfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"RemoveLatest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5facedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeaderSnapshotList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectHeaderSnapshotList::*)(::Fusion::NetworkObjectHeaderSnapshot*)>(&::Fusion::NetworkObjectHeaderSnapshotList::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5facae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::NetworkObjectHeaderSnapshotList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshotList::get_Oldest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Oldest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshotList::get_Latest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"get_Latest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectHeaderSnapshotList::AddFirst(::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::NetworkObjectHeaderSnapshotList::AddLast(::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void Fusion::NetworkObjectHeaderSnapshotList::AddBefore(::Fusion::NetworkObjectHeaderSnapshot*  before, ::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, before, item);
}
inline void Fusion::NetworkObjectHeaderSnapshotList::AddAfter(::Fusion::NetworkObjectHeaderSnapshot*  after, ::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, after, item);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshotList::RemoveOldest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"RemoveOldest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectHeaderSnapshot* Fusion::NetworkObjectHeaderSnapshotList::RemoveLatest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"RemoveLatest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectHeaderSnapshot*>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectHeaderSnapshotList::Remove(::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool Fusion::NetworkObjectHeaderSnapshotList::IsInList(::Fusion::NetworkObjectHeaderSnapshot*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeaderSnapshotList>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tail", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_head", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeaderSnapshotList::NetworkObjectHeaderSnapshotList(int32_t  _count, ::Fusion::NetworkObjectHeaderSnapshot*  _tail, ::Fusion::NetworkObjectHeaderSnapshot*  _head) noexcept  {
this->_count = _count;
this->_tail = _tail;
this->_head = _head;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderSnapshotList::NetworkObjectHeaderSnapshotList()   {
}
