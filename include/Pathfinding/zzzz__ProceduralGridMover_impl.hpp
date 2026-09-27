#pragma once
// IWYU pragma private; include "Pathfinding/ProceduralGridMover.hpp"
#include "Pathfinding/zzzz__GridNodeBase_impl.hpp"
#include "Pathfinding/zzzz__Int2_impl.hpp"
#include "Pathfinding/zzzz__IntRect_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__ProceduralGridMover_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "Pathfinding/zzzz__ProceduralGridMover_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.get_updatingGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::get_updatingGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eba190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"get_updatingGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.set_updatingGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover::*)(bool)>(&::Pathfinding::ProceduralGridMover::set_updatingGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eba198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"set_updatingGraph", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::Start)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5eba1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5eba6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.PointToGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::ProceduralGridMover::*)(::UnityEngine::Vector3)>(&::Pathfinding::ProceduralGridMover::PointToGraphSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5eba754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"PointToGraphSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.UpdateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::UpdateGraph)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5eba570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"UpdateGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover.UpdateGraphCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::UpdateGraphCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5eba780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"UpdateGraphCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover::*)()>(&::Pathfinding::ProceduralGridMover::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5eba814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::ProceduralGridMover::__cordl_internal_get_updateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr float_t const& Pathfinding::ProceduralGridMover::__cordl_internal_get_updateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set_updateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::ProceduralGridMover::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::ProceduralGridMover::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& Pathfinding::ProceduralGridMover::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& Pathfinding::ProceduralGridMover::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set_buffer(::ArrayW<::Pathfinding::GridNodeBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr bool& Pathfinding::ProceduralGridMover::__cordl_internal_get__updatingGraph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatingGraph_k__BackingField;
}
constexpr bool const& Pathfinding::ProceduralGridMover::__cordl_internal_get__updatingGraph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatingGraph_k__BackingField;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set__updatingGraph_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updatingGraph_k__BackingField = value;
}
constexpr ::Pathfinding::GridGraph*& Pathfinding::ProceduralGridMover::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::GridGraph* const& Pathfinding::ProceduralGridMover::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set_graph(::Pathfinding::GridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover::__cordl_internal_get_graphIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover::__cordl_internal_get_graphIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr void Pathfinding::ProceduralGridMover::__cordl_internal_set_graphIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndex = value;
}
inline bool Pathfinding::ProceduralGridMover::get_updatingGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"get_updatingGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ProceduralGridMover::set_updatingGraph(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"set_updatingGraph", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::ProceduralGridMover::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ProceduralGridMover::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::ProceduralGridMover::PointToGraphSpace(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"PointToGraphSpace", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline void Pathfinding::ProceduralGridMover::UpdateGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"UpdateGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::ProceduralGridMover::UpdateGraphCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {"UpdateGraphCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::ProceduralGridMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ProceduralGridMover* Pathfinding::ProceduralGridMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ProceduralGridMover*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ProceduralGridMover::ProceduralGridMover()   {
}
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)(int32_t)>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5eba7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)()>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eba9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)()>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0x5eba9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)()>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebb7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)()>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ebb7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::*)()>(&::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebb80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::ProceduralGridMover>& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::ProceduralGridMover> const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set___4__this(::UnityW<::Pathfinding::ProceduralGridMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::Int2& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__offset_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset_5__2;
}
constexpr ::Pathfinding::Int2 const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__offset_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset_5__2;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__offset_5__2(::Pathfinding::Int2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset_5__2 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__width_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_5__3;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__width_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width_5__3;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__width_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width_5__3 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__depth_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depth_5__4;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__depth_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depth_5__4;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__depth_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depth_5__4 = value;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__nodes_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes_5__5;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__nodes_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes_5__5;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__nodes_5__5(::ArrayW<::Pathfinding::GridNodeBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodes_5__5 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__layers_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layers_5__6;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__layers_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layers_5__6;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__layers_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layers_5__6 = value;
}
constexpr ::Pathfinding::IntRect& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__recalculateRect_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recalculateRect_5__7;
}
constexpr ::Pathfinding::IntRect const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__recalculateRect_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recalculateRect_5__7;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__recalculateRect_5__7(::Pathfinding::IntRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recalculateRect_5__7 = value;
}
constexpr ::Pathfinding::IntRect& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__connectionRect_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionRect_5__8;
}
constexpr ::Pathfinding::IntRect const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__connectionRect_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionRect_5__8;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__connectionRect_5__8(::Pathfinding::IntRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionRect_5__8 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__yieldEvery_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yieldEvery_5__9;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__yieldEvery_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yieldEvery_5__9;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__yieldEvery_5__9(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____yieldEvery_5__9 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__counter_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter_5__10;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__counter_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter_5__10;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__counter_5__10(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counter_5__10 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__l_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____l_5__11;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__l_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____l_5__11;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__l_5__11(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____l_5__11 = value;
}
constexpr int32_t& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__layerOffset_5__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerOffset_5__12;
}
constexpr int32_t const& Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_get__layerOffset_5__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerOffset_5__12;
}
constexpr void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::__cordl_internal_set__layerOffset_5__12(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerOffset_5__12 = value;
}
inline void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13::ProceduralGridMover__UpdateGraphCoroutine_d__13()   {
}
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ProceduralGridMover___c__DisplayClass12_0::*)()>(&::Pathfinding::ProceduralGridMover___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eba778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0._UpdateGraph_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ProceduralGridMover___c__DisplayClass12_0::*)(::Pathfinding::IWorkItemContext*, bool)>(&::Pathfinding::ProceduralGridMover___c__DisplayClass12_0::_UpdateGraph_b__0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5eba824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*>(),
                        {"<UpdateGraph>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_get_ie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ie;
}
constexpr ::System::Collections::IEnumerator* const& Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_get_ie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ie;
}
constexpr void Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_set_ie(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ie = value;
}
constexpr ::UnityW<::Pathfinding::ProceduralGridMover>& Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::ProceduralGridMover> const& Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::ProceduralGridMover___c__DisplayClass12_0::__cordl_internal_set___4__this(::UnityW<::Pathfinding::ProceduralGridMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::ProceduralGridMover___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ProceduralGridMover___c__DisplayClass12_0::_UpdateGraph_b__0(::Pathfinding::IWorkItemContext*  context, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*>(),
                        {"<UpdateGraph>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, force);
}
inline ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0* Pathfinding::ProceduralGridMover___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0::ProceduralGridMover___c__DisplayClass12_0()   {
}
