#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMeta_List.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_List_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::Next)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcaef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Next", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fcaf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::AddLast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fcafe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::AddBefore)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fcb098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::AddAfter)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fcb214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::GlobalNamespace::NetworkObjectMeta_List::*)()>(&::GlobalNamespace::NetworkObjectMeta_List::RemoveHead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fcb390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::Remove)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fcb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkObjectMeta_List::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_List::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fcafc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkObjectMeta_List (::GlobalNamespace::NetworkObjectMeta_List::*)()>(&::GlobalNamespace::NetworkObjectMeta_List::RemoveAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fcb4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_List.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_List::*)(::GlobalNamespace::NetworkObjectMeta_List)>(&::GlobalNamespace::NetworkObjectMeta_List::Concat)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fcb558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Concat", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectMeta_List>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::NetworkObjectMeta* GlobalNamespace::NetworkObjectMeta_List::Next(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Next", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(nullptr, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_List::AddFirst(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_List::AddLast(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_List::AddBefore(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, before);
}
inline void GlobalNamespace::NetworkObjectMeta_List::AddAfter(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, after);
}
inline ::Fusion::NetworkObjectMeta* GlobalNamespace::NetworkObjectMeta_List::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkObjectMeta_List::Remove(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool GlobalNamespace::NetworkObjectMeta_List::IsInList(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
inline ::GlobalNamespace::NetworkObjectMeta_List GlobalNamespace::NetworkObjectMeta_List::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkObjectMeta_List>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkObjectMeta_List::Concat(::GlobalNamespace::NetworkObjectMeta_List  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_List>(),
                        {"Concat", {}, {::i2c::type_of<::GlobalNamespace::NetworkObjectMeta_List>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectMeta_List::NetworkObjectMeta_List(int32_t  Count, ::Fusion::NetworkObjectMeta*  Head, ::Fusion::NetworkObjectMeta*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectMeta_List::NetworkObjectMeta_List()   {
}
