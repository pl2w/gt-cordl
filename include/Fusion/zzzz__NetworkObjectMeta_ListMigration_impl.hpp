#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMeta_ListMigration.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_ListMigration_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::Next)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcb68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"Next", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fcb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::AddLast)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fcb77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::AddBefore)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fcb830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*, ::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::AddAfter)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5fcb9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectMeta* (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)()>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::RemoveHead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fcbb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fcbba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectMeta_ListMigration.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkObjectMeta_ListMigration::*)(::Fusion::NetworkObjectMeta*)>(&::GlobalNamespace::NetworkObjectMeta_ListMigration::IsInList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fcb758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::NetworkObjectMeta* GlobalNamespace::NetworkObjectMeta_ListMigration::Next(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"Next", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(nullptr, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_ListMigration::AddFirst(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_ListMigration::AddLast(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline void GlobalNamespace::NetworkObjectMeta_ListMigration::AddBefore(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, before);
}
inline void GlobalNamespace::NetworkObjectMeta_ListMigration::AddAfter(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, after);
}
inline ::Fusion::NetworkObjectMeta* GlobalNamespace::NetworkObjectMeta_ListMigration::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectMeta*>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkObjectMeta_ListMigration::Remove(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
inline bool GlobalNamespace::NetworkObjectMeta_ListMigration::IsInList(::Fusion::NetworkObjectMeta*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectMeta_ListMigration>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration::NetworkObjectMeta_ListMigration(int32_t  Count, ::Fusion::NetworkObjectMeta*  Head, ::Fusion::NetworkObjectMeta*  Tail) noexcept  {
this->Count = Count;
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectMeta_ListMigration::NetworkObjectMeta_ListMigration()   {
}
