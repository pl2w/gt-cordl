#pragma once
// IWYU pragma private; include "BoingKit/BoingBones.hpp"
#include "BoingKit/zzzz__BoingBoneCollider_impl.hpp"
#include "BoingKit/zzzz__BoingBones_Chain_CurveType_impl.hpp"
#include "BoingKit/zzzz__BoingReactor_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingBones_Chain_CurveType_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__SharedBoingParams_def.hpp"
#include "BoingKit/zzzz__Version_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingBones.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::Register)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e13474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::Unregister)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e135b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.OnUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)(::BoingKit::Version, ::BoingKit::Version)>(&::BoingKit::BoingBones::OnUpgrade)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e136e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e13770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e14358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e14390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.RescanBoneChains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::RescanBoneChains)> {
  constexpr static std::size_t size = 0xa78;
  constexpr static std::size_t addrs = 0x5e13788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"RescanBoneChains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.UpdateCollisionRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::UpdateCollisionRadius)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e14200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"UpdateCollisionRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.Reboot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::Reboot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e14848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.Reboot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)(int32_t)>(&::BoingKit::BoingBones::Reboot)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5e14670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"Reboot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.get_MinScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::get_MinScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e14990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"get_MinScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::PrepareExecute)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x5e14998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.AccumulateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)(::by_ref<::GlobalNamespace::BoingEffector_Params>, float_t)>(&::BoingKit::BoingBones::AccumulateTarget)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e155e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.EndAccumulateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::EndAccumulateTargets)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5e157b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"EndAccumulateTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::Restore)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e15934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBones*>(),
                    {::i2c::class_of<::BoingKit::BoingBones*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones::*)()>(&::BoingKit::BoingBones::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e15a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>& BoingKit::BoingBones::__cordl_internal_get_BoneData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoneData;
}
constexpr ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>> const& BoingKit::BoingBones::__cordl_internal_get_BoneData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoneData;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_BoneData(::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoneData = value;
}
constexpr ::ArrayW<::BoingKit::BoingBones_Chain*>& BoingKit::BoingBones::__cordl_internal_get_BoneChains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoneChains;
}
constexpr ::ArrayW<::BoingKit::BoingBones_Chain*> const& BoingKit::BoingBones::__cordl_internal_get_BoneChains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoneChains;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_BoneChains(::ArrayW<::BoingKit::BoingBones_Chain*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoneChains = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_TwistPropagation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwistPropagation;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_TwistPropagation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwistPropagation;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_TwistPropagation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwistPropagation = value;
}
constexpr float_t& BoingKit::BoingBones::__cordl_internal_get_MaxCollisionResolutionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCollisionResolutionSpeed;
}
constexpr float_t const& BoingKit::BoingBones::__cordl_internal_get_MaxCollisionResolutionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCollisionResolutionSpeed;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_MaxCollisionResolutionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxCollisionResolutionSpeed = value;
}
constexpr ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>& BoingKit::BoingBones::__cordl_internal_get_BoingColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoingColliders;
}
constexpr ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>> const& BoingKit::BoingBones::__cordl_internal_get_BoingColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoingColliders;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_BoingColliders(::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoingColliders = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& BoingKit::BoingBones::__cordl_internal_get_UnityColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& BoingKit::BoingBones::__cordl_internal_get_UnityColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityColliders;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_UnityColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnityColliders = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawRawBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawRawBones;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawRawBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawRawBones;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawRawBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawRawBones = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawTargetBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawTargetBones;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawTargetBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawTargetBones;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawTargetBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawTargetBones = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawBoingBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawBoingBones;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawBoingBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawBoingBones;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawBoingBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawBoingBones = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawFinalBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawFinalBones;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawFinalBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawFinalBones;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawFinalBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawFinalBones = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawColliders;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawColliders;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawColliders = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawChainBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawChainBounds;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawChainBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawChainBounds;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawChainBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawChainBounds = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawBoneNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawBoneNames;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawBoneNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawBoneNames;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawBoneNames(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawBoneNames = value;
}
constexpr bool& BoingKit::BoingBones::__cordl_internal_get_DebugDrawLengthFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawLengthFromRoot;
}
constexpr bool const& BoingKit::BoingBones::__cordl_internal_get_DebugDrawLengthFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugDrawLengthFromRoot;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_DebugDrawLengthFromRoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugDrawLengthFromRoot = value;
}
constexpr float_t& BoingKit::BoingBones::__cordl_internal_get_m_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minScale;
}
constexpr float_t const& BoingKit::BoingBones::__cordl_internal_get_m_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minScale;
}
constexpr void BoingKit::BoingBones::__cordl_internal_set_m_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minScale = value;
}
inline void BoingKit::BoingBones::Register()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::Unregister()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::OnUpgrade(::BoingKit::Version  oldVersion, ::BoingKit::Version  newVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVersion, newVersion);
}
inline void BoingKit::BoingBones::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::RescanBoneChains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"RescanBoneChains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::UpdateCollisionRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"UpdateCollisionRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::Reboot()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::Reboot(int32_t  iChain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"Reboot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iChain);
}
inline float_t BoingKit::BoingBones::get_MinScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"get_MinScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BoingKit::BoingBones::PrepareExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::AccumulateTarget(::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effector, dt);
}
inline void BoingKit::BoingBones::EndAccumulateTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {"EndAccumulateTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::Restore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBones*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingBones* BoingKit::BoingBones::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBones*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBones::BoingBones()   {
}
//  Writing Method size for method: ::BoingKit::BoingBones_RescanEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones_RescanEntry::*)(::UnityEngine::Transform*, int32_t, float_t)>(&::BoingKit::BoingBones_RescanEntry::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e143b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_RescanEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr void BoingKit::BoingBones_RescanEntry::__cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Transform = value;
}
constexpr int32_t& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_ParentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentIndex;
}
constexpr int32_t const& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_ParentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentIndex;
}
constexpr void BoingKit::BoingBones_RescanEntry::__cordl_internal_set_ParentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParentIndex = value;
}
constexpr float_t& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_LengthFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFromRoot;
}
constexpr float_t const& BoingKit::BoingBones_RescanEntry::__cordl_internal_get_LengthFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFromRoot;
}
constexpr void BoingKit::BoingBones_RescanEntry::__cordl_internal_set_LengthFromRoot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthFromRoot = value;
}
inline void BoingKit::BoingBones_RescanEntry::_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_RescanEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, iParent, lengthFromRoot);
}
inline ::BoingKit::BoingBones_RescanEntry* BoingKit::BoingBones_RescanEntry::New_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBones_RescanEntry*>(transform, iParent, lengthFromRoot));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBones_RescanEntry::BoingBones_RescanEntry()   {
}
//  Writing Method size for method: ::BoingKit::BoingBones_Chain.EvaluateCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::Chain_BoingBones_CurveType, float_t, ::UnityEngine::AnimationCurve*)>(&::BoingKit::BoingBones_Chain::EvaluateCurve)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e1457c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Chain*>(),
                        {"EvaluateCurve", {}, {::i2c::type_of<::GlobalNamespace::Chain_BoingBones_CurveType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Chain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones_Chain::*)()>(&::BoingKit::BoingBones_Chain::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5e15c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Chain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::BoingBones_Chain::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::BoingBones_Chain::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_Root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& BoingKit::BoingBones_Chain::__cordl_internal_get_Exclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Exclusion;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& BoingKit::BoingBones_Chain::__cordl_internal_get_Exclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Exclusion;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_Exclusion(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Exclusion = value;
}
constexpr bool& BoingKit::BoingBones_Chain::__cordl_internal_get_EffectorReaction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectorReaction;
}
constexpr bool const& BoingKit::BoingBones_Chain::__cordl_internal_get_EffectorReaction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectorReaction;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_EffectorReaction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EffectorReaction = value;
}
constexpr bool& BoingKit::BoingBones_Chain::__cordl_internal_get_LooseRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LooseRoot;
}
constexpr bool const& BoingKit::BoingBones_Chain::__cordl_internal_get_LooseRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LooseRoot;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_LooseRoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LooseRoot = value;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams>& BoingKit::BoingBones_Chain::__cordl_internal_get_ParamsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParamsOverride;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams> const& BoingKit::BoingBones_Chain::__cordl_internal_get_ParamsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParamsOverride;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_ParamsOverride(::UnityW<::BoingKit::SharedBoingParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParamsOverride = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_AnimationBlendCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlendCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_AnimationBlendCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlendCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_AnimationBlendCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnimationBlendCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_AnimationBlendCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlendCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_AnimationBlendCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlendCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_AnimationBlendCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnimationBlendCustomCurve = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_LengthStiffnessCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_LengthStiffnessCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_LengthStiffnessCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthStiffnessCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_LengthStiffnessCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_LengthStiffnessCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_LengthStiffnessCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthStiffnessCustomCurve = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_PoseStiffnessCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffnessCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_PoseStiffnessCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffnessCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_PoseStiffnessCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseStiffnessCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_PoseStiffnessCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffnessCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_PoseStiffnessCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffnessCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_PoseStiffnessCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseStiffnessCustomCurve = value;
}
constexpr float_t& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxBendAngleCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxBendAngleCap;
}
constexpr float_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxBendAngleCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxBendAngleCap;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_MaxBendAngleCap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxBendAngleCap = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_BendAngleCapCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCapCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_BendAngleCapCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCapCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_BendAngleCapCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BendAngleCapCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_BendAngleCapCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCapCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_BendAngleCapCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCapCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_BendAngleCapCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BendAngleCapCustomCurve = value;
}
constexpr float_t& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxCollisionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCollisionRadius;
}
constexpr float_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxCollisionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxCollisionRadius;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_MaxCollisionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxCollisionRadius = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_CollisionRadiusCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadiusCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_CollisionRadiusCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadiusCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_CollisionRadiusCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollisionRadiusCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_CollisionRadiusCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadiusCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_CollisionRadiusCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadiusCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_CollisionRadiusCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollisionRadiusCustomCurve = value;
}
constexpr bool& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableBoingKitCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableBoingKitCollision;
}
constexpr bool const& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableBoingKitCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableBoingKitCollision;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_EnableBoingKitCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableBoingKitCollision = value;
}
constexpr bool& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableUnityCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableUnityCollision;
}
constexpr bool const& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableUnityCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableUnityCollision;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_EnableUnityCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableUnityCollision = value;
}
constexpr bool& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableInterChainCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableInterChainCollision;
}
constexpr bool const& BoingKit::BoingBones_Chain::__cordl_internal_get_EnableInterChainCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableInterChainCollision;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_EnableInterChainCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableInterChainCollision = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Chain::__cordl_internal_get_Gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gravity;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Chain::__cordl_internal_get_Gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gravity;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_Gravity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Gravity = value;
}
constexpr ::UnityEngine::Bounds& BoingKit::BoingBones_Chain::__cordl_internal_get_Bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bounds;
}
constexpr ::UnityEngine::Bounds const& BoingKit::BoingBones_Chain::__cordl_internal_get_Bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bounds;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_Bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bounds = value;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& BoingKit::BoingBones_Chain::__cordl_internal_get_SquashAndStretchCurveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretchCurveType;
}
constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& BoingKit::BoingBones_Chain::__cordl_internal_get_SquashAndStretchCurveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretchCurveType;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_SquashAndStretchCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SquashAndStretchCurveType = value;
}
constexpr ::UnityEngine::AnimationCurve*& BoingKit::BoingBones_Chain::__cordl_internal_get_SquashAndStretchCustomCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretchCustomCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& BoingKit::BoingBones_Chain::__cordl_internal_get_SquashAndStretchCustomCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretchCustomCurve;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_SquashAndStretchCustomCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SquashAndStretchCustomCurve = value;
}
constexpr float_t& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxSquash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSquash;
}
constexpr float_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxSquash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSquash;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_MaxSquash(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxSquash = value;
}
constexpr float_t& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxStretch;
}
constexpr float_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxStretch;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_MaxStretch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxStretch = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::BoingBones_Chain::__cordl_internal_get_m_scannedRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scannedRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::BoingBones_Chain::__cordl_internal_get_m_scannedRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scannedRoot;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_m_scannedRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scannedRoot = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& BoingKit::BoingBones_Chain::__cordl_internal_get_m_scannedExclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scannedExclusion;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& BoingKit::BoingBones_Chain::__cordl_internal_get_m_scannedExclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scannedExclusion;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_m_scannedExclusion(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scannedExclusion = value;
}
constexpr int32_t& BoingKit::BoingBones_Chain::__cordl_internal_get_m_hierarchyHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hierarchyHash;
}
constexpr int32_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_m_hierarchyHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hierarchyHash;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_m_hierarchyHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hierarchyHash = value;
}
constexpr float_t& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxLengthFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLengthFromRoot;
}
constexpr float_t const& BoingKit::BoingBones_Chain::__cordl_internal_get_MaxLengthFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLengthFromRoot;
}
constexpr void BoingKit::BoingBones_Chain::__cordl_internal_set_MaxLengthFromRoot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLengthFromRoot = value;
}
inline float_t BoingKit::BoingBones_Chain::EvaluateCurve(::GlobalNamespace::Chain_BoingBones_CurveType  type, float_t  t, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Chain*>(),
                        {"EvaluateCurve", {}, {::i2c::type_of<::GlobalNamespace::Chain_BoingBones_CurveType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, type, t, curve);
}
inline void BoingKit::BoingBones_Chain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Chain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingBones_Chain* BoingKit::BoingBones_Chain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBones_Chain*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBones_Chain::BoingBones_Chain()   {
}
//  Writing Method size for method: ::BoingKit::BoingBones_Bone.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingBones_Bone::*)()>(&::BoingKit::BoingBones_Bone::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e14898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Bone.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::BoingKit::BoingBones_Bone::*)()>(&::BoingKit::BoingBones_Bone::get_Rotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e148e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Bone.get_LocalScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingBones_Bone::*)()>(&::BoingKit::BoingBones_Bone::get_LocalScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e14940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_LocalScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Bone.CheckResetFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones_Bone::*)()>(&::BoingKit::BoingBones_Bone::CheckResetFlags)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e15b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"CheckResetFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Bone.UpdateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones_Bone::*)()>(&::BoingKit::BoingBones_Bone::UpdateBounds)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e15b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"UpdateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBones_Bone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBones_Bone::*)(::UnityEngine::Transform*, int32_t, float_t)>(&::BoingKit::BoingBones_Bone::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e14404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Params_BoingWork_InstanceData& BoingKit::BoingBones_Bone::__cordl_internal_get_Instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr ::GlobalNamespace::Params_BoingWork_InstanceData const& BoingKit::BoingBones_Bone::__cordl_internal_get_Instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Instance;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_Instance(::GlobalNamespace::Params_BoingWork_InstanceData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Instance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::BoingBones_Bone::__cordl_internal_get_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::BoingBones_Bone::__cordl_internal_get_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Transform = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_ScaleWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleWs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_ScaleWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScaleWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_ScaleWs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScaleWs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedScaleLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedScaleLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedScaleLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedScaleLs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CachedScaleLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedScaleLs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedPositionWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedPositionWs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedPositionWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedPositionWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_BlendedPositionWs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendedPositionWs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedScaleLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedScaleLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedScaleLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedScaleLs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_BlendedScaleLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendedScaleLs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedPositionWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionWs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedPositionWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CachedPositionWs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedPositionWs = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedPositionLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedPositionLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedPositionLs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CachedPositionLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedPositionLs = value;
}
constexpr ::UnityEngine::Bounds& BoingKit::BoingBones_Bone::__cordl_internal_get_Bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bounds;
}
constexpr ::UnityEngine::Bounds const& BoingKit::BoingBones_Bone::__cordl_internal_get_Bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bounds;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_Bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bounds = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_RotationInverseWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationInverseWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_RotationInverseWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationInverseWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_RotationInverseWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationInverseWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_SpringRotationWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpringRotationWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_SpringRotationWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpringRotationWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_SpringRotationWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpringRotationWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_SpringRotationInverseWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpringRotationInverseWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_SpringRotationInverseWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpringRotationInverseWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_SpringRotationInverseWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpringRotationInverseWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedRotationWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedRotationWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CachedRotationWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedRotationWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedRotationLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationLs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_CachedRotationLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedRotationLs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CachedRotationLs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedRotationLs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedRotationWs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedRotationWs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_BlendedRotationWs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendedRotationWs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_BlendedRotationWs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendedRotationWs = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_RotationBackPropDeltaPs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationBackPropDeltaPs;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_RotationBackPropDeltaPs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationBackPropDeltaPs;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_RotationBackPropDeltaPs(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationBackPropDeltaPs = value;
}
constexpr int32_t& BoingKit::BoingBones_Bone::__cordl_internal_get_ParentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentIndex;
}
constexpr int32_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_ParentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParentIndex;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_ParentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParentIndex = value;
}
constexpr ::ArrayW<int32_t>& BoingKit::BoingBones_Bone::__cordl_internal_get_ChildIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildIndices;
}
constexpr ::ArrayW<int32_t> const& BoingKit::BoingBones_Bone::__cordl_internal_get_ChildIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildIndices;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_ChildIndices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChildIndices = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFromRoot;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthFromRoot;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_LengthFromRoot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthFromRoot = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_AnimationBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlend;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_AnimationBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnimationBlend;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_AnimationBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnimationBlend = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffness;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffness;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_LengthStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthStiffness = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthStiffnessT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessT;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_LengthStiffnessT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LengthStiffnessT;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_LengthStiffnessT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LengthStiffnessT = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_FullyStiffToParentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullyStiffToParentLength;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_FullyStiffToParentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullyStiffToParentLength;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_FullyStiffToParentLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullyStiffToParentLength = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_PoseStiffness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffness;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_PoseStiffness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoseStiffness;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_PoseStiffness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoseStiffness = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_BendAngleCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCap;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_BendAngleCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BendAngleCap;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_BendAngleCap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BendAngleCap = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_CollisionRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadius;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_CollisionRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollisionRadius;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_CollisionRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollisionRadius = value;
}
constexpr float_t& BoingKit::BoingBones_Bone::__cordl_internal_get_SquashAndStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretch;
}
constexpr float_t const& BoingKit::BoingBones_Bone::__cordl_internal_get_SquashAndStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SquashAndStretch;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_SquashAndStretch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SquashAndStretch = value;
}
constexpr bool& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedPos;
}
constexpr bool const& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedPos;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_updatedPos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedPos = value;
}
constexpr bool& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedRot;
}
constexpr bool const& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedRot;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_updatedRot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedRot = value;
}
constexpr bool& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedScale;
}
constexpr bool const& BoingKit::BoingBones_Bone::__cordl_internal_get_updatedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedScale;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_updatedScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedScale = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingBones_Bone::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingBones_Bone::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBones_Bone::__cordl_internal_get_localScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBones_Bone::__cordl_internal_get_localScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr void BoingKit::BoingBones_Bone::__cordl_internal_set_localScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localScale = value;
}
inline ::UnityEngine::Vector3 BoingKit::BoingBones_Bone::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion BoingKit::BoingBones_Bone::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BoingKit::BoingBones_Bone::get_LocalScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"get_LocalScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BoingKit::BoingBones_Bone::CheckResetFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"CheckResetFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones_Bone::UpdateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {"UpdateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBones_Bone::_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBones_Bone*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, iParent, lengthFromRoot);
}
inline ::BoingKit::BoingBones_Bone* BoingKit::BoingBones_Bone::New_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBones_Bone*>(transform, iParent, lengthFromRoot));
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBones_Bone::BoingBones_Bone()   {
}
