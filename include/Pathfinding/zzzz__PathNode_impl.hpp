#pragma once
// IWYU pragma private; include "Pathfinding/PathNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathNode.get_cost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_cost)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_cost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.set_cost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(uint32_t)>(&::Pathfinding::PathNode::set_cost)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e6abf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_cost", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.get_flag1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_flag1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6ac04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_flag1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.set_flag1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(bool)>(&::Pathfinding::PathNode::set_flag1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e6ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_flag1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.get_flag2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_flag2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6ac3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_flag2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.set_flag2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(bool)>(&::Pathfinding::PathNode::set_flag2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e6ac48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_flag2", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.get_G
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_G", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.set_G
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(uint32_t)>(&::Pathfinding::PathNode::set_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ac7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_G", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.get_H
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_H)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ac84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_H", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.set_H
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(uint32_t)>(&::Pathfinding::PathNode::set_H)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ac8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_H", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.get_F
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::get_F)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6ac94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_F", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode.UpdateG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)(::Pathfinding::Path*)>(&::Pathfinding::PathNode::UpdateG)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e67de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"UpdateG", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathNode::*)()>(&::Pathfinding::PathNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::PathNode::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::PathNode::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::PathNode::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::PathNode::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_parent(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr uint16_t& Pathfinding::PathNode::__cordl_internal_get_pathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathID;
}
constexpr uint16_t const& Pathfinding::PathNode::__cordl_internal_get_pathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathID;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_pathID(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathID = value;
}
constexpr uint16_t& Pathfinding::PathNode::__cordl_internal_get_heapIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heapIndex;
}
constexpr uint16_t const& Pathfinding::PathNode::__cordl_internal_get_heapIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heapIndex;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_heapIndex(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heapIndex = value;
}
constexpr uint32_t& Pathfinding::PathNode::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr uint32_t const& Pathfinding::PathNode::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_flags(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr uint32_t& Pathfinding::PathNode::__cordl_internal_get_g()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___g;
}
constexpr uint32_t const& Pathfinding::PathNode::__cordl_internal_get_g() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___g;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_g(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___g = value;
}
constexpr uint32_t& Pathfinding::PathNode::__cordl_internal_get_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr uint32_t const& Pathfinding::PathNode::__cordl_internal_get_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___h;
}
constexpr void Pathfinding::PathNode::__cordl_internal_set_h(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___h = value;
}
inline uint32_t Pathfinding::PathNode::get_cost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_cost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::PathNode::set_cost(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_cost", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::PathNode::get_flag1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_flag1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::PathNode::set_flag1(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_flag1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::PathNode::get_flag2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_flag2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::PathNode::set_flag2(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_flag2", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::PathNode::get_G()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_G", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::PathNode::set_G(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_G", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::PathNode::get_H()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_H", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::PathNode::set_H(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"set_H", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::PathNode::get_F()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"get_F", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::PathNode::UpdateG(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {"UpdateG", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::PathNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathNode* Pathfinding::PathNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathNode*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::PathNode::PathNode()   {
}
