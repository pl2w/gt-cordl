#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapTurnOverrideOnEnable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SnapTurnOverrideOnEnable_def.hpp"
#include "GlobalNamespace/zzzz__ISnapTurnOverride_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnapTurnOverrideOnEnable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapTurnOverrideOnEnable::*)()>(&::GlobalNamespace::SnapTurnOverrideOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b20430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapTurnOverrideOnEnable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapTurnOverrideOnEnable::*)()>(&::GlobalNamespace::SnapTurnOverrideOnEnable::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b20604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapTurnOverrideOnEnable.ISnapTurnOverride_TurnOverrideActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnapTurnOverrideOnEnable::*)()>(&::GlobalNamespace::SnapTurnOverrideOnEnable::ISnapTurnOverride_TurnOverrideActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"ISnapTurnOverride.TurnOverrideActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapTurnOverrideOnEnable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapTurnOverrideOnEnable::*)()>(&::GlobalNamespace::SnapTurnOverrideOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b20638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_get_snapTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_get_snapTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurn;
}
constexpr void GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurn = value;
}
constexpr bool& GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_get_snapTurnOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnOverride;
}
constexpr bool const& GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_get_snapTurnOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnOverride;
}
constexpr void GlobalNamespace::SnapTurnOverrideOnEnable::__cordl_internal_set_snapTurnOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurnOverride = value;
}
inline void GlobalNamespace::SnapTurnOverrideOnEnable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnapTurnOverrideOnEnable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SnapTurnOverrideOnEnable::ISnapTurnOverride_TurnOverrideActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {"ISnapTurnOverride.TurnOverrideActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SnapTurnOverrideOnEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapTurnOverrideOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnapTurnOverrideOnEnable* GlobalNamespace::SnapTurnOverrideOnEnable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnapTurnOverrideOnEnable*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr  GlobalNamespace::SnapTurnOverrideOnEnable::operator ::GlobalNamespace::ISnapTurnOverride*() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* GlobalNamespace::SnapTurnOverrideOnEnable::i___GlobalNamespace__ISnapTurnOverride() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapTurnOverrideOnEnable::SnapTurnOverrideOnEnable()   {
}
