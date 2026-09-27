#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXHierarchyAttributeMapBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_RadiusMode_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_Bone_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXHierarchyAttributeMapBinder_RadiusMode_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb3e7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3e7388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.UpdateHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateHierarchy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb3e7254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"UpdateHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.ChildrenOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>* (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)(::UnityEngine::Transform*, uint32_t)>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::ChildrenOf)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0xb3e738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"ChildrenOf", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateData)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xb3e77fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"UpdateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)(::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::IsValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb3e7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.UpdateBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)(::UnityEngine::VFX::VisualEffect*)>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb3e7cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb3e7d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                    {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::*)()>(&::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb3e7e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_BoneCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoneCount;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_BoneCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoneCount;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_m_BoneCount(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoneCount = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_PositionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionMap;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_PositionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionMap;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_m_PositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionMap = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_TargetPositionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPositionMap;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_TargetPositionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPositionMap;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_m_TargetPositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPositionMap = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_RadiusPositionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPositionMap;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_m_RadiusPositionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPositionMap;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_m_RadiusPositionMap(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RadiusPositionMap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_HierarchyRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HierarchyRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_HierarchyRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HierarchyRoot;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_HierarchyRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HierarchyRoot = value;
}
constexpr float_t& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_DefaultRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRadius;
}
constexpr float_t const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_DefaultRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultRadius;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_DefaultRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultRadius = value;
}
constexpr uint32_t& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_MaximumDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaximumDepth;
}
constexpr uint32_t const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_MaximumDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaximumDepth;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_MaximumDepth(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaximumDepth = value;
}
constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr ::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_Radius(::GlobalNamespace::VFXHierarchyAttributeMapBinder_RadiusMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_position(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_targetPosition(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_radius(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>* const& UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"UpdateHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>* UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::ChildrenOf(::UnityEngine::Transform*  source, uint32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"ChildrenOf", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::VFXHierarchyAttributeMapBinder_Bone>*>(this, ___internal_method, source, depth);
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::IsValid(::UnityEngine::VFX::VisualEffect*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline ::StringW UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder* UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXHierarchyAttributeMapBinder::VFXHierarchyAttributeMapBinder()   {
}
