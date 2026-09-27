#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryVolume.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_Encoding_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_ShadowmaskEncoding_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_def.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_Encoding_def.hpp"
#include "GlobalNamespace/zzzz__BakeryVolume_ShadowmaskEncoding_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetMin)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f27c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetMax)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f27de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakeryVolume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::GlobalNamespace::BakeryVolume::TransformPoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f27e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetWorldXZMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetWorldXZMinMax)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5f27e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetWorldXZMinMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetMaxXMinZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetMaxXMinZ)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f27fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMaxXMinZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetInvSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetInvSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f28040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetInvSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetMatrix)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f28068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.GetRotationY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::GetRotationY)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f27d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetRotationY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.SetGlobalParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::SetGlobalParams)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5f28208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"SetGlobalParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.UpdateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::UpdateBounds)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f284d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"UpdateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::OnEnable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f2852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5f285a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryVolume::*)()>(&::GlobalNamespace::BakeryVolume::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f28794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_enableBaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBaking;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_enableBaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBaking;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_enableBaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableBaking = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::BakeryVolume::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_adaptiveRes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adaptiveRes;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_adaptiveRes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adaptiveRes;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_adaptiveRes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adaptiveRes = value;
}
constexpr float_t& GlobalNamespace::BakeryVolume::__cordl_internal_get_voxelsPerUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelsPerUnit;
}
constexpr float_t const& GlobalNamespace::BakeryVolume::__cordl_internal_get_voxelsPerUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelsPerUnit;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_voxelsPerUnit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelsPerUnit = value;
}
constexpr int32_t& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionX;
}
constexpr int32_t const& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionX;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_resolutionX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolutionX = value;
}
constexpr int32_t& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionY;
}
constexpr int32_t const& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionY;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_resolutionY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolutionY = value;
}
constexpr int32_t& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionZ;
}
constexpr int32_t const& GlobalNamespace::BakeryVolume::__cordl_internal_get_resolutionZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolutionZ;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_resolutionZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolutionZ = value;
}
constexpr ::GlobalNamespace::BakeryVolume_Encoding& GlobalNamespace::BakeryVolume::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::GlobalNamespace::BakeryVolume_Encoding const& GlobalNamespace::BakeryVolume::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_encoding(::GlobalNamespace::BakeryVolume_Encoding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
constexpr ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding& GlobalNamespace::BakeryVolume::__cordl_internal_get_shadowmaskEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskEncoding;
}
constexpr ::GlobalNamespace::BakeryVolume_ShadowmaskEncoding const& GlobalNamespace::BakeryVolume::__cordl_internal_get_shadowmaskEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadowmaskEncoding;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_shadowmaskEncoding(::GlobalNamespace::BakeryVolume_ShadowmaskEncoding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadowmaskEncoding = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_firstLightIsAlwaysAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstLightIsAlwaysAlpha;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_firstLightIsAlwaysAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstLightIsAlwaysAlpha;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_firstLightIsAlwaysAlpha(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstLightIsAlwaysAlpha = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_denoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denoise;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_denoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denoise;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_denoise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___denoise = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_isGlobal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_isGlobal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGlobal;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_isGlobal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGlobal = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture0;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture0;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bakedTexture0(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedTexture0 = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture1;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture1;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bakedTexture1(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedTexture1 = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture2;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture2;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bakedTexture2(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedTexture2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture3;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedTexture3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedTexture3;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bakedTexture3(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedTexture3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMask;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_bakedMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakedMask;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_bakedMask(::UnityW<::UnityEngine::Texture3D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakedMask = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_supportRotationAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportRotationAfterBake;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_supportRotationAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportRotationAfterBake;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_supportRotationAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supportRotationAfterBake = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get_rotateAroundY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAroundY;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get_rotateAroundY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAroundY;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_rotateAroundY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAroundY = value;
}
constexpr bool& GlobalNamespace::BakeryVolume::__cordl_internal_get__rotateAroundXYZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateAroundXYZ;
}
constexpr bool const& GlobalNamespace::BakeryVolume::__cordl_internal_get__rotateAroundXYZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateAroundXYZ;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set__rotateAroundXYZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateAroundXYZ = value;
}
constexpr int32_t& GlobalNamespace::BakeryVolume::__cordl_internal_get_multiVolumePriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiVolumePriority;
}
constexpr int32_t const& GlobalNamespace::BakeryVolume::__cordl_internal_get_multiVolumePriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiVolumePriority;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_multiVolumePriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiVolumePriority = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BakeryVolume::__cordl_internal_get_tform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BakeryVolume::__cordl_internal_get_tform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tform;
}
constexpr void GlobalNamespace::BakeryVolume::__cordl_internal_set_tform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tform = value;
}
inline void GlobalNamespace::BakeryVolume::setStaticF_globalVolume(::UnityW<::GlobalNamespace::BakeryVolume>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BakeryVolume>, "globalVolume", ::GlobalNamespace::BakeryVolume*>(std::forward<::UnityW<::GlobalNamespace::BakeryVolume>>(value));
}
inline ::UnityW<::GlobalNamespace::BakeryVolume> GlobalNamespace::BakeryVolume::getStaticF_globalVolume()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BakeryVolume>, "globalVolume", ::GlobalNamespace::BakeryVolume*>();
}
inline void GlobalNamespace::BakeryVolume::setStaticF_showAll(bool  value)  {
::cordl_internals::setStaticField<bool, "showAll", ::GlobalNamespace::BakeryVolume*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BakeryVolume::getStaticF_showAll()  {
return ::cordl_internals::getStaticField<bool, "showAll", ::GlobalNamespace::BakeryVolume*>();
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakeryVolume::GetMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakeryVolume::GetMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakeryVolume::TransformPoint(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  center, ::UnityEngine::Vector2  sc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p, center, sc);
}
inline ::UnityEngine::Vector4 GlobalNamespace::BakeryVolume::GetWorldXZMinMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetWorldXZMinMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakeryVolume::GetMaxXMinZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMaxXMinZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakeryVolume::GetInvSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetInvSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::BakeryVolume::GetMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BakeryVolume::GetRotationY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"GetRotationY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryVolume::SetGlobalParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"SetGlobalParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryVolume::UpdateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"UpdateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryVolume::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryVolume* GlobalNamespace::BakeryVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryVolume::BakeryVolume()   {
}
