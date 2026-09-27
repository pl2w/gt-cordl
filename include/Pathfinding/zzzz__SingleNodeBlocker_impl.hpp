#pragma once
// IWYU pragma private; include "Pathfinding/SingleNodeBlocker.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__SingleNodeBlocker_def.hpp"
#include "Pathfinding/zzzz__BlockManager_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.get_lastBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::SingleNodeBlocker::*)()>(&::Pathfinding::SingleNodeBlocker::get_lastBlocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"get_lastBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.set_lastBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::SingleNodeBlocker::set_lastBlocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb3094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"set_lastBlocked", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.BlockAtCurrentPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)()>(&::Pathfinding::SingleNodeBlocker::BlockAtCurrentPosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5eb309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"BlockAtCurrentPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.BlockAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)(::UnityEngine::Vector3)>(&::Pathfinding::SingleNodeBlocker::BlockAt)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5eb30c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"BlockAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.Block
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::SingleNodeBlocker::Block)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5eb31e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"Block", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker.Unblock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)()>(&::Pathfinding::SingleNodeBlocker::Unblock)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5eb3190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"Unblock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SingleNodeBlocker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SingleNodeBlocker::*)()>(&::Pathfinding::SingleNodeBlocker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::SingleNodeBlocker::__cordl_internal_get__lastBlocked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBlocked_k__BackingField;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::SingleNodeBlocker::__cordl_internal_get__lastBlocked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBlocked_k__BackingField;
}
constexpr void Pathfinding::SingleNodeBlocker::__cordl_internal_set__lastBlocked_k__BackingField(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBlocked_k__BackingField = value;
}
constexpr ::UnityW<::Pathfinding::BlockManager>& Pathfinding::SingleNodeBlocker::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::Pathfinding::BlockManager> const& Pathfinding::SingleNodeBlocker::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void Pathfinding::SingleNodeBlocker::__cordl_internal_set_manager(::UnityW<::Pathfinding::BlockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
inline ::Pathfinding::GraphNode* Pathfinding::SingleNodeBlocker::get_lastBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"get_lastBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline void Pathfinding::SingleNodeBlocker::set_lastBlocked(::Pathfinding::GraphNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"set_lastBlocked", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::SingleNodeBlocker::BlockAtCurrentPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"BlockAtCurrentPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::SingleNodeBlocker::BlockAt(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"BlockAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void Pathfinding::SingleNodeBlocker::Block(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"Block", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::SingleNodeBlocker::Unblock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {"Unblock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::SingleNodeBlocker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SingleNodeBlocker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::SingleNodeBlocker* Pathfinding::SingleNodeBlocker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::SingleNodeBlocker*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::SingleNodeBlocker::SingleNodeBlocker()   {
}
