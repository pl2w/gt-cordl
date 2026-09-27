#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIMonetizationHider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMonetizationHider_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)()>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9fba984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)()>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::OnDestroy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9fbaa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider.OnOfflineStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)(bool)>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::OnOfflineStatusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbab7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnOfflineStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider.OnPluginInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)()>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::OnPluginInitialized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fbabc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider.ChangeActiveStateIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)()>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::ChangeActiveStateIfNeeded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fbab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"ChangeActiveStateIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIMonetizationHider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIMonetizationHider::*)()>(&::Modio::Unity::UI::Components::ModioUIMonetizationHider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_get__isOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOffline;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_get__isOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOffline;
}
constexpr void Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_set__isOffline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOffline = value;
}
constexpr bool& Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_get__isMonetizationDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMonetizationDisabled;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_get__isMonetizationDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMonetizationDisabled;
}
constexpr void Modio::Unity::UI::Components::ModioUIMonetizationHider::__cordl_internal_set__isMonetizationDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMonetizationDisabled = value;
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::OnOfflineStatusChanged(bool  isOffline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnOfflineStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOffline);
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::OnPluginInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"OnPluginInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::ChangeActiveStateIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {"ChangeActiveStateIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIMonetizationHider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIMonetizationHider* Modio::Unity::UI::Components::ModioUIMonetizationHider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIMonetizationHider*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIMonetizationHider::ModioUIMonetizationHider()   {
}
