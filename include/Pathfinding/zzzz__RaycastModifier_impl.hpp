#pragma once
// IWYU pragma private; include "Pathfinding/RaycastModifier.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "Pathfinding/zzzz__RaycastModifier_Quality_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RaycastModifier_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__RaycastModifier_Quality_def.hpp"
#include "Pathfinding/zzzz__RaycastModifier_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RaycastModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RaycastModifier::*)()>(&::Pathfinding::RaycastModifier::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea258c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                    {::i2c::class_of<::Pathfinding::RaycastModifier*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RaycastModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::RaycastModifier::Apply)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5ea2594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                    {::i2c::class_of<::Pathfinding::RaycastModifier*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier.ApplyGreedy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::RaycastModifier::*)(::Pathfinding::Path*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*, ::Pathfinding::NNConstraint*)>(&::Pathfinding::RaycastModifier::ApplyGreedy)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5ea3148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ApplyGreedy", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier.ApplyDP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::RaycastModifier::*)(::Pathfinding::Path*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*, ::Pathfinding::NNConstraint*)>(&::Pathfinding::RaycastModifier::ApplyDP)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x5ea3688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ApplyDP", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier.ValidateLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RaycastModifier::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Func_2<::Pathfinding::GraphNode*,bool>*, ::Pathfinding::NNConstraint*)>(&::Pathfinding::RaycastModifier::ValidateLine)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x5ea29f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ValidateLine", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RaycastModifier::*)()>(&::Pathfinding::RaycastModifier::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ea3e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::RaycastModifier::__cordl_internal_get_useRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasting;
}
constexpr bool const& Pathfinding::RaycastModifier::__cordl_internal_get_useRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRaycasting;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_useRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRaycasting = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::RaycastModifier::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::RaycastModifier::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr bool& Pathfinding::RaycastModifier::__cordl_internal_get_thickRaycast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr bool const& Pathfinding::RaycastModifier::__cordl_internal_get_thickRaycast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_thickRaycast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycast = value;
}
constexpr float_t& Pathfinding::RaycastModifier::__cordl_internal_get_thickRaycastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastRadius;
}
constexpr float_t const& Pathfinding::RaycastModifier::__cordl_internal_get_thickRaycastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastRadius;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_thickRaycastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycastRadius = value;
}
constexpr bool& Pathfinding::RaycastModifier::__cordl_internal_get_use2DPhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2DPhysics;
}
constexpr bool const& Pathfinding::RaycastModifier::__cordl_internal_get_use2DPhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2DPhysics;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_use2DPhysics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___use2DPhysics = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RaycastModifier::__cordl_internal_get_raycastOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastOffset;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RaycastModifier::__cordl_internal_get_raycastOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastOffset;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_raycastOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastOffset = value;
}
constexpr bool& Pathfinding::RaycastModifier::__cordl_internal_get_useGraphRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGraphRaycasting;
}
constexpr bool const& Pathfinding::RaycastModifier::__cordl_internal_get_useGraphRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGraphRaycasting;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_useGraphRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGraphRaycasting = value;
}
constexpr ::GlobalNamespace::RaycastModifier_Quality& Pathfinding::RaycastModifier::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::GlobalNamespace::RaycastModifier_Quality const& Pathfinding::RaycastModifier::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_quality(::GlobalNamespace::RaycastModifier_Quality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
constexpr ::Pathfinding::RaycastModifier_Filter*& Pathfinding::RaycastModifier::__cordl_internal_get_cachedFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedFilter;
}
constexpr ::Pathfinding::RaycastModifier_Filter* const& Pathfinding::RaycastModifier::__cordl_internal_get_cachedFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedFilter;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_cachedFilter(::Pathfinding::RaycastModifier_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedFilter = value;
}
constexpr ::Pathfinding::NNConstraint*& Pathfinding::RaycastModifier::__cordl_internal_get_cachedNNConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedNNConstraint;
}
constexpr ::Pathfinding::NNConstraint* const& Pathfinding::RaycastModifier::__cordl_internal_get_cachedNNConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedNNConstraint;
}
constexpr void Pathfinding::RaycastModifier::__cordl_internal_set_cachedNNConstraint(::Pathfinding::NNConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedNNConstraint = value;
}
inline void Pathfinding::RaycastModifier::setStaticF_iterationsByQuality(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "iterationsByQuality", ::Pathfinding::RaycastModifier*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::RaycastModifier::getStaticF_iterationsByQuality()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "iterationsByQuality", ::Pathfinding::RaycastModifier*>();
}
inline void Pathfinding::RaycastModifier::setStaticF_buffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "buffer", ::Pathfinding::RaycastModifier*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::RaycastModifier::getStaticF_buffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "buffer", ::Pathfinding::RaycastModifier*>();
}
inline void Pathfinding::RaycastModifier::setStaticF_DPCosts(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "DPCosts", ::Pathfinding::RaycastModifier*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Pathfinding::RaycastModifier::getStaticF_DPCosts()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "DPCosts", ::Pathfinding::RaycastModifier*>();
}
inline void Pathfinding::RaycastModifier::setStaticF_DPParents(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DPParents", ::Pathfinding::RaycastModifier*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::RaycastModifier::getStaticF_DPParents()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DPParents", ::Pathfinding::RaycastModifier*>();
}
inline int32_t Pathfinding::RaycastModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RaycastModifier*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::RaycastModifier::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RaycastModifier*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::RaycastModifier::ApplyGreedy(::Pathfinding::Path*  p, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ApplyGreedy", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, p, points, filter, nnConstraint);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::RaycastModifier::ApplyDP(::Pathfinding::Path*  p, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ApplyDP", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, p, points, filter, nnConstraint);
}
inline bool Pathfinding::RaycastModifier::ValidateLine(::Pathfinding::GraphNode*  n1, ::Pathfinding::GraphNode*  n2, ::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {"ValidateLine", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n1, n2, v1, v2, filter, nnConstraint);
}
inline void Pathfinding::RaycastModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RaycastModifier* Pathfinding::RaycastModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RaycastModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RaycastModifier::RaycastModifier()   {
}
//  Writing Method size for method: ::Pathfinding::RaycastModifier_Filter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RaycastModifier_Filter::*)()>(&::Pathfinding::RaycastModifier_Filter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ea3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier_Filter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RaycastModifier_Filter.CanTraverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RaycastModifier_Filter::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::RaycastModifier_Filter::CanTraverse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ea40f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier_Filter*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Path*& Pathfinding::RaycastModifier_Filter::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::RaycastModifier_Filter::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::RaycastModifier_Filter::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& Pathfinding::RaycastModifier_Filter::__cordl_internal_get_cachedDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedDelegate;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& Pathfinding::RaycastModifier_Filter::__cordl_internal_get_cachedDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedDelegate;
}
constexpr void Pathfinding::RaycastModifier_Filter::__cordl_internal_set_cachedDelegate(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedDelegate = value;
}
inline void Pathfinding::RaycastModifier_Filter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier_Filter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RaycastModifier_Filter::CanTraverse(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RaycastModifier_Filter*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline ::Pathfinding::RaycastModifier_Filter* Pathfinding::RaycastModifier_Filter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RaycastModifier_Filter*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RaycastModifier_Filter::RaycastModifier_Filter()   {
}
