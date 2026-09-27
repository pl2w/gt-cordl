#pragma once
// IWYU pragma private; include "GlobalNamespace/Xform.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__Xform_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Xform.get_localExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::GlobalNamespace::Xform::*)()>(&::GlobalNamespace::Xform::get_localExtents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a23078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"get_localExtents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Xform.LocalTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::Xform::*)()>(&::GlobalNamespace::Xform::LocalTRS)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a23098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"LocalTRS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Xform.TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::Xform::*)()>(&::GlobalNamespace::Xform::TRS)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5a23158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"TRS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Xform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Xform::*)()>(&::GlobalNamespace::Xform::Update)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5a232a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Xform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Xform::*)()>(&::GlobalNamespace::Xform::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a23644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Xform::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Xform::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::Xform::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Xform::__cordl_internal_get_displayColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Xform::__cordl_internal_get_displayColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayColor;
}
constexpr void GlobalNamespace::Xform::__cordl_internal_set_displayColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayColor = value;
}
constexpr ::Unity::Mathematics::float3& GlobalNamespace::Xform::__cordl_internal_get_localPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr ::Unity::Mathematics::float3 const& GlobalNamespace::Xform::__cordl_internal_get_localPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr void GlobalNamespace::Xform::__cordl_internal_set_localPosition(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPosition = value;
}
constexpr ::Unity::Mathematics::float3& GlobalNamespace::Xform::__cordl_internal_get_localScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr ::Unity::Mathematics::float3 const& GlobalNamespace::Xform::__cordl_internal_get_localScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr void GlobalNamespace::Xform::__cordl_internal_set_localScale(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localScale = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::Xform::__cordl_internal_get_localRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::Xform::__cordl_internal_get_localRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotation;
}
constexpr void GlobalNamespace::Xform::__cordl_internal_set_localRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotation = value;
}
inline void GlobalNamespace::Xform::setStaticF_F3_ONE(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "F3_ONE", ::GlobalNamespace::Xform*>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 GlobalNamespace::Xform::getStaticF_F3_ONE()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "F3_ONE", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_F2_ONE(::Unity::Mathematics::float2  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float2, "F2_ONE", ::GlobalNamespace::Xform*>(std::forward<::Unity::Mathematics::float2>(value));
}
inline ::Unity::Mathematics::float2 GlobalNamespace::Xform::getStaticF_F2_ONE()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float2, "F2_ONE", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_AXIS_ZB_FW(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "AXIS_ZB_FW", ::GlobalNamespace::Xform*>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 GlobalNamespace::Xform::getStaticF_AXIS_ZB_FW()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "AXIS_ZB_FW", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_AXIS_YG_UP(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "AXIS_YG_UP", ::GlobalNamespace::Xform*>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 GlobalNamespace::Xform::getStaticF_AXIS_YG_UP()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "AXIS_YG_UP", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_AXIS_XR_RT(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "AXIS_XR_RT", ::GlobalNamespace::Xform*>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 GlobalNamespace::Xform::getStaticF_AXIS_XR_RT()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "AXIS_XR_RT", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_CR(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "CR", ::GlobalNamespace::Xform*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::Xform::getStaticF_CR()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "CR", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_CG(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "CG", ::GlobalNamespace::Xform*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::Xform::getStaticF_CG()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "CG", ::GlobalNamespace::Xform*>();
}
inline void GlobalNamespace::Xform::setStaticF_CB(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "CB", ::GlobalNamespace::Xform*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GlobalNamespace::Xform::getStaticF_CB()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "CB", ::GlobalNamespace::Xform*>();
}
inline ::Unity::Mathematics::float3 GlobalNamespace::Xform::get_localExtents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"get_localExtents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::Xform::LocalTRS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"LocalTRS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::Xform::TRS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"TRS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void GlobalNamespace::Xform::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Xform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Xform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Xform* GlobalNamespace::Xform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Xform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Xform::Xform()   {
}
