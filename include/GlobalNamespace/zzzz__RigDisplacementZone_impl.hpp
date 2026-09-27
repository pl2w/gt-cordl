#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDisplacementZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigDisplacementZone_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDisplacementZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigDisplacementZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5740c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDisplacementZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigDisplacementZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5740d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDisplacementZone::*)()>(&::GlobalNamespace::RigDisplacementZone::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5740e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone.GetDisplacementForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RigDisplacementZone::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3)>(&::GlobalNamespace::RigDisplacementZone::GetDisplacementForRig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone.IsDisplacingRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigDisplacementZone::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::RigDisplacementZone::IsDisplacingRig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDisplacementZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDisplacementZone::*)()>(&::GlobalNamespace::RigDisplacementZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5740934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RigDisplacementZone::__cordl_internal_get_localPlayerInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInZone;
}
constexpr bool const& GlobalNamespace::RigDisplacementZone::__cordl_internal_get_localPlayerInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInZone;
}
constexpr void GlobalNamespace::RigDisplacementZone::__cordl_internal_set_localPlayerInZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerInZone = value;
}
inline void GlobalNamespace::RigDisplacementZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigDisplacementZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigDisplacementZone::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::RigDisplacementZone::GetDisplacementForRig(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  undisplacedPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, rig, undisplacedPosition);
}
inline bool GlobalNamespace::RigDisplacementZone::IsDisplacingRig(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig);
}
inline void GlobalNamespace::RigDisplacementZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDisplacementZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigDisplacementZone* GlobalNamespace::RigDisplacementZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigDisplacementZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigDisplacementZone::RigDisplacementZone()   {
}
