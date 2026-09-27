#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateGO.hpp"
#include "GlobalNamespace/zzzz__ActivateGO_ActivateGOMode_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ActivateGO_def.hpp"
#include "GlobalNamespace/zzzz__ActivateGO_ActivateGOMode_def.hpp"
#include "GlobalNamespace/zzzz__ActivateGO__SetGOsActive_d__13_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)()>(&::GlobalNamespace::ActivateGO::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55e431c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)()>(&::GlobalNamespace::ActivateGO::OnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55e4524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)()>(&::GlobalNamespace::ActivateGO::OnDestroy)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55e4648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.OnFlagChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)(::GlobalNamespace::PlayerPrefFlags_Flag, bool)>(&::GlobalNamespace::ActivateGO::OnFlagChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55e476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnFlagChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.SetGOsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)(int32_t)>(&::GlobalNamespace::ActivateGO::SetGOsActive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55e446c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"SetGOsActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO.toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, bool)>(&::GlobalNamespace::ActivateGO::toggle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55e479c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"toggle", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActivateGO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActivateGO::*)()>(&::GlobalNamespace::ActivateGO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ActivateGO::__cordl_internal_get_targetGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ActivateGO::__cordl_internal_get_targetGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetGO;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_targetGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetGO = value;
}
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag& GlobalNamespace::ActivateGO::__cordl_internal_get_flag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag const& GlobalNamespace::ActivateGO::__cordl_internal_get_flag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_flag(::GlobalNamespace::PlayerPrefFlags_Flag  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flag = value;
}
constexpr bool& GlobalNamespace::ActivateGO::__cordl_internal_get_invertFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertFlag;
}
constexpr bool const& GlobalNamespace::ActivateGO::__cordl_internal_get_invertFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertFlag;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_invertFlag(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertFlag = value;
}
constexpr int32_t& GlobalNamespace::ActivateGO::__cordl_internal_get_flashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashes;
}
constexpr int32_t const& GlobalNamespace::ActivateGO::__cordl_internal_get_flashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashes;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_flashes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashes = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ActivateGO::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ActivateGO::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr ::GlobalNamespace::ActivateGO_ActivateGOMode& GlobalNamespace::ActivateGO::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::ActivateGO_ActivateGOMode const& GlobalNamespace::ActivateGO::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_mode(::GlobalNamespace::ActivateGO_ActivateGOMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr bool& GlobalNamespace::ActivateGO::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::ActivateGO::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr bool& GlobalNamespace::ActivateGO::__cordl_internal_get_flashing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashing;
}
constexpr bool const& GlobalNamespace::ActivateGO::__cordl_internal_get_flashing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashing;
}
constexpr void GlobalNamespace::ActivateGO::__cordl_internal_set_flashing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashing = value;
}
inline void GlobalNamespace::ActivateGO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ActivateGO::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ActivateGO::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ActivateGO::OnFlagChange(::GlobalNamespace::PlayerPrefFlags_Flag  f, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"OnFlagChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f, value);
}
inline void GlobalNamespace::ActivateGO::SetGOsActive(int32_t  fls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"SetGOsActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fls);
}
inline void GlobalNamespace::ActivateGO::toggle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {"toggle", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderers, state);
}
inline void GlobalNamespace::ActivateGO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActivateGO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ActivateGO* GlobalNamespace::ActivateGO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActivateGO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActivateGO::ActivateGO()   {
}
