#pragma once
// IWYU pragma private; include "Oculus/Voice/UX/HierarchySimplifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Voice/UX/zzzz__HierarchySimplifier_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::UX::HierarchySimplifier.HideSubObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::Oculus::Voice::UX::HierarchySimplifier::HideSubObjects)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb949e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"HideSubObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::UX::HierarchySimplifier.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::UX::HierarchySimplifier::*)()>(&::Oculus::Voice::UX::HierarchySimplifier::OnValidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb949f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::UX::HierarchySimplifier.ToggleShowInHierarchyFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::Oculus::Voice::UX::HierarchySimplifier::ToggleShowInHierarchyFlag)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb949ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"ToggleShowInHierarchyFlag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::UX::HierarchySimplifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::UX::HierarchySimplifier::*)()>(&::Oculus::Voice::UX::HierarchySimplifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb949f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Voice::UX::HierarchySimplifier::__cordl_internal_get_hideByDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideByDefault;
}
constexpr bool const& Oculus::Voice::UX::HierarchySimplifier::__cordl_internal_get_hideByDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideByDefault;
}
constexpr void Oculus::Voice::UX::HierarchySimplifier::__cordl_internal_set_hideByDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideByDefault = value;
}
inline void Oculus::Voice::UX::HierarchySimplifier::HideSubObjects(::UnityEngine::GameObject*  obj, bool  hideObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"HideSubObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, hideObjects);
}
inline void Oculus::Voice::UX::HierarchySimplifier::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::UX::HierarchySimplifier::ToggleShowInHierarchyFlag(::UnityEngine::GameObject*  obj, bool  hideObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {"ToggleShowInHierarchyFlag", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, hideObject);
}
inline void Oculus::Voice::UX::HierarchySimplifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::UX::HierarchySimplifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::UX::HierarchySimplifier* Oculus::Voice::UX::HierarchySimplifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::UX::HierarchySimplifier*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::UX::HierarchySimplifier::HierarchySimplifier()   {
}
