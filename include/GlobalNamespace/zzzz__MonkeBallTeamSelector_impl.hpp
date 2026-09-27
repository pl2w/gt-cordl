#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeamSelector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallTeamSelector_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamSelector::*)()>(&::GlobalNamespace::MonkeBallTeamSelector::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57b0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamSelector.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamSelector::*)()>(&::GlobalNamespace::MonkeBallTeamSelector::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57b0e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamSelector.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamSelector::*)()>(&::GlobalNamespace::MonkeBallTeamSelector::OnSelect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"OnSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeamSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeamSelector::*)()>(&::GlobalNamespace::MonkeBallTeamSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_get_teamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr int32_t const& GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_get_teamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr void GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_set_teamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamId = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_get__setTeamButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setTeamButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_get__setTeamButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setTeamButton;
}
constexpr void GlobalNamespace::MonkeBallTeamSelector::__cordl_internal_set__setTeamButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setTeamButton = value;
}
inline void GlobalNamespace::MonkeBallTeamSelector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallTeamSelector::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallTeamSelector::OnSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {"OnSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallTeamSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeamSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallTeamSelector* GlobalNamespace::MonkeBallTeamSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallTeamSelector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallTeamSelector::MonkeBallTeamSelector()   {
}
