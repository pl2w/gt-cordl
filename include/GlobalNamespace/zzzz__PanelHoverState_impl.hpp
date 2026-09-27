#pragma once
// IWYU pragma private; include "GlobalNamespace/PanelHoverState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PanelHoverState_def.hpp"
#include "GlobalNamespace/zzzz__PanelHoverState_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState.get_Hovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PanelHoverState::*)()>(&::GlobalNamespace::PanelHoverState::get_Hovered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"get_Hovered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState.add_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::PanelHoverState::add_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa427e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState.remove_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::PanelHoverState::remove_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa427ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState::*)()>(&::GlobalNamespace::PanelHoverState::Update)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa427f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState::*)()>(&::GlobalNamespace::PanelHoverState::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4280ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*& GlobalNamespace::PanelHoverState::__cordl_internal_get_grabbables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>* const& GlobalNamespace::PanelHoverState::__cordl_internal_get_grabbables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbables;
}
constexpr void GlobalNamespace::PanelHoverState::__cordl_internal_set_grabbables(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbables = value;
}
constexpr bool& GlobalNamespace::PanelHoverState::__cordl_internal_get_hovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hovered;
}
constexpr bool const& GlobalNamespace::PanelHoverState::__cordl_internal_get_hovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hovered;
}
constexpr void GlobalNamespace::PanelHoverState::__cordl_internal_set_hovered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hovered = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::PanelHoverState::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::PanelHoverState::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr void GlobalNamespace::PanelHoverState::__cordl_internal_set_WhenStateChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
inline bool GlobalNamespace::PanelHoverState::get_Hovered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"get_Hovered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PanelHoverState::add_WhenStateChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PanelHoverState::remove_WhenStateChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PanelHoverState::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PanelHoverState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PanelHoverState* GlobalNamespace::PanelHoverState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PanelHoverState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PanelHoverState::PanelHoverState()   {
}
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState___c::*)()>(&::GlobalNamespace::PanelHoverState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa428290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PanelHoverState___c.__ctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PanelHoverState___c::*)(bool)>(&::GlobalNamespace::PanelHoverState___c::__ctor_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa428298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PanelHoverState___c::setStaticF___9(::GlobalNamespace::PanelHoverState___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PanelHoverState___c*, "<>9", ::GlobalNamespace::PanelHoverState___c*>(std::forward<::GlobalNamespace::PanelHoverState___c*>(value));
}
inline ::GlobalNamespace::PanelHoverState___c* GlobalNamespace::PanelHoverState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PanelHoverState___c*, "<>9", ::GlobalNamespace::PanelHoverState___c*>();
}
inline void GlobalNamespace::PanelHoverState___c::setStaticF___9__8_0(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__8_0", ::GlobalNamespace::PanelHoverState___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::PanelHoverState___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__8_0", ::GlobalNamespace::PanelHoverState___c*>();
}
inline void GlobalNamespace::PanelHoverState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PanelHoverState___c::__ctor_b__8_0(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PanelHoverState___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::GlobalNamespace::PanelHoverState___c* GlobalNamespace::PanelHoverState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PanelHoverState___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PanelHoverState___c::PanelHoverState___c()   {
}
