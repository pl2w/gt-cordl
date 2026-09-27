#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_TMPChanged.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_TMPChanged_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_TMPChanged.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVROverlayCanvas_TMPChanged::OnLoad)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa605000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_TMPChanged.OnTextChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::OVROverlayCanvas_TMPChanged::OnTextChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6050c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnTextChanged", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_TMPChanged.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_TMPChanged::*)()>(&::GlobalNamespace::OVROverlayCanvas_TMPChanged::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6051b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_TMPChanged.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_TMPChanged::*)()>(&::GlobalNamespace::OVROverlayCanvas_TMPChanged::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa605248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_TMPChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_TMPChanged::*)()>(&::GlobalNamespace::OVROverlayCanvas_TMPChanged::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6052d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas>& GlobalNamespace::OVROverlayCanvas_TMPChanged::__cordl_internal_get_TargetCanvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCanvas;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas> const& GlobalNamespace::OVROverlayCanvas_TMPChanged::__cordl_internal_get_TargetCanvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetCanvas;
}
constexpr void GlobalNamespace::OVROverlayCanvas_TMPChanged::__cordl_internal_set_TargetCanvas(::UnityW<::GlobalNamespace::OVROverlayCanvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetCanvas = value;
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::setStaticF__textObjectToCanvas(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*, "_textObjectToCanvas", ::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>* GlobalNamespace::OVROverlayCanvas_TMPChanged::getStaticF__textObjectToCanvas()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::OVROverlayCanvas>>*, "_textObjectToCanvas", ::GlobalNamespace::OVROverlayCanvas_TMPChanged*>();
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::OnTextChanged(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnTextChanged", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas_TMPChanged::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayCanvas_TMPChanged* GlobalNamespace::OVROverlayCanvas_TMPChanged::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvas_TMPChanged*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas_TMPChanged::OVROverlayCanvas_TMPChanged()   {
}
