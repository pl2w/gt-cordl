#pragma once
// IWYU pragma private; include "Fusion/Allocator_BlockList.hpp"
#include "Fusion/zzzz__Allocator_BlockList_def.hpp"
#include "Fusion/zzzz__Allocator_Block_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)()>(&::GlobalNamespace::Allocator_BlockList::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6edc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Allocator_BlockList::*)()>(&::GlobalNamespace::Allocator_BlockList::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::AddFirst)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f6dab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"AddFirst", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::AddLast)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f6ee64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"AddLast", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.MoveFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::MoveFirst)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.MoveLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::MoveLast)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6ddc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"MoveLast", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Allocator_Block> (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>)>(&::GlobalNamespace::Allocator_BlockList::RemoveHead)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f6da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"RemoveHead", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::Remove)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f6e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"Remove", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>, ::by_ref<::GlobalNamespace::Allocator_Block>)>(&::GlobalNamespace::Allocator_BlockList::Contains)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f6dd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"Contains", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.DebugVerifyListIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_BlockList::*)(::by_ref<::Fusion::Allocator*>)>(&::GlobalNamespace::Allocator_BlockList::DebugVerifyListIntegrity)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f6f59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"DebugVerifyListIntegrity", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_BlockList.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Allocator_BlockList::*)()>(&::GlobalNamespace::Allocator_BlockList::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f6f67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Allocator_BlockList::__cordl_internal_get_Head()  {
return this->___Head;
}
constexpr int32_t const& GlobalNamespace::Allocator_BlockList::__cordl_internal_get_Head() const {
return this->___Head;
}
constexpr void GlobalNamespace::Allocator_BlockList::__cordl_internal_set_Head(int32_t  value)  {
this->___Head = value;
}
constexpr int32_t& GlobalNamespace::Allocator_BlockList::__cordl_internal_get_Tail()  {
return this->___Tail;
}
constexpr int32_t const& GlobalNamespace::Allocator_BlockList::__cordl_internal_get_Tail() const {
return this->___Tail;
}
constexpr void GlobalNamespace::Allocator_BlockList::__cordl_internal_set_Tail(int32_t  value)  {
this->___Tail = value;
}
inline void GlobalNamespace::Allocator_BlockList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::Allocator_BlockList::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::Allocator_BlockList::AddFirst(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"AddFirst", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, item);
}
inline void GlobalNamespace::Allocator_BlockList::AddLast(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"AddLast", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, item);
}
inline void GlobalNamespace::Allocator_BlockList::MoveFirst(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"MoveFirst", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, item);
}
inline void GlobalNamespace::Allocator_BlockList::MoveLast(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"MoveLast", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, item);
}
inline ::by_ref<::GlobalNamespace::Allocator_Block> GlobalNamespace::Allocator_BlockList::RemoveHead(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"RemoveHead", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Allocator_Block>>(*this, ___internal_method, a);
}
inline void GlobalNamespace::Allocator_BlockList::Remove(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"Remove", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, item);
}
inline bool GlobalNamespace::Allocator_BlockList::Contains(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"Contains", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Allocator_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, a, item);
}
inline void GlobalNamespace::Allocator_BlockList::DebugVerifyListIntegrity(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(),
                        {"DebugVerifyListIntegrity", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a);
}
inline ::StringW GlobalNamespace::Allocator_BlockList::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_BlockList>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator_BlockList::Allocator_BlockList(int32_t  Head, int32_t  Tail) noexcept  {
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator_BlockList::Allocator_BlockList()   {
}
