#pragma once
// IWYU pragma private; include "GlobalNamespace/GRGuide.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRGuide_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRGuide.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGuide::*)()>(&::GlobalNamespace::GRGuide::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x589c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGuide.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGuide::*)()>(&::GlobalNamespace::GRGuide::Tick)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x589c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                    {::i2c::class_of<::GlobalNamespace::GRGuide*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGuide.GetClosestPointOnPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::GRGuide::GetClosestPointOnPath)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x589c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"GetClosestPointOnPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGuide.ClosestPointOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRGuide::ClosestPointOnLine)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x589c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRGuide._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRGuide::*)()>(&::GlobalNamespace::GRGuide::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589cb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRGuide::__cordl_internal_get_tempTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRGuide::__cordl_internal_get_tempTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTarget;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_tempTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempTarget = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRGuide::__cordl_internal_get_show()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRGuide::__cordl_internal_get_show() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_show(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___show = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRGuide::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRGuide::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr bool& GlobalNamespace::GRGuide::__cordl_internal_get_showing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showing;
}
constexpr bool const& GlobalNamespace::GRGuide::__cordl_internal_get_showing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showing;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_showing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showing = value;
}
constexpr bool& GlobalNamespace::GRGuide::__cordl_internal_get_hasPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPath;
}
constexpr bool const& GlobalNamespace::GRGuide::__cordl_internal_get_hasPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPath;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_hasPath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPath = value;
}
constexpr ::UnityEngine::AI::NavMeshPath*& GlobalNamespace::GRGuide::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::UnityEngine::AI::NavMeshPath* const& GlobalNamespace::GRGuide::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr int32_t& GlobalNamespace::GRGuide::__cordl_internal_get_numPathCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPathCorners;
}
constexpr int32_t const& GlobalNamespace::GRGuide::__cordl_internal_get_numPathCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPathCorners;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_numPathCorners(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numPathCorners = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GRGuide::__cordl_internal_get_pathCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GRGuide::__cordl_internal_get_pathCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathCorners;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_pathCorners(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathCorners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::GRGuide::__cordl_internal_get_connectorCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorCorners;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::GRGuide::__cordl_internal_get_connectorCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorCorners;
}
constexpr void GlobalNamespace::GRGuide::__cordl_internal_set_connectorCorners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectorCorners = value;
}
inline void GlobalNamespace::GRGuide::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRGuide::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRGuide*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRGuide::GetClosestPointOnPath(::UnityEngine::Vector3  pos, ::ArrayW<::UnityEngine::Vector3>  pathCorners, int32_t  numPathCorners, ::by_ref<int32_t>  nextCorner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"GetClosestPointOnPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pos, pathCorners, numPathCorners, nextCorner);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRGuide::ClosestPointOnLine(::UnityEngine::Vector3  vA, ::UnityEngine::Vector3  vB, ::UnityEngine::Vector3  vPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vA, vB, vPoint);
}
inline void GlobalNamespace::GRGuide::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRGuide*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRGuide* GlobalNamespace::GRGuide::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRGuide*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRGuide::GRGuide()   {
}
