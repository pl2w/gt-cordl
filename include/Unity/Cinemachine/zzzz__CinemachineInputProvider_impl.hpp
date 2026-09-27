#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputProvider_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputProvider_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineInputProvider::*)(int32_t)>(&::Unity::Cinemachine::CinemachineInputProvider::GetAxisValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaed3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider.ResolveForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::Unity::Cinemachine::CinemachineInputProvider::*)(int32_t, ::UnityEngine::InputSystem::InputActionReference*)>(&::Unity::Cinemachine::CinemachineInputProvider::ResolveForPlayer)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xaed3970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {"ResolveForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputProvider::*)()>(&::Unity::Cinemachine::CinemachineInputProvider::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed3e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputProvider::*)()>(&::Unity::Cinemachine::CinemachineInputProvider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed3e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider._ResolveForPlayer_g__GetFirstMatch_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::by_ref<::UnityEngine::InputSystem::Users::InputUser>, ::UnityEngine::InputSystem::InputActionReference*)>(&::Unity::Cinemachine::CinemachineInputProvider::_ResolveForPlayer_g__GetFirstMatch_7_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaed3d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {"<ResolveForPlayer>g__GetFirstMatch|7_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Users::InputUser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_PlayerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIndex;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_PlayerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerIndex;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_set_PlayerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerIndex = value;
}
constexpr bool& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_AutoEnableInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoEnableInputs;
}
constexpr bool const& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_AutoEnableInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoEnableInputs;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_set_AutoEnableInputs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoEnableInputs = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_XYAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XYAxis;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_XYAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XYAxis;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_set_XYAxis(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XYAxis = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_ZAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_ZAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZAxis;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_set_ZAxis(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZAxis = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*>& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_m_cachedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedActions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*> const& Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_get_m_cachedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cachedActions;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider::__cordl_internal_set_m_cachedActions(::ArrayW<::UnityEngine::InputSystem::InputAction*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cachedActions = value;
}
inline float_t Unity::Cinemachine::CinemachineInputProvider::GetAxisValue(int32_t  axis)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline ::UnityEngine::InputSystem::InputAction* Unity::Cinemachine::CinemachineInputProvider::ResolveForPlayer(int32_t  axis, ::UnityEngine::InputSystem::InputActionReference*  actionRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {"ResolveForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, axis, actionRef);
}
inline void Unity::Cinemachine::CinemachineInputProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineInputProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* Unity::Cinemachine::CinemachineInputProvider::_ResolveForPlayer_g__GetFirstMatch_7_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputSystem::Users::InputUser>  user, ::UnityEngine::InputSystem::InputActionReference*  aRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider*>(),
                        {"<ResolveForPlayer>g__GetFirstMatch|7_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Users::InputUser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, user, aRef);
}
inline ::Unity::Cinemachine::CinemachineInputProvider* Unity::Cinemachine::CinemachineInputProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineInputProvider*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IInputAxisProvider"
constexpr  Unity::Cinemachine::CinemachineInputProvider::operator ::Unity::Cinemachine::AxisState_IInputAxisProvider*() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::AxisState_IInputAxisProvider"
constexpr ::Unity::Cinemachine::AxisState_IInputAxisProvider* Unity::Cinemachine::CinemachineInputProvider::i___Unity__Cinemachine__AxisState_IInputAxisProvider() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputProvider::CinemachineInputProvider()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::*)()>(&::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed3e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0._ResolveForPlayer_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::*)(::UnityEngine::InputSystem::InputAction*)>(&::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::_ResolveForPlayer_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaed3e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*>(),
                        {"<ResolveForPlayer>b__1", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::__cordl_internal_get_aRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aRef;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::__cordl_internal_get_aRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aRef;
}
constexpr void Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::__cordl_internal_set_aRef(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aRef = value;
}
inline void Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::_ResolveForPlayer_b__1(::UnityEngine::InputSystem::InputAction*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*>(),
                        {"<ResolveForPlayer>b__1", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0* Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0::CinemachineInputProvider___c__DisplayClass7_0()   {
}
