#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDeduplicationZone.hpp"
#include "GlobalNamespace/zzzz__RigDisplacementZone_impl.hpp"
#include "GlobalNamespace/zzzz__RigDeduplicationZone_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZone.IsDisplacingRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigDeduplicationZone::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::RigDeduplicationZone::IsDisplacingRig)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5740804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZone.GetDisplacementForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RigDeduplicationZone::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3)>(&::GlobalNamespace::RigDeduplicationZone::GetDisplacementForRig)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57408ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(),
                    {::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigDeduplicationZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigDeduplicationZone::*)()>(&::GlobalNamespace::RigDeduplicationZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574092c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::RigDeduplicationZone::IsDisplacingRig(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig);
}
inline ::UnityEngine::Vector3 GlobalNamespace::RigDeduplicationZone::GetDisplacementForRig(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  undisplacedPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, rig, undisplacedPosition);
}
inline void GlobalNamespace::RigDeduplicationZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigDeduplicationZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigDeduplicationZone* GlobalNamespace::RigDeduplicationZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigDeduplicationZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigDeduplicationZone::RigDeduplicationZone()   {
}
