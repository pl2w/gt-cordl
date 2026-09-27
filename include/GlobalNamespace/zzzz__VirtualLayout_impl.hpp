#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualLayout.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualLayout_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)()>(&::GlobalNamespace::VirtualLayout::OnEnable)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa426b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                    {::i2c::class_of<::GlobalNamespace::VirtualLayout*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout.ResetChildTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)(::UnityEngine::RectTransform*)>(&::GlobalNamespace::VirtualLayout::ResetChildTransform)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa42700c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"ResetChildTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)()>(&::GlobalNamespace::VirtualLayout::OnDisable)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa4271b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                    {::i2c::class_of<::GlobalNamespace::VirtualLayout*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)()>(&::GlobalNamespace::VirtualLayout::LateUpdate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa4273a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout.InjectAllVirtualLayoutElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)(::UnityEngine::RectTransform*)>(&::GlobalNamespace::VirtualLayout::InjectAllVirtualLayoutElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"InjectAllVirtualLayoutElement", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualLayout::*)()>(&::GlobalNamespace::VirtualLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VirtualLayout::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& GlobalNamespace::VirtualLayout::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void GlobalNamespace::VirtualLayout::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::VirtualLayout::__cordl_internal_get__layoutParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::VirtualLayout::__cordl_internal_get__layoutParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutParent;
}
constexpr void GlobalNamespace::VirtualLayout::__cordl_internal_set__layoutParent(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutParent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& GlobalNamespace::VirtualLayout::__cordl_internal_get__rectChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectChildren;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& GlobalNamespace::VirtualLayout::__cordl_internal_get__rectChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectChildren;
}
constexpr void GlobalNamespace::VirtualLayout::__cordl_internal_set__rectChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rectChildren = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& GlobalNamespace::VirtualLayout::__cordl_internal_get__virtualLayoutChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualLayoutChildren;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& GlobalNamespace::VirtualLayout::__cordl_internal_get__virtualLayoutChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualLayoutChildren;
}
constexpr void GlobalNamespace::VirtualLayout::__cordl_internal_set__virtualLayoutChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____virtualLayoutChildren = value;
}
inline void GlobalNamespace::VirtualLayout::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VirtualLayout*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualLayout::ResetChildTransform(::UnityEngine::RectTransform*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"ResetChildTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline void GlobalNamespace::VirtualLayout::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VirtualLayout*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualLayout::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualLayout::InjectAllVirtualLayoutElement(::UnityEngine::RectTransform*  layoutParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {"InjectAllVirtualLayoutElement", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layoutParent);
}
inline void GlobalNamespace::VirtualLayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualLayout*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualLayout* GlobalNamespace::VirtualLayout::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualLayout::VirtualLayout()   {
}
