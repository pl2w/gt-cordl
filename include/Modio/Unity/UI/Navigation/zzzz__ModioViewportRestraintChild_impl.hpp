#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioViewportRestraintChild.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioViewportRestraintChild_def.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioViewportRestraint_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fb42d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::OnSelect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9fb4394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild.MoveToSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::MoveToSelected)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fb4418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"MoveToSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb450c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_get__overrideFocusTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideFocusTo;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_get__overrideFocusTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overrideFocusTo;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_set__overrideFocusTo(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overrideFocusTo = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>& Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_get__viewportRestraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewportRestraint;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint> const& Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_get__viewportRestraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewportRestraint;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::__cordl_internal_set__viewportRestraint(::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____viewportRestraint = value;
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::MoveToSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {"MoveToSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraintChild::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild* Modio::Unity::UI::Navigation::ModioViewportRestraintChild::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr  Modio::Unity::UI::Navigation::ModioViewportRestraintChild::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* Modio::Unity::UI::Navigation::ModioViewportRestraintChild::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Modio::Unity::UI::Navigation::ModioViewportRestraintChild::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Modio::Unity::UI::Navigation::ModioViewportRestraintChild::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild::ModioViewportRestraintChild()   {
}
