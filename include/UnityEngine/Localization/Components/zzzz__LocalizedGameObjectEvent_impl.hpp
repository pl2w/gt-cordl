#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedGameObjectEvent.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedGameObjectEvent_def.hpp"
#include "UnityEngine/Localization/Events/zzzz__UnityEventGameObject_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedGameObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Components::LocalizedGameObjectEvent.UpdateAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Components::LocalizedGameObjectEvent::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Localization::Components::LocalizedGameObjectEvent::UpdateAsset)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb04eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Components::LocalizedGameObjectEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Components::LocalizedGameObjectEvent::*)()>(&::UnityEngine::Localization::Components::LocalizedGameObjectEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04ef1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Localization::Components::LocalizedGameObjectEvent::__cordl_internal_get_m_Current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Current;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Localization::Components::LocalizedGameObjectEvent::__cordl_internal_get_m_Current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Current;
}
constexpr void UnityEngine::Localization::Components::LocalizedGameObjectEvent::__cordl_internal_set_m_Current(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Current = value;
}
inline void UnityEngine::Localization::Components::LocalizedGameObjectEvent::UpdateAsset(::UnityEngine::GameObject*  localizedAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localizedAsset);
}
inline void UnityEngine::Localization::Components::LocalizedGameObjectEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Components::LocalizedGameObjectEvent* UnityEngine::Localization::Components::LocalizedGameObjectEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizedGameObjectEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Components::LocalizedGameObjectEvent::LocalizedGameObjectEvent()   {
}
