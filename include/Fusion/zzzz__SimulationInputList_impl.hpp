#pragma once
// IWYU pragma private; include "Fusion/SimulationInputList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationInputList_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationInputList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fe0254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::AddLast)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fe0338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*, ::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::AddBefore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fe03e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*, ::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::AddAfter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fe057c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::SimulationInputList::*)()>(&::Fusion::SimulationInputList::RemoveHead)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fe0718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fe079c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationInputList::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInputList::IsInList)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fe030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInputList* (::Fusion::SimulationInputList::*)()>(&::Fusion::SimulationInputList::RemoveAll)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fe0888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)(::Fusion::SimulationInputList*)>(&::Fusion::SimulationInputList::Concat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5fe08bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationInputList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputList::*)()>(&::Fusion::SimulationInputList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe09fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationInputList::__cordl_internal_get_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr int32_t const& Fusion::SimulationInputList::__cordl_internal_get_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr void Fusion::SimulationInputList::__cordl_internal_set_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Count = value;
}
constexpr ::Fusion::SimulationInput*& Fusion::SimulationInputList::__cordl_internal_get_Head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr ::Fusion::SimulationInput* const& Fusion::SimulationInputList::__cordl_internal_get_Head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr void Fusion::SimulationInputList::__cordl_internal_set_Head(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Head = value;
}
constexpr ::Fusion::SimulationInput*& Fusion::SimulationInputList::__cordl_internal_get_Tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr ::Fusion::SimulationInput* const& Fusion::SimulationInputList::__cordl_internal_get_Tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr void Fusion::SimulationInputList::__cordl_internal_set_Tail(::Fusion::SimulationInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tail = value;
}
inline void Fusion::SimulationInputList::AddFirst(::Fusion::SimulationInput*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationInputList::AddLast(::Fusion::SimulationInput*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationInputList::AddBefore(::Fusion::SimulationInput*  item, ::Fusion::SimulationInput*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, before);
}
inline void Fusion::SimulationInputList::AddAfter(::Fusion::SimulationInput*  item, ::Fusion::SimulationInput*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::SimulationInput*>(), ::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, after);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInputList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method);
}
inline void Fusion::SimulationInputList::Remove(::Fusion::SimulationInput*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool Fusion::SimulationInputList::IsInList(::Fusion::SimulationInput*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Fusion::SimulationInputList* Fusion::SimulationInputList::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInputList*>(this, ___internal_method);
}
inline void Fusion::SimulationInputList::Concat(::Fusion::SimulationInputList*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationInputList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Fusion::SimulationInputList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationInputList* Fusion::SimulationInputList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationInputList*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInputList::SimulationInputList()   {
}
