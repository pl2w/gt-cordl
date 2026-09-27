#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshAdd.hpp"
#include "Pathfinding/zzzz__NavmeshAdd_MeshType_impl.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavmeshAdd_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NavmeshAdd_MeshType_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.RequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::RequiresUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ea6854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::ForceUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ea694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ea6960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.NotifyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::NotifyUpdated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ea6a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.get_Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::get_Center)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ea6a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"get_Center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.RebuildMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::RebuildMesh)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ea6ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"RebuildMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Pathfinding::NavmeshAdd::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshAdd::GetBounds)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ea6d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)(::by_ref<::ArrayW<::Pathfinding::Int3>>, ::by_ref<::ArrayW<int32_t>>, ::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshAdd::GetMesh)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5ea6fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"GetMesh", {}, {::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshAdd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshAdd::*)()>(&::Pathfinding::NavmeshAdd::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ea734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NavmeshAdd_MeshType& Pathfinding::NavmeshAdd::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::NavmeshAdd_MeshType const& Pathfinding::NavmeshAdd::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_type(::GlobalNamespace::NavmeshAdd_MeshType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Pathfinding::NavmeshAdd::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Pathfinding::NavmeshAdd::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::NavmeshAdd::__cordl_internal_get_verts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::NavmeshAdd::__cordl_internal_get_verts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verts = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::NavmeshAdd::__cordl_internal_get_tris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::NavmeshAdd::__cordl_internal_get_tris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_tris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tris = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::NavmeshAdd::__cordl_internal_get_rectangleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectangleSize;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::NavmeshAdd::__cordl_internal_get_rectangleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectangleSize;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_rectangleSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectangleSize = value;
}
constexpr float_t& Pathfinding::NavmeshAdd::__cordl_internal_get_meshScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshScale;
}
constexpr float_t const& Pathfinding::NavmeshAdd::__cordl_internal_get_meshScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshScale;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_meshScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshScale = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshAdd::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshAdd::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr bool& Pathfinding::NavmeshAdd::__cordl_internal_get_useRotationAndScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationAndScale;
}
constexpr bool const& Pathfinding::NavmeshAdd::__cordl_internal_get_useRotationAndScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationAndScale;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_useRotationAndScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRotationAndScale = value;
}
constexpr float_t& Pathfinding::NavmeshAdd::__cordl_internal_get_updateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr float_t const& Pathfinding::NavmeshAdd::__cordl_internal_get_updateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_updateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDistance = value;
}
constexpr float_t& Pathfinding::NavmeshAdd::__cordl_internal_get_updateRotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotationDistance;
}
constexpr float_t const& Pathfinding::NavmeshAdd::__cordl_internal_get_updateRotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotationDistance;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_updateRotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateRotationDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::NavmeshAdd::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::NavmeshAdd::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshAdd::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshAdd::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::NavmeshAdd::__cordl_internal_get_lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::NavmeshAdd::__cordl_internal_get_lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr void Pathfinding::NavmeshAdd::__cordl_internal_set_lastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRotation = value;
}
inline void Pathfinding::NavmeshAdd::setStaticF_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmoColor", ::Pathfinding::NavmeshAdd*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NavmeshAdd::getStaticF_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmoColor", ::Pathfinding::NavmeshAdd*>();
}
inline bool Pathfinding::NavmeshAdd::RequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::NavmeshAdd::ForceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshAdd::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshAdd::NotifyUpdated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::NavmeshAdd::get_Center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"get_Center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::NavmeshAdd::RebuildMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"RebuildMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rect Pathfinding::NavmeshAdd::GetBounds(::Pathfinding::Util::GraphTransform*  inverseTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshAdd*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, inverseTransform);
}
inline void Pathfinding::NavmeshAdd::GetMesh(::by_ref<::ArrayW<::Pathfinding::Int3>>  vbuffer, ::by_ref<::ArrayW<int32_t>>  tbuffer, ::Pathfinding::Util::GraphTransform*  inverseTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {"GetMesh", {}, {::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vbuffer, tbuffer, inverseTransform);
}
inline void Pathfinding::NavmeshAdd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshAdd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshAdd* Pathfinding::NavmeshAdd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshAdd*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshAdd::NavmeshAdd()   {
}
