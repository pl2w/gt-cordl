#pragma once
// IWYU pragma private; include "GorillaTag/XformOffset.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::XformOffset.get_rot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GorillaTag::XformOffset::*)()>(&::GorillaTag::XformOffset::get_rot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d21028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"get_rot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset.set_rot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Quaternion)>(&::GorillaTag::XformOffset::set_rot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d21034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"set_rot", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d20d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d20ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d20ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d20c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d21040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::XformOffset::*)(::UnityEngine::Matrix4x4)>(&::GorillaTag::XformOffset::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5d211bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::XformOffset.Approx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::XformOffset::*)(::GorillaTag::XformOffset)>(&::GorillaTag::XformOffset::Approx)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d213e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"Approx", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::XformOffset::setStaticF_Identity(::GorillaTag::XformOffset  value)  {
::cordl_internals::setStaticField<::GorillaTag::XformOffset, "Identity", ::GorillaTag::XformOffset>(std::forward<::GorillaTag::XformOffset>(value));
}
inline ::GorillaTag::XformOffset GorillaTag::XformOffset::getStaticF_Identity()  {
return ::cordl_internals::getStaticField<::GorillaTag::XformOffset, "Identity", ::GorillaTag::XformOffset>();
}
inline ::UnityEngine::Quaternion GorillaTag::XformOffset::get_rot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"get_rot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void GorillaTag::XformOffset::set_rot(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"set_rot", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rot, scale);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rot, scale);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rot);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rot);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Transform*  parentXform, ::UnityEngine::Transform*  childXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parentXform, childXform);
}
inline void GorillaTag::XformOffset::_ctor(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline bool GorillaTag::XformOffset::Approx(::GorillaTag::XformOffset  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::XformOffset>(),
                        {"Approx", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rotQuat", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rotEulerAngles", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::XformOffset::XformOffset(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  _rotQuat, ::UnityEngine::Vector3  _rotEulerAngles, ::UnityEngine::Vector3  scale) noexcept  {
this->pos = pos;
this->_rotQuat = _rotQuat;
this->_rotEulerAngles = _rotEulerAngles;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::GorillaTag::XformOffset::XformOffset()   {
}
