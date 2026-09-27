#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshCut.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_impl.hpp"
#include "Pathfinding/zzzz__NavmeshCut_MeshType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavmeshCut_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__NavmeshCut_MeshType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshCut.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ea7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ea7b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::ForceUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ea7b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.RequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::RequiresUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ea7ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.UsedForCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::UsedForCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea7c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.NotifyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::NotifyUpdated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ea7c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.CalculateMeshContour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::CalculateMeshContour)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x5ea7ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"CalculateMeshContour", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Pathfinding::NavmeshCut::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshCut::GetBounds)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5ea84cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.GetContour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*)>(&::Pathfinding::NavmeshCut::GetContour)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x5ea876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"GetContour", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.TransformBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::NavmeshCut::TransformBuffer)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ea8e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"TransformBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5ea8fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.GetY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::NavmeshCut::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshCut::GetY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ea9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"GetY", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5ea92bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshCut._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshCut::*)()>(&::Pathfinding::NavmeshCut::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ea9770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NavmeshCut_MeshType& Pathfinding::NavmeshCut::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::NavmeshCut_MeshType const& Pathfinding::NavmeshCut::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_type(::GlobalNamespace::NavmeshCut_MeshType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Pathfinding::NavmeshCut::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Pathfinding::NavmeshCut::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::NavmeshCut::__cordl_internal_get_rectangleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectangleSize;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::NavmeshCut::__cordl_internal_get_rectangleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectangleSize;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_rectangleSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectangleSize = value;
}
constexpr float_t& Pathfinding::NavmeshCut::__cordl_internal_get_circleRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleRadius;
}
constexpr float_t const& Pathfinding::NavmeshCut::__cordl_internal_get_circleRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleRadius;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_circleRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circleRadius = value;
}
constexpr int32_t& Pathfinding::NavmeshCut::__cordl_internal_get_circleResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleResolution;
}
constexpr int32_t const& Pathfinding::NavmeshCut::__cordl_internal_get_circleResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleResolution;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_circleResolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circleResolution = value;
}
constexpr float_t& Pathfinding::NavmeshCut::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::NavmeshCut::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& Pathfinding::NavmeshCut::__cordl_internal_get_meshScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshScale;
}
constexpr float_t const& Pathfinding::NavmeshCut::__cordl_internal_get_meshScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshScale;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_meshScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshScale = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshCut::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshCut::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr float_t& Pathfinding::NavmeshCut::__cordl_internal_get_updateDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr float_t const& Pathfinding::NavmeshCut::__cordl_internal_get_updateDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDistance;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_updateDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDistance = value;
}
constexpr bool& Pathfinding::NavmeshCut::__cordl_internal_get_isDual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDual;
}
constexpr bool const& Pathfinding::NavmeshCut::__cordl_internal_get_isDual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDual;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_isDual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDual = value;
}
constexpr bool& Pathfinding::NavmeshCut::__cordl_internal_get_cutsAddedGeom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutsAddedGeom;
}
constexpr bool const& Pathfinding::NavmeshCut::__cordl_internal_get_cutsAddedGeom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutsAddedGeom;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_cutsAddedGeom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutsAddedGeom = value;
}
constexpr float_t& Pathfinding::NavmeshCut::__cordl_internal_get_updateRotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotationDistance;
}
constexpr float_t const& Pathfinding::NavmeshCut::__cordl_internal_get_updateRotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotationDistance;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_updateRotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateRotationDistance = value;
}
constexpr bool& Pathfinding::NavmeshCut::__cordl_internal_get_useRotationAndScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationAndScale;
}
constexpr bool const& Pathfinding::NavmeshCut::__cordl_internal_get_useRotationAndScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotationAndScale;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_useRotationAndScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRotationAndScale = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector3>>& Pathfinding::NavmeshCut::__cordl_internal_get_contours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contours;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector3>> const& Pathfinding::NavmeshCut::__cordl_internal_get_contours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contours;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_contours(::ArrayW<::ArrayW<::UnityEngine::Vector3>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contours = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::NavmeshCut::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::NavmeshCut::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Pathfinding::NavmeshCut::__cordl_internal_get_lastMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Pathfinding::NavmeshCut::__cordl_internal_get_lastMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMesh;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_lastMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMesh = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NavmeshCut::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavmeshCut::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::NavmeshCut::__cordl_internal_get_lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::NavmeshCut::__cordl_internal_get_lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr void Pathfinding::NavmeshCut::__cordl_internal_set_lastRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRotation = value;
}
inline void Pathfinding::NavmeshCut::setStaticF_edges(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*, "edges", ::Pathfinding::NavmeshCut*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>* Pathfinding::NavmeshCut::getStaticF_edges()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*, "edges", ::Pathfinding::NavmeshCut*>();
}
inline void Pathfinding::NavmeshCut::setStaticF_pointers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pointers", ::Pathfinding::NavmeshCut*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* Pathfinding::NavmeshCut::getStaticF_pointers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "pointers", ::Pathfinding::NavmeshCut*>();
}
inline void Pathfinding::NavmeshCut::setStaticF_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmoColor", ::Pathfinding::NavmeshCut*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NavmeshCut::getStaticF_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmoColor", ::Pathfinding::NavmeshCut*>();
}
inline void Pathfinding::NavmeshCut::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::ForceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::NavmeshCut::RequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::UsedForCut()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::NotifyUpdated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::CalculateMeshContour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"CalculateMeshContour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rect Pathfinding::NavmeshCut::GetBounds(::Pathfinding::Util::GraphTransform*  inverseTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshCut*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, inverseTransform);
}
inline void Pathfinding::NavmeshCut::GetContour(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"GetContour", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Pathfinding::NavmeshCut::TransformBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, bool  reverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"TransformBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, reverse);
}
inline void Pathfinding::NavmeshCut::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Pathfinding::NavmeshCut::GetY(::Pathfinding::Util::GraphTransform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"GetY", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, transform);
}
inline void Pathfinding::NavmeshCut::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshCut::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshCut*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshCut* Pathfinding::NavmeshCut::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshCut*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshCut::NavmeshCut()   {
}
