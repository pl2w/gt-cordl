#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DPrioritySelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Axis1DPrioritySelector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/zzzz__Axis1DPrioritySelector_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa407fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa408160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4082cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::Value)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa408320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.GetActiveAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::GetActiveAxis)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa407fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"GetActiveAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector.InjectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector::*)(::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>, ::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DPrioritySelector::InjectAll)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa4083c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"InjectAll", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4084f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get__axisData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisData;
}
constexpr ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*> const& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get__axisData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisData;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_set__axisData(::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisData = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get__fallbackIfNoMatchAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackIfNoMatchAxis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get__fallbackIfNoMatchAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackIfNoMatchAxis;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_set__fallbackIfNoMatchAxis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackIfNoMatchAxis = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get_FallbackIfNoMatchAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackIfNoMatchAxis;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get_FallbackIfNoMatchAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackIfNoMatchAxis;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_set_FallbackIfNoMatchAxis(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FallbackIfNoMatchAxis = value;
}
constexpr ::Oculus::Interaction::Axis1DPrioritySelector_AxisData*& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get_ActiveAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveAxis;
}
constexpr ::Oculus::Interaction::Axis1DPrioritySelector_AxisData* const& Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_get_ActiveAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveAxis;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector::__cordl_internal_set_ActiveAxis(::Oculus::Interaction::Axis1DPrioritySelector_AxisData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveAxis = value;
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Axis1DPrioritySelector::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DPrioritySelector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DPrioritySelector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Axis1DPrioritySelector::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Axis1DPrioritySelector::GetActiveAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"GetActiveAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DPrioritySelector::InjectAll(::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  axisData, ::Oculus::Interaction::Input::IAxis1D*  fallbackIfNoMatchAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {"InjectAll", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axisData, fallbackIfNoMatchAxis);
}
inline void Oculus::Interaction::Axis1DPrioritySelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Axis1DPrioritySelector* Oculus::Interaction::Axis1DPrioritySelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Axis1DPrioritySelector*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::Axis1DPrioritySelector::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Axis1DPrioritySelector::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Axis1DPrioritySelector::Axis1DPrioritySelector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector_AxisData.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector_AxisData::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector_AxisData::Initialize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa408218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector_AxisData.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector_AxisData::*)(::UnityEngine::Component*)>(&::Oculus::Interaction::Axis1DPrioritySelector_AxisData::Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {"Validate", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DPrioritySelector_AxisData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DPrioritySelector_AxisData::*)()>(&::Oculus::Interaction::Axis1DPrioritySelector_AxisData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4084f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get_Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_get_Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr void Oculus::Interaction::Axis1DPrioritySelector_AxisData::__cordl_internal_set_Axis(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis = value;
}
inline void Oculus::Interaction::Axis1DPrioritySelector_AxisData::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DPrioritySelector_AxisData::Validate(::UnityEngine::Component*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {"Validate", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Oculus::Interaction::Axis1DPrioritySelector_AxisData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Axis1DPrioritySelector_AxisData* Oculus::Interaction::Axis1DPrioritySelector_AxisData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Axis1DPrioritySelector_AxisData::Axis1DPrioritySelector_AxisData()   {
}
