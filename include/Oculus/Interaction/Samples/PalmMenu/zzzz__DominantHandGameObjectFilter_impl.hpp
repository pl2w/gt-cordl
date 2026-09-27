#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/DominantHandGameObjectFilter.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/PalmMenu/zzzz__DominantHandGameObjectFilter_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IGameObjectFilter_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::*)()>(&::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::get_LeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter.set_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::set_LeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"set_LeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::*)()>(&::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa440df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::Filter)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa440f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::*)()>(&::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa440fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__leftHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHandedGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandedGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHandedGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandedGameObjects;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__leftHandedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandedGameObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__rightHandedGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandedGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__rightHandedGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandedGameObjects;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__rightHandedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandedGameObjects = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__LeftHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__LeftHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftHand_k__BackingField;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__LeftHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LeftHand_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHandedGameObjectSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandedGameObjectSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__leftHandedGameObjectSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandedGameObjectSet;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__leftHandedGameObjectSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandedGameObjectSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__rightHandedGameObjectSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandedGameObjectSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_get__rightHandedGameObjectSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandedGameObjectSet;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::__cordl_internal_set__rightHandedGameObjectSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandedGameObjectSet = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::set_LeftHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"set_LeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::Filter(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {"Filter", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline void Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter* Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IGameObjectFilter"
constexpr  Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::operator ::Oculus::Interaction::IGameObjectFilter*() noexcept {
return static_cast<::Oculus::Interaction::IGameObjectFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IGameObjectFilter"
constexpr ::Oculus::Interaction::IGameObjectFilter* Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::i___Oculus__Interaction__IGameObjectFilter() noexcept {
return static_cast<::Oculus::Interaction::IGameObjectFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter::DominantHandGameObjectFilter()   {
}
