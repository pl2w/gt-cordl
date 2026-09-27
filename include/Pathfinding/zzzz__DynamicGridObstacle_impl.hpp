#pragma once
// IWYU pragma private; include "Pathfinding/DynamicGridObstacle.hpp"
#include "Pathfinding/zzzz__GraphModifier_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Pathfinding/zzzz__DynamicGridObstacle_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.get_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::get_bounds)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5eb49b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"get_bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.get_colliderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::get_colliderEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5eb4ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"get_colliderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::Awake)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5eb4b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                    {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.OnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::OnPostScan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5eb4d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                    {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::Update)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5eb4e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::OnDisable)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5eb575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                    {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.DoUpdateGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::DoUpdateGraphs)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x5eb5284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"DoUpdateGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle.BoundsVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Bounds)>(&::Pathfinding::DynamicGridObstacle::BoundsVolume)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5eb58f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"BoundsVolume", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::DynamicGridObstacle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::DynamicGridObstacle::*)()>(&::Pathfinding::DynamicGridObstacle::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5eb5968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& Pathfinding::DynamicGridObstacle::__cordl_internal_get_coll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coll;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_coll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coll;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_coll(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coll = value;
}
constexpr ::UnityW<::UnityEngine::Collider2D>& Pathfinding::DynamicGridObstacle::__cordl_internal_get_coll2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coll2D;
}
constexpr ::UnityW<::UnityEngine::Collider2D> const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_coll2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coll2D;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_coll2D(::UnityW<::UnityEngine::Collider2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coll2D = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::DynamicGridObstacle::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr float_t& Pathfinding::DynamicGridObstacle::__cordl_internal_get_updateError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateError;
}
constexpr float_t const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_updateError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateError;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_updateError(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateError = value;
}
constexpr float_t& Pathfinding::DynamicGridObstacle::__cordl_internal_get_checkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr float_t const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_checkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_checkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkTime = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevBounds;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_prevBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevBounds = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRotation;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_prevRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevRotation = value;
}
constexpr bool& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevEnabled;
}
constexpr bool const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_prevEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevEnabled;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_prevEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevEnabled = value;
}
constexpr float_t& Pathfinding::DynamicGridObstacle::__cordl_internal_get_lastCheckTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckTime;
}
constexpr float_t const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_lastCheckTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheckTime;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_lastCheckTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheckTime = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*& Pathfinding::DynamicGridObstacle::__cordl_internal_get_pendingGraphUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingGraphUpdates;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>* const& Pathfinding::DynamicGridObstacle::__cordl_internal_get_pendingGraphUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingGraphUpdates;
}
constexpr void Pathfinding::DynamicGridObstacle::__cordl_internal_set_pendingGraphUpdates(::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingGraphUpdates = value;
}
inline ::UnityEngine::Bounds Pathfinding::DynamicGridObstacle::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"get_bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool Pathfinding::DynamicGridObstacle::get_colliderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"get_colliderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::DynamicGridObstacle::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::DynamicGridObstacle::OnPostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::DynamicGridObstacle::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::DynamicGridObstacle::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::DynamicGridObstacle::DoUpdateGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"DoUpdateGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Pathfinding::DynamicGridObstacle::BoundsVolume(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {"BoundsVolume", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, b);
}
inline void Pathfinding::DynamicGridObstacle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::DynamicGridObstacle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::DynamicGridObstacle* Pathfinding::DynamicGridObstacle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::DynamicGridObstacle*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::DynamicGridObstacle::DynamicGridObstacle()   {
}
