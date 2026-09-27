#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateFingerVisual.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateFingerVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateFingerVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyBlockEditor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.get_FingersMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::get_FingersMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_FingersMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.set_FingersMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::Input::HandFingerFlags)>(&::Oculus::Interaction::ActiveStateFingerVisual::set_FingersMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_FingersMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.get_GlowLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::get_GlowLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_GlowLerpSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.set_GlowLerpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(float_t)>(&::Oculus::Interaction::ActiveStateFingerVisual::set_GlowLerpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_GlowLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.get_FingerGlowColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::get_FingerGlowColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_FingerGlowColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.set_FingerGlowColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::ActiveStateFingerVisual::set_FingerGlowColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_FingerGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa45346c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4534d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::Update)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa453500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.UpdateGlowValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::ActiveStateFingerVisual::*)(int32_t, float_t)>(&::Oculus::Interaction::ActiveStateFingerVisual::UpdateGlowValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa453730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"UpdateGlowValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.InjectAllActiveStateFingerVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::ActiveStateFingerVisual::InjectAllActiveStateFingerVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4537e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectAllActiveStateFingerVisual", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::ActiveStateFingerVisual::InjectActiveState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa453810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual.InjectHandMaterialPropertyBlockEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&::Oculus::Interaction::ActiveStateFingerVisual::InjectHandMaterialPropertyBlockEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4538dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectHandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4538e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr ::Oculus::Interaction::Input::HandFingerFlags& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingersMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersMask;
}
constexpr ::Oculus::Interaction::Input::HandFingerFlags const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingersMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersMask;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__fingersMask(::Oculus::Interaction::Input::HandFingerFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersMask = value;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__handMaterialPropertyBlockEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__handMaterialPropertyBlockEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handMaterialPropertyBlockEditor;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handMaterialPropertyBlockEditor = value;
}
constexpr float_t& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__glowLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowLerpSpeed;
}
constexpr float_t const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__glowLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____glowLerpSpeed;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__glowLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____glowLerpSpeed = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingerGlowColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingerGlowColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColor;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__fingerGlowColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColor = value;
}
constexpr ::ArrayW<int32_t>& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__handShaderGlowPropertyIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handShaderGlowPropertyIds;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__handShaderGlowPropertyIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handShaderGlowPropertyIds;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__handShaderGlowPropertyIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handShaderGlowPropertyIds = value;
}
constexpr int32_t& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingerGlowColorPropertyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorPropertyId;
}
constexpr int32_t const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__fingerGlowColorPropertyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerGlowColorPropertyId;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__fingerGlowColorPropertyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerGlowColorPropertyId = value;
}
constexpr bool& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__prevActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevActive;
}
constexpr bool const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__prevActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevActive;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__prevActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevActive = value;
}
constexpr bool& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::ActiveStateFingerVisual::get_FingersMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_FingersMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::set_FingersMask(::Oculus::Interaction::Input::HandFingerFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_FingersMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::ActiveStateFingerVisual::get_GlowLerpSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_GlowLerpSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::set_GlowLerpSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_GlowLerpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::ActiveStateFingerVisual::get_FingerGlowColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"get_FingerGlowColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::set_FingerGlowColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"set_FingerGlowColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::ActiveStateFingerVisual::UpdateGlowValue(int32_t  fingerIndex, float_t  targetGlow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"UpdateGlowValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, fingerIndex, targetGlow);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::InjectAllActiveStateFingerVisual(::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectAllActiveStateFingerVisual", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState, handMaterialPropertyBlockEditor);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {"InjectHandMaterialPropertyBlockEditor", {}, {::i2c::type_of<::Oculus::Interaction::MaterialPropertyBlockEditor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handMaterialPropertyBlockEditor);
}
inline void Oculus::Interaction::ActiveStateFingerVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ActiveStateFingerVisual* Oculus::Interaction::ActiveStateFingerVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateFingerVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateFingerVisual::ActiveStateFingerVisual()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)(int32_t)>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4537bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa453a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa453a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa453bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::*)()>(&::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual> const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get_fingerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerIndex;
}
constexpr int32_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get_fingerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerIndex;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set_fingerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerIndex = value;
}
constexpr float_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get_targetGlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetGlow;
}
constexpr float_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get_targetGlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetGlow;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set_targetGlow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetGlow = value;
}
constexpr float_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__startGlow_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startGlow_5__2;
}
constexpr float_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__startGlow_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startGlow_5__2;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set__startGlow_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startGlow_5__2 = value;
}
constexpr float_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
constexpr float_t& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__currentGlow_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGlow_5__4;
}
constexpr float_t const& Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_get__currentGlow_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGlow_5__4;
}
constexpr void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::__cordl_internal_set__currentGlow_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGlow_5__4 = value;
}
inline void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22::ActiveStateFingerVisual__UpdateGlowValue_d__22()   {
}
