#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioGridNavigation.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioGridNavigation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9fb0a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.SetLayoutHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fb0b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"SetLayoutHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.SetLayoutVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fb0b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"SetLayoutVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::LateUpdate)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x9fb0b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::OnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fb2504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.RecalculateNavigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::RecalculateNavigation)> {
  constexpr static std::size_t size = 0xf80;
  constexpr static std::size_t addrs = 0x9fb1584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"RecalculateNavigation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.NeedsNavigationCorrection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::NeedsNavigationCorrection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fad1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"NeedsNavigationCorrection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.IsToTheRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*)>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::IsToTheRight)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9fb2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"IsToTheRight", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation.GetNeighbourInDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Selectable> (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)(::UnityEngine::EventSystems::MoveDirection)>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::GetNeighbourInDir)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9fb2670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"GetNeighbourInDir", {}, {::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioGridNavigation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioGridNavigation::*)()>(&::Modio::Unity::UI::Navigation::ModioGridNavigation::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb27f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__getSelectablesInChildrensChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getSelectablesInChildrensChildren;
}
constexpr bool const& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__getSelectablesInChildrensChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getSelectablesInChildrensChildren;
}
constexpr void Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_set__getSelectablesInChildrensChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getSelectablesInChildrensChildren = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__fallbackSelectionToIfNoValidChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackSelectionToIfNoValidChildren;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__fallbackSelectionToIfNoValidChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackSelectionToIfNoValidChildren;
}
constexpr void Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_set__fallbackSelectionToIfNoValidChildren(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackSelectionToIfNoValidChildren = value;
}
constexpr bool& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__selectChildImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectChildImmediately;
}
constexpr bool const& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__selectChildImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectChildImmediately;
}
constexpr void Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_set__selectChildImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectChildImmediately = value;
}
constexpr bool& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__needsDelayedNavigationCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsDelayedNavigationCorrection;
}
constexpr bool const& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__needsDelayedNavigationCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsDelayedNavigationCorrection;
}
constexpr void Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_set__needsDelayedNavigationCorrection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needsDelayedNavigationCorrection = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__lastSelectedGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSelectedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_get__lastSelectedGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSelectedGameObject;
}
constexpr void Modio::Unity::UI::Navigation::ModioGridNavigation::__cordl_internal_set__lastSelectedGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSelectedGameObject = value;
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::setStaticF_PrevRow(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*, "PrevRow", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>* Modio::Unity::UI::Navigation::ModioGridNavigation::getStaticF_PrevRow()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::UI::Selectable>>*, "PrevRow", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>();
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::setStaticF_ReusedSelectables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*, "ReusedSelectables", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* Modio::Unity::UI::Navigation::ModioGridNavigation::getStaticF_ReusedSelectables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>*, "ReusedSelectables", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>();
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::setStaticF_PrevCorners(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "PrevCorners", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> Modio::Unity::UI::Navigation::ModioGridNavigation::getStaticF_PrevCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "PrevCorners", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>();
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::setStaticF_TransCorners(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "TransCorners", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> Modio::Unity::UI::Navigation::ModioGridNavigation::getStaticF_TransCorners()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "TransCorners", ::Modio::Unity::UI::Navigation::ModioGridNavigation*>();
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"SetLayoutHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"SetLayoutVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::RecalculateNavigation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"RecalculateNavigation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::NeedsNavigationCorrection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"NeedsNavigationCorrection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Navigation::ModioGridNavigation::IsToTheRight(::UnityEngine::RectTransform*  prevRectTransform, ::UnityEngine::RectTransform*  rectTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"IsToTheRight", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prevRectTransform, rectTransform);
}
inline ::UnityW<::UnityEngine::UI::Selectable> Modio::Unity::UI::Navigation::ModioGridNavigation::GetNeighbourInDir(::UnityEngine::EventSystems::MoveDirection  moveDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {"GetNeighbourInDir", {}, {::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Selectable>>(this, ___internal_method, moveDirection);
}
inline void Modio::Unity::UI::Navigation::ModioGridNavigation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioGridNavigation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Navigation::ModioGridNavigation* Modio::Unity::UI::Navigation::ModioGridNavigation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Navigation::ModioGridNavigation*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr  Modio::Unity::UI::Navigation::ModioGridNavigation::operator ::UnityEngine::UI::ILayoutController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* Modio::Unity::UI::Navigation::ModioGridNavigation::i___UnityEngine__UI__ILayoutController() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Navigation::ModioGridNavigation::ModioGridNavigation()   {
}
