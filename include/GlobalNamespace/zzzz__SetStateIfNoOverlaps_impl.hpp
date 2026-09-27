#pragma once
// IWYU pragma private; include "GlobalNamespace/SetStateIfNoOverlaps.hpp"
#include "GlobalNamespace/zzzz__SetStateConditional_impl.hpp"
#include "GlobalNamespace/zzzz__SetStateIfNoOverlaps_def.hpp"
#include "GlobalNamespace/zzzz__VolumeCast_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetStateIfNoOverlaps.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateIfNoOverlaps::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateIfNoOverlaps::Setup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x579f704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateIfNoOverlaps.CanSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SetStateIfNoOverlaps::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::SetStateIfNoOverlaps::CanSetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x579f768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(),
                    {::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetStateIfNoOverlaps._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetStateIfNoOverlaps::*)()>(&::GlobalNamespace::SetStateIfNoOverlaps::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579f7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VolumeCast>& GlobalNamespace::SetStateIfNoOverlaps::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr ::UnityW<::GlobalNamespace::VolumeCast> const& GlobalNamespace::SetStateIfNoOverlaps::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void GlobalNamespace::SetStateIfNoOverlaps::__cordl_internal_set__volume(::UnityW<::GlobalNamespace::VolumeCast>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
inline void GlobalNamespace::SetStateIfNoOverlaps::Setup(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline bool GlobalNamespace::SetStateIfNoOverlaps::CanSetState(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::SetStateIfNoOverlaps::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetStateIfNoOverlaps*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetStateIfNoOverlaps* GlobalNamespace::SetStateIfNoOverlaps::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetStateIfNoOverlaps*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetStateIfNoOverlaps::SetStateIfNoOverlaps()   {
}
