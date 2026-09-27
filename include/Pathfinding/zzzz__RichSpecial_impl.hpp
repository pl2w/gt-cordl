#pragma once
// IWYU pragma private; include "Pathfinding/RichSpecial.hpp"
#include "Pathfinding/zzzz__RichPathPart_impl.hpp"
#include "Pathfinding/zzzz__RichSpecial_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NodeLink2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::RichSpecial.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichSpecial::*)()>(&::Pathfinding::RichSpecial::OnEnterPool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e4647c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichSpecial*>(),
                    {::i2c::class_of<::Pathfinding::RichSpecial*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichSpecial.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RichSpecial* (::Pathfinding::RichSpecial::*)(::Pathfinding::NodeLink2*, ::Pathfinding::GraphNode*)>(&::Pathfinding::RichSpecial::Initialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e43724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichSpecial*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::NodeLink2*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichSpecial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichSpecial::*)()>(&::Pathfinding::RichSpecial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e46488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichSpecial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::NodeLink2>& Pathfinding::RichSpecial::__cordl_internal_get_nodeLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLink;
}
constexpr ::UnityW<::Pathfinding::NodeLink2> const& Pathfinding::RichSpecial::__cordl_internal_get_nodeLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLink;
}
constexpr void Pathfinding::RichSpecial::__cordl_internal_set_nodeLink(::UnityW<::Pathfinding::NodeLink2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeLink = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::RichSpecial::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::RichSpecial::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
constexpr void Pathfinding::RichSpecial::__cordl_internal_set_first(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::RichSpecial::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::RichSpecial::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
constexpr void Pathfinding::RichSpecial::__cordl_internal_set_second(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
constexpr bool& Pathfinding::RichSpecial::__cordl_internal_get_reverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverse;
}
constexpr bool const& Pathfinding::RichSpecial::__cordl_internal_get_reverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverse;
}
constexpr void Pathfinding::RichSpecial::__cordl_internal_set_reverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverse = value;
}
inline void Pathfinding::RichSpecial::OnEnterPool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichSpecial*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichSpecial* Pathfinding::RichSpecial::Initialize(::Pathfinding::NodeLink2*  nodeLink, ::Pathfinding::GraphNode*  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichSpecial*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::NodeLink2*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RichSpecial*>(this, ___internal_method, nodeLink, first);
}
inline void Pathfinding::RichSpecial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichSpecial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichSpecial* Pathfinding::RichSpecial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichSpecial*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RichSpecial::RichSpecial()   {
}
