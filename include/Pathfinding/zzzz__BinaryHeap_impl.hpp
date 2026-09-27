#pragma once
// IWYU pragma private; include "Pathfinding/BinaryHeap.hpp"
#include "Pathfinding/zzzz__BinaryHeap_Tuple_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__BinaryHeap_def.hpp"
#include "Pathfinding/zzzz__BinaryHeap_Tuple_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::BinaryHeap.get_isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::get_isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e56818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"get_isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.RoundUpToNextMultipleMod1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Pathfinding::BinaryHeap::RoundUpToNextMultipleMod1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e56828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"RoundUpToNextMultipleMod1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)(int32_t)>(&::Pathfinding::BinaryHeap::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e56854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e568f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathNode* (::Pathfinding::BinaryHeap::*)(int32_t)>(&::Pathfinding::BinaryHeap::GetNode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e56950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.SetF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)(int32_t, uint32_t)>(&::Pathfinding::BinaryHeap::SetF)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e56980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"SetF", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::Expand)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5e569b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Expand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)(::Pathfinding::PathNode*)>(&::Pathfinding::BinaryHeap::Add)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e56b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.DecreaseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)(::GlobalNamespace::BinaryHeap_Tuple, uint16_t)>(&::Pathfinding::BinaryHeap::DecreaseKey)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e56ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"DecreaseKey", {}, {::i2c::type_of<::GlobalNamespace::BinaryHeap_Tuple>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathNode* (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::Remove)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5e56df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::Validate)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5e570c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BinaryHeap.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BinaryHeap::*)()>(&::Pathfinding::BinaryHeap::Rebuild)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e57358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Rebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::BinaryHeap::__cordl_internal_get_numberOfItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberOfItems;
}
constexpr int32_t const& Pathfinding::BinaryHeap::__cordl_internal_get_numberOfItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberOfItems;
}
constexpr void Pathfinding::BinaryHeap::__cordl_internal_set_numberOfItems(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numberOfItems = value;
}
constexpr float_t& Pathfinding::BinaryHeap::__cordl_internal_get_growthFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___growthFactor;
}
constexpr float_t const& Pathfinding::BinaryHeap::__cordl_internal_get_growthFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___growthFactor;
}
constexpr void Pathfinding::BinaryHeap::__cordl_internal_set_growthFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___growthFactor = value;
}
constexpr ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>& Pathfinding::BinaryHeap::__cordl_internal_get_heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr ::ArrayW<::GlobalNamespace::BinaryHeap_Tuple> const& Pathfinding::BinaryHeap::__cordl_internal_get_heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heap;
}
constexpr void Pathfinding::BinaryHeap::__cordl_internal_set_heap(::ArrayW<::GlobalNamespace::BinaryHeap_Tuple>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heap = value;
}
inline bool Pathfinding::BinaryHeap::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"get_isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::BinaryHeap::RoundUpToNextMultipleMod1(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"RoundUpToNextMultipleMod1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline void Pathfinding::BinaryHeap::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Pathfinding::BinaryHeap::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathNode* Pathfinding::BinaryHeap::GetNode(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathNode*>(this, ___internal_method, i);
}
inline void Pathfinding::BinaryHeap::SetF(int32_t  i, uint32_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"SetF", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, f);
}
inline void Pathfinding::BinaryHeap::Expand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Expand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BinaryHeap::Add(::Pathfinding::PathNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::PathNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::BinaryHeap::DecreaseKey(::GlobalNamespace::BinaryHeap_Tuple  node, uint16_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"DecreaseKey", {}, {::i2c::type_of<::GlobalNamespace::BinaryHeap_Tuple>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, index);
}
inline ::Pathfinding::PathNode* Pathfinding::BinaryHeap::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathNode*>(this, ___internal_method);
}
inline void Pathfinding::BinaryHeap::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BinaryHeap::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BinaryHeap*>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::BinaryHeap* Pathfinding::BinaryHeap::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BinaryHeap*>(capacity));
}
// Ctor Parameters []
constexpr ::Pathfinding::BinaryHeap::BinaryHeap()   {
}
