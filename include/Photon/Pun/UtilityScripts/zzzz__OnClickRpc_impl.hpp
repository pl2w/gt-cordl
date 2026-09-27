#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnClickRpc.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Pun/zzzz__RpcTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_InputButton_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickRpc_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnClickRpc_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc.UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Photon::Pun::UtilityScripts::OnClickRpc::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa73a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc.ClickRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc::ClickRpc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73a7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"ClickRpc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc.ClickFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Photon::Pun::UtilityScripts::OnClickRpc::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc::ClickFlash)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa73a81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"ClickFlash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PointerEventData_InputButton& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr ::GlobalNamespace::PointerEventData_InputButton const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Button;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_Button(::GlobalNamespace::PointerEventData_InputButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Button = value;
}
constexpr ::UnityEngine::KeyCode& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_ModifierKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModifierKey;
}
constexpr ::UnityEngine::KeyCode const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_ModifierKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModifierKey;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_ModifierKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModifierKey = value;
}
constexpr ::Photon::Pun::RpcTarget& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::Photon::Pun::RpcTarget const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_Target(::Photon::Pun::RpcTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_originalMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_originalMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterial;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_originalMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMaterial = value;
}
constexpr ::UnityEngine::Color& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_originalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColor;
}
constexpr ::UnityEngine::Color const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_originalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColor;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_originalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalColor = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_isFlashing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFlashing;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_get_isFlashing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFlashing;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc::__cordl_internal_set_isFlashing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFlashing = value;
}
inline void Photon::Pun::UtilityScripts::OnClickRpc::UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Photon::Pun::UtilityScripts::OnClickRpc::ClickRpc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"ClickRpc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Photon::Pun::UtilityScripts::OnClickRpc::ClickFlash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {"ClickFlash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnClickRpc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnClickRpc* Photon::Pun::UtilityScripts::OnClickRpc::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnClickRpc*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  Photon::Pun::UtilityScripts::OnClickRpc::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* Photon::Pun::UtilityScripts::OnClickRpc::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Photon::Pun::UtilityScripts::OnClickRpc::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Photon::Pun::UtilityScripts::OnClickRpc::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnClickRpc::OnClickRpc()   {
}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)(int32_t)>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa73a888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73a8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa73a8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73aba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa73abac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::*)()>(&::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc> const& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get__wasEmissive_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasEmissive_5__2;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get__wasEmissive_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasEmissive_5__2;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_set__wasEmissive_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasEmissive_5__2 = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get__f_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____f_5__3;
}
constexpr float_t const& Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_get__f_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____f_5__3;
}
constexpr void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::__cordl_internal_set__f_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____f_5__3 = value;
}
inline void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8::OnClickRpc__ClickFlash_d__8()   {
}
