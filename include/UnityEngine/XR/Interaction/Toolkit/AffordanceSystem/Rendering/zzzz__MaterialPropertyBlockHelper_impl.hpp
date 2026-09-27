#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialPropertyBlockHelper.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialPropertyBlockHelper_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4da05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::LateUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4da068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper.GetMaterialPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::GetMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4da0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"GetMaterialPropertyBlock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::Initialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4da0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4da144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_get_m_PropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_get_m_PropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyBlock;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_set_m_PropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyBlock = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_get_m_IsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsDirty;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_get_m_IsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsDirty;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::__cordl_internal_set_m_IsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsDirty = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::GetMaterialPropertyBlock(bool  markPropertyBlockAsDirty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {"GetMaterialPropertyBlock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method, markPropertyBlockAsDirty);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::MaterialPropertyBlockHelper()   {
}
