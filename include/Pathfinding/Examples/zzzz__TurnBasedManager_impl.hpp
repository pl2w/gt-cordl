#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedManager.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedManager_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedManager_def.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedAI_def.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedManager_State_def.hpp"
#include "Pathfinding/Examples/zzzz__TurnBasedManager_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)()>(&::Pathfinding::Examples::TurnBasedManager::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ef5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)()>(&::Pathfinding::Examples::TurnBasedManager::Update)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ef55c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.HandleButtonUnderRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)(::UnityEngine::Ray)>(&::Pathfinding::Examples::TurnBasedManager::HandleButtonUnderRay)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ef573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"HandleButtonUnderRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.Select
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)(::Pathfinding::Examples::TurnBasedAI*)>(&::Pathfinding::Examples::TurnBasedManager::Select)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef5e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Select", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.MoveToNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::TurnBasedManager::*)(::Pathfinding::Examples::TurnBasedAI*, ::Pathfinding::GraphNode*)>(&::Pathfinding::Examples::TurnBasedManager::MoveToNode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ef5d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"MoveToNode", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.MoveAlongPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::Pathfinding::Examples::TurnBasedAI*, ::Pathfinding::ABPath*, float_t)>(&::Pathfinding::Examples::TurnBasedManager::MoveAlongPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ef5e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"MoveAlongPath", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>(), ::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.DestroyPossibleMoves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)()>(&::Pathfinding::Examples::TurnBasedManager::DestroyPossibleMoves)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ef5838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"DestroyPossibleMoves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager.GeneratePossibleMoves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)(::Pathfinding::Examples::TurnBasedAI*)>(&::Pathfinding::Examples::TurnBasedManager::GeneratePossibleMoves)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5ef59c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"GeneratePossibleMoves", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager::*)()>(&::Pathfinding::Examples::TurnBasedManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ef5f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_selected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_selected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_selected(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selected = value;
}
constexpr float_t& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_movementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr float_t const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_movementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSpeed;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_movementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_nodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_nodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePrefab;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_nodePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePrefab = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_possibleMoves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleMoves;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_possibleMoves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleMoves;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_possibleMoves(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possibleMoves = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_eventSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_eventSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventSystem;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventSystem = value;
}
constexpr ::GlobalNamespace::TurnBasedManager_State& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::TurnBasedManager_State const& Pathfinding::Examples::TurnBasedManager::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Pathfinding::Examples::TurnBasedManager::__cordl_internal_set_state(::GlobalNamespace::TurnBasedManager_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void Pathfinding::Examples::TurnBasedManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedManager::HandleButtonUnderRay(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"HandleButtonUnderRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ray);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T Pathfinding::Examples::TurnBasedManager::GetByRay(::UnityEngine::Ray  ray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                    {"GetByRay", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Ray>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, ray);
}
inline void Pathfinding::Examples::TurnBasedManager::Select(::Pathfinding::Examples::TurnBasedAI*  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"Select", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unit);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedManager::MoveToNode(::Pathfinding::Examples::TurnBasedAI*  unit, ::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"MoveToNode", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, unit, node);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedManager::MoveAlongPath(::Pathfinding::Examples::TurnBasedAI*  unit, ::Pathfinding::ABPath*  path, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"MoveAlongPath", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>(), ::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, unit, path, speed);
}
inline void Pathfinding::Examples::TurnBasedManager::DestroyPossibleMoves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"DestroyPossibleMoves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedManager::GeneratePossibleMoves(::Pathfinding::Examples::TurnBasedAI*  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {"GeneratePossibleMoves", {}, {::i2c::type_of<::Pathfinding::Examples::TurnBasedAI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unit);
}
inline void Pathfinding::Examples::TurnBasedManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::TurnBasedManager* Pathfinding::Examples::TurnBasedManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedManager*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedManager::TurnBasedManager()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)(int32_t)>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef5e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef6338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5ef633c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef6654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef6694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get_unit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get_unit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set_unit(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unit = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedManager>& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedManager> const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::TurnBasedManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::ABPath*& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get__path_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path_5__2;
}
constexpr ::Pathfinding::ABPath* const& Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_get__path_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path_5__2;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::__cordl_internal_set__path_5__2(::Pathfinding::ABPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path_5__2 = value;
}
inline void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13::TurnBasedManager__MoveToNode_d__13()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)(int32_t)>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef5ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef5f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5ef5f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef62f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::*)()>(&::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::ABPath*& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::ABPath* const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set_path(::Pathfinding::ABPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_unit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_unit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unit;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set_unit(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unit = value;
}
constexpr float_t& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__distanceAlongSegment_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceAlongSegment_5__2;
}
constexpr float_t const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__distanceAlongSegment_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceAlongSegment_5__2;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__distanceAlongSegment_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceAlongSegment_5__2 = value;
}
constexpr int32_t& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__i_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr int32_t const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__i_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__i_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__3 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p0_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p0_5__4;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p0_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p0_5__4;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__p0_5__4(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____p0_5__4 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p1_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p1_5__5;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p1_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p1_5__5;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__p1_5__5(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____p1_5__5 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p2_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p2_5__6;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p2_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p2_5__6;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__p2_5__6(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____p2_5__6 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p3_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p3_5__7;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__p3_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____p3_5__7;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__p3_5__7(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____p3_5__7 = value;
}
constexpr float_t& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__segmentLength_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentLength_5__8;
}
constexpr float_t const& Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_get__segmentLength_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segmentLength_5__8;
}
constexpr void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::__cordl_internal_set__segmentLength_5__8(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segmentLength_5__8 = value;
}
inline void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14::TurnBasedManager__MoveAlongPath_d__14()   {
}
