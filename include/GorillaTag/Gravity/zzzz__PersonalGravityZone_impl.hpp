#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/PersonalGravityZone.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_impl.hpp"
#include "GorillaTag/Gravity/zzzz__PersonalGravityZone_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.SetLocalPlayerGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)(::UnityEngine::Vector3)>(&::GorillaTag::Gravity::PersonalGravityZone::SetLocalPlayerGravityDirection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d3b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.SetLocalPlayerGravityDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)(::UnityEngine::Transform*)>(&::GorillaTag::Gravity::PersonalGravityZone::SetLocalPlayerGravityDirection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d3b504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::PersonalGravityZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::PersonalGravityZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3b59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.ResetLocalPlayerIfMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::PersonalGravityZone::ResetLocalPlayerIfMatch)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d3b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"ResetLocalPlayerIfMatch", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.OnTargetExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::PersonalGravityZone::OnTargetExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3b724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone.OnTargetFilteredOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::PersonalGravityZone::OnTargetFilteredOut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3b728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PersonalGravityZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PersonalGravityZone::*)()>(&::GorillaTag::Gravity::PersonalGravityZone::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3b72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Gravity::PersonalGravityZone::SetLocalPlayerGravityDirection(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void GorillaTag::Gravity::PersonalGravityZone::SetLocalPlayerGravityDirection(::UnityEngine::Transform*  referenceDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"SetLocalPlayerGravityDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, referenceDir);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::PersonalGravityZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline void GorillaTag::Gravity::PersonalGravityZone::ResetLocalPlayerIfMatch(::GorillaTag::Gravity::MonkeGravityController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {"ResetLocalPlayerIfMatch", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GorillaTag::Gravity::PersonalGravityZone::OnTargetExited(::GorillaTag::Gravity::MonkeGravityController*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::PersonalGravityZone::OnTargetFilteredOut(::GorillaTag::Gravity::MonkeGravityController*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Gravity::PersonalGravityZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PersonalGravityZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::PersonalGravityZone* GorillaTag::Gravity::PersonalGravityZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::PersonalGravityZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::PersonalGravityZone::PersonalGravityZone()   {
}
