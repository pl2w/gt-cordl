#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallResetGame.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallResetGame_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)()>(&::GlobalNamespace::MonkeBallResetGame::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57b0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)()>(&::GlobalNamespace::MonkeBallResetGame::Tick)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57b090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame.ToggleReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)(bool, int32_t, bool)>(&::GlobalNamespace::MonkeBallResetGame::ToggleReset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57ae550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"ToggleReset", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame.ToggleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)(bool, int32_t)>(&::GlobalNamespace::MonkeBallResetGame::ToggleButton)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57b095c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"ToggleButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)()>(&::GlobalNamespace::MonkeBallResetGame::OnSelect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57b09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"OnSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallResetGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallResetGame::*)()>(&::GlobalNamespace::MonkeBallResetGame::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57b0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__resetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__resetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetButton;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set__resetButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetButton = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set_button(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_buttonPressOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_buttonPressOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressOffset;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set_buttonPressOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__buttonOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__buttonOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonOrigin;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set__buttonOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonOrigin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_teamMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_teamMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_neutralMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_neutralMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neutralMaterial = value;
}
constexpr int32_t& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_allowedTeamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedTeamId;
}
constexpr int32_t const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get_allowedTeamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowedTeamId;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set_allowedTeamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowedTeamId = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__resetLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__resetLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetLabel;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set__resetLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetLabel = value;
}
constexpr bool& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr bool const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set__cooldown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldown = value;
}
constexpr float_t& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__cooldownTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownTimer;
}
constexpr float_t const& GlobalNamespace::MonkeBallResetGame::__cordl_internal_get__cooldownTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownTimer;
}
constexpr void GlobalNamespace::MonkeBallResetGame::__cordl_internal_set__cooldownTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldownTimer = value;
}
inline void GlobalNamespace::MonkeBallResetGame::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallResetGame::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallResetGame::ToggleReset(bool  toggle, int32_t  teamId, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"ToggleReset", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle, teamId, force);
}
inline void GlobalNamespace::MonkeBallResetGame::ToggleButton(bool  toggle, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"ToggleButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle, teamId);
}
inline void GlobalNamespace::MonkeBallResetGame::OnSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {"OnSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallResetGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallResetGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallResetGame* GlobalNamespace::MonkeBallResetGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallResetGame*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallResetGame::MonkeBallResetGame()   {
}
