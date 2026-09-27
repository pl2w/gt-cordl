#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedAI.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedAI_def.hpp"
#include "Pathfinding/zzzz__BlockManager_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__SingleNodeBlocker_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedAI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedAI::*)()>(&::Pathfinding::Examples::TurnBasedAI::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eed904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedAI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedAI::*)()>(&::Pathfinding::Examples::TurnBasedAI::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5eed91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(),
                    {::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedAI::*)()>(&::Pathfinding::Examples::TurnBasedAI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5eeda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_movementPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPoints;
}
constexpr int32_t const& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_movementPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPoints;
}
constexpr void Pathfinding::Examples::TurnBasedAI::__cordl_internal_set_movementPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementPoints = value;
}
constexpr ::UnityW<::Pathfinding::BlockManager>& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_blockManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockManager;
}
constexpr ::UnityW<::Pathfinding::BlockManager> const& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_blockManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockManager;
}
constexpr void Pathfinding::Examples::TurnBasedAI::__cordl_internal_set_blockManager(::UnityW<::Pathfinding::BlockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockManager = value;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_blocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_blocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr void Pathfinding::Examples::TurnBasedAI::__cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocker = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_targetNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_targetNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNode;
}
constexpr void Pathfinding::Examples::TurnBasedAI::__cordl_internal_set_targetNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetNode = value;
}
constexpr ::Pathfinding::BlockManager_TraversalProvider*& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_traversalProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversalProvider;
}
constexpr ::Pathfinding::BlockManager_TraversalProvider* const& Pathfinding::Examples::TurnBasedAI::__cordl_internal_get_traversalProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversalProvider;
}
constexpr void Pathfinding::Examples::TurnBasedAI::__cordl_internal_set_traversalProvider(::Pathfinding::BlockManager_TraversalProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traversalProvider = value;
}
inline void Pathfinding::Examples::TurnBasedAI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedAI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::TurnBasedAI* Pathfinding::Examples::TurnBasedAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedAI*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedAI::TurnBasedAI()   {
}
