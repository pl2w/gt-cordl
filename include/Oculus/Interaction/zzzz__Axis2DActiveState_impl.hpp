#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis2DActiveState.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_CheckComponent_impl.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_ComparisonMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_CheckComponent_def.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_ComparisonMode_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.get_InputAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis2D* (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::get_InputAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_InputAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.set_InputAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::Axis2DActiveState::set_InputAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_InputAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.get_CheckAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Axis2DActiveState_CheckComponent (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::get_CheckAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_CheckAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.set_CheckAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(::GlobalNamespace::Axis2DActiveState_CheckComponent)>(&::Oculus::Interaction::Axis2DActiveState::set_CheckAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_CheckAxis", {}, {::i2c::type_of<::GlobalNamespace::Axis2DActiveState_CheckComponent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.get_Comparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Axis2DActiveState_ComparisonMode (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::get_Comparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_Comparison", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.set_Comparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(::GlobalNamespace::Axis2DActiveState_ComparisonMode)>(&::Oculus::Interaction::Axis2DActiveState::set_Comparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_Comparison", {}, {::i2c::type_of<::GlobalNamespace::Axis2DActiveState_ComparisonMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.get_AbsoluteValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::get_AbsoluteValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_AbsoluteValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.set_AbsoluteValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(bool)>(&::Oculus::Interaction::Axis2DActiveState::set_AbsoluteValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_AbsoluteValues", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(bool)>(&::Oculus::Interaction::Axis2DActiveState::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40af78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa40af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa40afd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa40affc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa40b00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.HandleValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Axis2DActiveState::HandleValueUpdated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa40b0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"HandleValueUpdated", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.CheckGreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Axis2DActiveState::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Axis2DActiveState::CheckGreaterThan)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa40b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"CheckGreaterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState.CheckLessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Axis2DActiveState::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::Axis2DActiveState::CheckLessThan)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa40b100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"CheckLessThan", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis2DActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis2DActiveState::*)()>(&::Oculus::Interaction::Axis2DActiveState::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa40b1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__inputAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputAxis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__inputAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputAxis;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__inputAxis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputAxis = value;
}
constexpr ::Oculus::Interaction::Input::IAxis2D*& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__InputAxis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputAxis_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IAxis2D* const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__InputAxis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputAxis_k__BackingField;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__InputAxis_k__BackingField(::Oculus::Interaction::Input::IAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputAxis_k__BackingField = value;
}
constexpr ::GlobalNamespace::Axis2DActiveState_CheckComponent& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__checkAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAxis;
}
constexpr ::GlobalNamespace::Axis2DActiveState_CheckComponent const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__checkAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAxis;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__checkAxis(::GlobalNamespace::Axis2DActiveState_CheckComponent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkAxis = value;
}
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparison;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__comparison(::GlobalNamespace::Axis2DActiveState_ComparisonMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparison = value;
}
constexpr bool& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__absoluteValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____absoluteValues;
}
constexpr bool const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__absoluteValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____absoluteValues;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__absoluteValues(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____absoluteValues = value;
}
constexpr ::UnityEngine::Vector2& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__thresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresold;
}
constexpr ::UnityEngine::Vector2 const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__thresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresold;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__thresold(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresold = value;
}
constexpr bool& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Axis2DActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Axis2DActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IAxis2D* Oculus::Interaction::Axis2DActiveState::get_InputAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_InputAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis2D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::set_InputAxis(::Oculus::Interaction::Input::IAxis2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_InputAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Axis2DActiveState_CheckComponent Oculus::Interaction::Axis2DActiveState::get_CheckAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_CheckAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Axis2DActiveState_CheckComponent>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::set_CheckAxis(::GlobalNamespace::Axis2DActiveState_CheckComponent  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_CheckAxis", {}, {::i2c::type_of<::GlobalNamespace::Axis2DActiveState_CheckComponent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Axis2DActiveState_ComparisonMode Oculus::Interaction::Axis2DActiveState::get_Comparison()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_Comparison", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Axis2DActiveState_ComparisonMode>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::set_Comparison(::GlobalNamespace::Axis2DActiveState_ComparisonMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_Comparison", {}, {::i2c::type_of<::GlobalNamespace::Axis2DActiveState_ComparisonMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Axis2DActiveState::get_AbsoluteValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_AbsoluteValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::set_AbsoluteValues(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_AbsoluteValues", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Axis2DActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Axis2DActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis2DActiveState::HandleValueUpdated(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"HandleValueUpdated", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Axis2DActiveState::CheckGreaterThan(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"CheckGreaterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Axis2DActiveState::CheckLessThan(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {"CheckLessThan", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Axis2DActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis2DActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Axis2DActiveState* Oculus::Interaction::Axis2DActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Axis2DActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Axis2DActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Axis2DActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Axis2DActiveState::Axis2DActiveState()   {
}
