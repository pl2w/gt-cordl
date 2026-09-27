#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationPauser.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationPauser_def.hpp"
#include "GlobalNamespace/zzzz__AnimationPauser__OnStateEnter_d__4_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationPauser.OnStateEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationPauser::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimationPauser::OnStateEnter)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a44760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimationPauser*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimationPauser*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationPauser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationPauser::*)()>(&::GlobalNamespace::AnimationPauser::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a4484c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationPauser.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationPauser::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimationPauser::__n__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a448c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser*>(),
                        {"<>n__0", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorStateInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AnimationPauser::__cordl_internal_get__maxTimeBetweenAnims()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTimeBetweenAnims;
}
constexpr int32_t const& GlobalNamespace::AnimationPauser::__cordl_internal_get__maxTimeBetweenAnims() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTimeBetweenAnims;
}
constexpr void GlobalNamespace::AnimationPauser::__cordl_internal_set__maxTimeBetweenAnims(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTimeBetweenAnims = value;
}
constexpr int32_t& GlobalNamespace::AnimationPauser::__cordl_internal_get__minTimeBetweenAnims()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeBetweenAnims;
}
constexpr int32_t const& GlobalNamespace::AnimationPauser::__cordl_internal_get__minTimeBetweenAnims() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minTimeBetweenAnims;
}
constexpr void GlobalNamespace::AnimationPauser::__cordl_internal_set__minTimeBetweenAnims(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minTimeBetweenAnims = value;
}
constexpr int32_t& GlobalNamespace::AnimationPauser::__cordl_internal_get__animPauseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animPauseDuration;
}
constexpr int32_t const& GlobalNamespace::AnimationPauser::__cordl_internal_get__animPauseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animPauseDuration;
}
constexpr void GlobalNamespace::AnimationPauser::__cordl_internal_set__animPauseDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animPauseDuration = value;
}
inline void GlobalNamespace::AnimationPauser::setStaticF_Restart_Anim_Name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Restart_Anim_Name", ::GlobalNamespace::AnimationPauser*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AnimationPauser::getStaticF_Restart_Anim_Name()  {
return ::cordl_internals::getStaticField<::StringW, "Restart_Anim_Name", ::GlobalNamespace::AnimationPauser*>();
}
inline void GlobalNamespace::AnimationPauser::OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimationPauser*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::AnimationPauser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationPauser::__n__0(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationPauser*>(),
                        {"<>n__0", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::AnimatorStateInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline ::GlobalNamespace::AnimationPauser* GlobalNamespace::AnimationPauser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationPauser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationPauser::AnimationPauser()   {
}
