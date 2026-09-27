#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedMonoBehaviourObject.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedMonoBehaviourObject_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject.get_Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::get_Changed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb057754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(),
                        {"get_Changed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb05775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb057778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::__cordl_internal_get_m_Changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Changed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::__cordl_internal_get_m_Changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Changed;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::__cordl_internal_set_m_Changed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Changed = value;
}
inline ::UnityEngine::Events::UnityEvent* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::get_Changed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(),
                        {"get_Changed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject::TrackedMonoBehaviourObject()   {
}
