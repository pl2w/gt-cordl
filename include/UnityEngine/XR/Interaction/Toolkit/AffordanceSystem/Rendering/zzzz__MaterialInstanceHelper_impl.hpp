#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialInstanceHelper.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialInstanceHelper_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4d9e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.TryGetMaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)(::by_ref<::UnityEngine::Material*>)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::TryGetMaterialInstance)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4d9ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {"TryGetMaterialInstance", {}, {::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::Initialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb4d9f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4da054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_get_m_MaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_get_m_MaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaterialInstance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_set_m_MaterialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaterialInstance = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::TryGetMaterialInstance(::by_ref<::UnityEngine::Material*>  materialInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {"TryGetMaterialInstance", {}, {::i2c::type_of<::by_ref<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, materialInstance);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::MaterialInstanceHelper()   {
}
