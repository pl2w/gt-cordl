#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshClamp.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavmeshClamp_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshClamp.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClamp::*)()>(&::Pathfinding::NavmeshClamp::LateUpdate)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5e6ae84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClamp*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClamp::*)()>(&::Pathfinding::NavmeshClamp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6b2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::NavmeshClamp::__cordl_internal_get_prevNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::NavmeshClamp::__cordl_internal_get_prevNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevNode;
}
constexpr void Pathfinding::NavmeshClamp::__cordl_internal_set_prevNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevNode = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshClamp::__cordl_internal_get_prevPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshClamp::__cordl_internal_get_prevPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPos;
}
constexpr void Pathfinding::NavmeshClamp::__cordl_internal_set_prevPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPos = value;
}
inline void Pathfinding::NavmeshClamp::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClamp*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshClamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshClamp* Pathfinding::NavmeshClamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshClamp*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshClamp::NavmeshClamp()   {
}
