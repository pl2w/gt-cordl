#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationBehaviour.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_EventState_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_AttributeType_def.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_EventState_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualEffectActivationBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualEffectActivationBehaviour::*)()>(&::GlobalNamespace::VisualEffectActivationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3d5718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualEffectActivationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipEnter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipEnter;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_onClipEnter(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClipEnter = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipExit;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_onClipExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onClipExit;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_onClipExit(::UnityEngine::VFX::Utility::ExposedProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onClipExit = value;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipEnterEventAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipEnterEventAttributes;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipEnterEventAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipEnterEventAttributes;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_clipEnterEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipEnterEventAttributes = value;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipExitEventAttributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipExitEventAttributes;
}
constexpr ::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState> const& GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_get_clipExitEventAttributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipExitEventAttributes;
}
constexpr void GlobalNamespace::VisualEffectActivationBehaviour::__cordl_internal_set_clipExitEventAttributes(::ArrayW<::GlobalNamespace::VisualEffectActivationBehaviour_EventState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipExitEventAttributes = value;
}
inline void GlobalNamespace::VisualEffectActivationBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VisualEffectActivationBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VisualEffectActivationBehaviour* GlobalNamespace::VisualEffectActivationBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VisualEffectActivationBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour::VisualEffectActivationBehaviour()   {
}
