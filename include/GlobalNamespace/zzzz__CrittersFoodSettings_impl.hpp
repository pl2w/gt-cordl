#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersFoodSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersFoodSettings_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersFoodSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFoodSettings::*)()>(&::GlobalNamespace::CrittersFoodSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55ff0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFoodSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFoodSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFoodSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFoodSettings::*)()>(&::GlobalNamespace::CrittersFoodSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ff1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFoodSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__maxFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFood;
}
constexpr float_t const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__maxFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFood;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__maxFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxFood = value;
}
constexpr float_t& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__currentFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFood;
}
constexpr float_t const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__currentFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFood;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__currentFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentFood = value;
}
constexpr float_t& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__startingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingSize;
}
constexpr float_t const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__startingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingSize;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__startingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingSize = value;
}
constexpr float_t& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSize;
}
constexpr float_t const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSize;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__currentSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSize = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__food()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____food;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__food() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____food;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__food(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____food = value;
}
constexpr bool& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__disableWhenEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenEmpty;
}
constexpr bool const& GlobalNamespace::CrittersFoodSettings::__cordl_internal_get__disableWhenEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenEmpty;
}
constexpr void GlobalNamespace::CrittersFoodSettings::__cordl_internal_set__disableWhenEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableWhenEmpty = value;
}
inline void GlobalNamespace::CrittersFoodSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFoodSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersFoodSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFoodSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersFoodSettings* GlobalNamespace::CrittersFoodSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersFoodSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersFoodSettings::CrittersFoodSettings()   {
}
