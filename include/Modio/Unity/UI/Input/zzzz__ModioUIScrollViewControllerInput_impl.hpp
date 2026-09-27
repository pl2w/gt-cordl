#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIScrollViewControllerInput.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIScrollViewControllerInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::*)()>(&::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9fb6994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::*)()>(&::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fb69f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::*)()>(&::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fb6a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::*)()>(&::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fb6ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__scrollRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollRect;
}
constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__scrollRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollRect;
}
constexpr void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_set__scrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollRect = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__cachedPointerEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPointerEventData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__cachedPointerEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPointerEventData;
}
constexpr void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_set__cachedPointerEventData(::UnityEngine::EventSystems::PointerEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPointerEventData = value;
}
constexpr float_t& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__inputSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSpeed;
}
constexpr float_t const& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__inputSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSpeed;
}
constexpr void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_set__inputSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputSpeed = value;
}
constexpr bool& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__resetPositionOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPositionOnEnable;
}
constexpr bool const& Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_get__resetPositionOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPositionOnEnable;
}
constexpr void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::__cordl_internal_set__resetPositionOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetPositionOnEnable = value;
}
inline void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput* Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIScrollViewControllerInput::ModioUIScrollViewControllerInput()   {
}
