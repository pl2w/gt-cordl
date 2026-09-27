#pragma once
// IWYU pragma private; include "Pathfinding/StartEndModifier.hpp"
#include "Pathfinding/zzzz__PathModifier_impl.hpp"
#include "Pathfinding/zzzz__StartEndModifier_Exactness_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Pathfinding/zzzz__StartEndModifier_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__StartEndModifier_Exactness_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::StartEndModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::StartEndModifier::*)()>(&::Pathfinding::StartEndModifier::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea5e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                    {::i2c::class_of<::Pathfinding::StartEndModifier*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::StartEndModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::StartEndModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::StartEndModifier::Apply)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ea5e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                    {::i2c::class_of<::Pathfinding::StartEndModifier*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::StartEndModifier.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::StartEndModifier::*)(::Pathfinding::ABPath*, ::GlobalNamespace::StartEndModifier_Exactness, bool, ::by_ref<bool>, ::by_ref<int32_t>)>(&::Pathfinding::StartEndModifier::Snap)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5ea614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {"Snap", {}, {::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<::GlobalNamespace::StartEndModifier_Exactness>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::StartEndModifier.GetClampedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::StartEndModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*)>(&::Pathfinding::StartEndModifier::GetClampedPoint)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ea6648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {"GetClampedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::StartEndModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::StartEndModifier::*)()>(&::Pathfinding::StartEndModifier::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ea6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::StartEndModifier::__cordl_internal_get_addPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addPoints;
}
constexpr bool const& Pathfinding::StartEndModifier::__cordl_internal_get_addPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addPoints;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_addPoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addPoints = value;
}
constexpr ::GlobalNamespace::StartEndModifier_Exactness& Pathfinding::StartEndModifier::__cordl_internal_get_exactStartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactStartPoint;
}
constexpr ::GlobalNamespace::StartEndModifier_Exactness const& Pathfinding::StartEndModifier::__cordl_internal_get_exactStartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactStartPoint;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_exactStartPoint(::GlobalNamespace::StartEndModifier_Exactness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactStartPoint = value;
}
constexpr ::GlobalNamespace::StartEndModifier_Exactness& Pathfinding::StartEndModifier::__cordl_internal_get_exactEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactEndPoint;
}
constexpr ::GlobalNamespace::StartEndModifier_Exactness const& Pathfinding::StartEndModifier::__cordl_internal_get_exactEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactEndPoint;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_exactEndPoint(::GlobalNamespace::StartEndModifier_Exactness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactEndPoint = value;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>*& Pathfinding::StartEndModifier::__cordl_internal_get_adjustStartPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustStartPoint;
}
constexpr ::System::Func_1<::UnityEngine::Vector3>* const& Pathfinding::StartEndModifier::__cordl_internal_get_adjustStartPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustStartPoint;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_adjustStartPoint(::System::Func_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustStartPoint = value;
}
constexpr bool& Pathfinding::StartEndModifier::__cordl_internal_get_useRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasting;
}
constexpr bool const& Pathfinding::StartEndModifier::__cordl_internal_get_useRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasting;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_useRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRaycasting = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::StartEndModifier::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::StartEndModifier::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr bool& Pathfinding::StartEndModifier::__cordl_internal_get_useGraphRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGraphRaycasting;
}
constexpr bool const& Pathfinding::StartEndModifier::__cordl_internal_get_useGraphRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGraphRaycasting;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_useGraphRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGraphRaycasting = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::StartEndModifier::__cordl_internal_get_connectionBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionBuffer;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::StartEndModifier::__cordl_internal_get_connectionBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionBuffer;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_connectionBuffer(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionBuffer = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& Pathfinding::StartEndModifier::__cordl_internal_get_connectionBufferAddDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionBufferAddDelegate;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& Pathfinding::StartEndModifier::__cordl_internal_get_connectionBufferAddDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionBufferAddDelegate;
}
constexpr void Pathfinding::StartEndModifier::__cordl_internal_set_connectionBufferAddDelegate(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionBufferAddDelegate = value;
}
inline int32_t Pathfinding::StartEndModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::StartEndModifier*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::StartEndModifier::Apply(::Pathfinding::Path*  _p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::StartEndModifier*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p);
}
inline ::UnityEngine::Vector3 Pathfinding::StartEndModifier::Snap(::Pathfinding::ABPath*  path, ::GlobalNamespace::StartEndModifier_Exactness  mode, bool  start, ::by_ref<bool>  forceAddPoint, ::by_ref<int32_t>  closestConnectionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {"Snap", {}, {::i2c::type_of<::Pathfinding::ABPath*>(), ::i2c::type_of<::GlobalNamespace::StartEndModifier_Exactness>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, path, mode, start, forceAddPoint, closestConnectionIndex);
}
inline ::UnityEngine::Vector3 Pathfinding::StartEndModifier::GetClampedPoint(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {"GetClampedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, from, to, hint);
}
inline void Pathfinding::StartEndModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::StartEndModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::StartEndModifier* Pathfinding::StartEndModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::StartEndModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::StartEndModifier::StartEndModifier()   {
}
