#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBoundary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_BoundaryTestResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_BoundaryType_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_Node_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetConfigured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetConfigured)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa57e6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetConfigured", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRBoundary_BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::OVRBoundary_Node, ::GlobalNamespace::OVRBoundary_BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestNode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa57e77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"TestNode", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_Node>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRBoundary_BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(::UnityEngine::Vector3, ::GlobalNamespace::OVRBoundary_BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestPoint)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa57e83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"TestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::OVRBoundary_BoundaryType)>(&::GlobalNamespace::OVRBoundary::GetGeometry)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xa57e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetGeometry", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::OVRBoundary_BoundaryType)>(&::GlobalNamespace::OVRBoundary::GetDimensions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa57ed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetDimensions", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetVisible)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa57ee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoundary::*)(bool)>(&::GlobalNamespace::OVRBoundary::SetVisible)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa57eeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa57ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRBoundary::__cordl_internal_get_cachedGeometryList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGeometryList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::OVRBoundary::__cordl_internal_get_cachedGeometryList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGeometryList;
}
constexpr void GlobalNamespace::OVRBoundary::__cordl_internal_set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedGeometryList = value;
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedVector3fSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "cachedVector3fSize", ::GlobalNamespace::OVRBoundary*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRBoundary::getStaticF_cachedVector3fSize()  {
return ::cordl_internals::getStaticField<int32_t, "cachedVector3fSize", ::GlobalNamespace::OVRBoundary*>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer", ::GlobalNamespace::OVRBoundary*>(std::forward<::GlobalNamespace::OVRNativeBuffer*>(value));
}
inline ::GlobalNamespace::OVRNativeBuffer* GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryNativeBuffer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer", ::GlobalNamespace::OVRBoundary*>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "cachedGeometryManagedBuffer", ::GlobalNamespace::OVRBoundary*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryManagedBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "cachedGeometryManagedBuffer", ::GlobalNamespace::OVRBoundary*>();
}
inline bool GlobalNamespace::OVRBoundary::GetConfigured()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetConfigured", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult GlobalNamespace::OVRBoundary::TestNode(::GlobalNamespace::OVRBoundary_Node  node, ::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"TestNode", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_Node>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary_BoundaryTestResult>(this, ___internal_method, node, boundaryType);
}
inline ::GlobalNamespace::OVRBoundary_BoundaryTestResult GlobalNamespace::OVRBoundary::TestPoint(::UnityEngine::Vector3  point, ::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"TestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary_BoundaryTestResult>(this, ___internal_method, point, boundaryType);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::OVRBoundary::GetGeometry(::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetGeometry", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method, boundaryType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRBoundary::GetDimensions(::GlobalNamespace::OVRBoundary_BoundaryType  boundaryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetDimensions", {}, {::i2c::type_of<::GlobalNamespace::OVRBoundary_BoundaryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, boundaryType);
}
inline bool GlobalNamespace::OVRBoundary::GetVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"GetVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoundary::SetVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRBoundary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRBoundary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRBoundary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBoundary*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBoundary::OVRBoundary()   {
}
