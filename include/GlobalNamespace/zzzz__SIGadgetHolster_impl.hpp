#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolster.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolster_State_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolster_def.hpp"
#include "GlobalNamespace/zzzz__I_SIDisruptable_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolster_State_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPoint_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolster.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolster::*)()>(&::GlobalNamespace::SIGadgetHolster::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58dfefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolster.Disrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolster::*)(float_t)>(&::GlobalNamespace::SIGadgetHolster::Disrupt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolster::*)()>(&::GlobalNamespace::SIGadgetHolster::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58dff94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_imageMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageMask;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_imageMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageMask;
}
constexpr void GlobalNamespace::SIGadgetHolster::__cordl_internal_set_imageMask(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imageMask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_snapPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_snapPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPoints;
}
constexpr void GlobalNamespace::SIGadgetHolster::__cordl_internal_set_snapPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPoints = value;
}
constexpr ::GlobalNamespace::SIGadgetHolster_State& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SIGadgetHolster_State const& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SIGadgetHolster::__cordl_internal_set_state(::GlobalNamespace::SIGadgetHolster_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_gtPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtPlayer;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GlobalNamespace::SIGadgetHolster::__cordl_internal_get_gtPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtPlayer;
}
constexpr void GlobalNamespace::SIGadgetHolster::__cordl_internal_set_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gtPlayer = value;
}
inline void GlobalNamespace::SIGadgetHolster::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolster::Disrupt(float_t  disruptTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disruptTime);
}
inline void GlobalNamespace::SIGadgetHolster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetHolster* GlobalNamespace::SIGadgetHolster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetHolster*>());
}
/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr  GlobalNamespace::SIGadgetHolster::operator ::GlobalNamespace::I_SIDisruptable*() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* GlobalNamespace::SIGadgetHolster::i___GlobalNamespace__I_SIDisruptable() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetHolster::SIGadgetHolster()   {
}
