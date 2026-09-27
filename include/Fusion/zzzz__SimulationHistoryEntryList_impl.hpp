#pragma once
// IWYU pragma private; include "Fusion/SimulationHistoryEntryList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationHistoryEntryList_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.AddFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::AddFirst)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fe0a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.AddLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::AddLast)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fe0ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.AddBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*, ::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::AddBefore)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fe0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>(), ::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.AddAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*, ::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::AddAfter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5fe0d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>(), ::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.RemoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::History_Simulation_Entry* (::Fusion::SimulationHistoryEntryList::*)()>(&::Fusion::SimulationHistoryEntryList::RemoveHead)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fe0ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"RemoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::Remove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fe0f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.IsInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::SimulationHistoryEntryList::*)(::Fusion::History_Simulation_Entry*)>(&::Fusion::SimulationHistoryEntryList::IsInList)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fe0abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationHistoryEntryList* (::Fusion::SimulationHistoryEntryList::*)()>(&::Fusion::SimulationHistoryEntryList::RemoveAll)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fe1048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)(::Fusion::SimulationHistoryEntryList*)>(&::Fusion::SimulationHistoryEntryList::Concat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5fe107c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationHistoryEntryList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationHistoryEntryList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationHistoryEntryList::*)()>(&::Fusion::SimulationHistoryEntryList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fe11bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr int32_t const& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr void Fusion::SimulationHistoryEntryList::__cordl_internal_set_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Count = value;
}
constexpr ::Fusion::History_Simulation_Entry*& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr ::Fusion::History_Simulation_Entry* const& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr void Fusion::SimulationHistoryEntryList::__cordl_internal_set_Head(::Fusion::History_Simulation_Entry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Head = value;
}
constexpr ::Fusion::History_Simulation_Entry*& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr ::Fusion::History_Simulation_Entry* const& Fusion::SimulationHistoryEntryList::__cordl_internal_get_Tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr void Fusion::SimulationHistoryEntryList::__cordl_internal_set_Tail(::Fusion::History_Simulation_Entry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tail = value;
}
inline void Fusion::SimulationHistoryEntryList::AddFirst(::Fusion::History_Simulation_Entry*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddFirst", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationHistoryEntryList::AddLast(::Fusion::History_Simulation_Entry*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddLast", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::SimulationHistoryEntryList::AddBefore(::Fusion::History_Simulation_Entry*  item, ::Fusion::History_Simulation_Entry*  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddBefore", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>(), ::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, before);
}
inline void Fusion::SimulationHistoryEntryList::AddAfter(::Fusion::History_Simulation_Entry*  item, ::Fusion::History_Simulation_Entry*  after)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"AddAfter", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>(), ::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, after);
}
inline ::Fusion::History_Simulation_Entry* Fusion::SimulationHistoryEntryList::RemoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"RemoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::History_Simulation_Entry*>(this, ___internal_method);
}
inline void Fusion::SimulationHistoryEntryList::Remove(::Fusion::History_Simulation_Entry*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool Fusion::SimulationHistoryEntryList::IsInList(::Fusion::History_Simulation_Entry*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"IsInList", {}, {::i2c::type_of<::Fusion::History_Simulation_Entry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Fusion::SimulationHistoryEntryList* Fusion::SimulationHistoryEntryList::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationHistoryEntryList*>(this, ___internal_method);
}
inline void Fusion::SimulationHistoryEntryList::Concat(::Fusion::SimulationHistoryEntryList*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {"Concat", {}, {::i2c::type_of<::Fusion::SimulationHistoryEntryList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Fusion::SimulationHistoryEntryList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationHistoryEntryList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationHistoryEntryList* Fusion::SimulationHistoryEntryList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationHistoryEntryList*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationHistoryEntryList::SimulationHistoryEntryList()   {
}
