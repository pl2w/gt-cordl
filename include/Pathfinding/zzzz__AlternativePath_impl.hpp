#pragma once
// IWYU pragma private; include "Pathfinding/AlternativePath.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "Pathfinding/zzzz__AlternativePath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Pathfinding::AlternativePath.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AlternativePath::*)()>(&::Pathfinding::AlternativePath::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea07c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                    {::i2c::class_of<::Pathfinding::AlternativePath*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)(::Pathfinding::Path*)>(&::Pathfinding::AlternativePath::Apply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ea07d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                    {::i2c::class_of<::Pathfinding::AlternativePath*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)()>(&::Pathfinding::AlternativePath::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ea0a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath.ClearOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)()>(&::Pathfinding::AlternativePath::ClearOnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"ClearOnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath.InversePrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)()>(&::Pathfinding::AlternativePath::InversePrevious)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5ea0a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"InversePrevious", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath.ApplyNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::AlternativePath::ApplyNow)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5ea0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"ApplyNow", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AlternativePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AlternativePath::*)()>(&::Pathfinding::AlternativePath::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ea0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AlternativePath::__cordl_internal_get_penalty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penalty;
}
constexpr int32_t const& Pathfinding::AlternativePath::__cordl_internal_get_penalty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penalty;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_penalty(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penalty = value;
}
constexpr int32_t& Pathfinding::AlternativePath::__cordl_internal_get_randomStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomStep;
}
constexpr int32_t const& Pathfinding::AlternativePath::__cordl_internal_get_randomStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomStep;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_randomStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomStep = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::AlternativePath::__cordl_internal_get_prevNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevNodes;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::AlternativePath::__cordl_internal_get_prevNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevNodes;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_prevNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevNodes = value;
}
constexpr int32_t& Pathfinding::AlternativePath::__cordl_internal_get_prevPenalty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPenalty;
}
constexpr int32_t const& Pathfinding::AlternativePath::__cordl_internal_get_prevPenalty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPenalty;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_prevPenalty(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPenalty = value;
}
constexpr ::System::Random*& Pathfinding::AlternativePath::__cordl_internal_get_rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr ::System::Random* const& Pathfinding::AlternativePath::__cordl_internal_get_rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_rnd(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnd = value;
}
constexpr bool& Pathfinding::AlternativePath::__cordl_internal_get_destroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyed;
}
constexpr bool const& Pathfinding::AlternativePath::__cordl_internal_get_destroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyed;
}
constexpr void Pathfinding::AlternativePath::__cordl_internal_set_destroyed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyed = value;
}
inline int32_t Pathfinding::AlternativePath::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AlternativePath*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::AlternativePath::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AlternativePath*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::AlternativePath::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AlternativePath::ClearOnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"ClearOnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AlternativePath::InversePrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"InversePrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AlternativePath::ApplyNow(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {"ApplyNow", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes);
}
inline void Pathfinding::AlternativePath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AlternativePath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AlternativePath* Pathfinding::AlternativePath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AlternativePath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AlternativePath::AlternativePath()   {
}
