#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpTask_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LerpTask_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename T>
constexpr float_t& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_elapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
template<typename T>
constexpr float_t const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_elapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsed;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_elapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsed = value;
}
template<typename T>
constexpr float_t& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
template<typename T>
constexpr float_t const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
template<typename T>
constexpr T& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_lerpFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpFrom;
}
template<typename T>
constexpr T const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_lerpFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpFrom;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_lerpFrom(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpFrom = value;
}
template<typename T>
constexpr T& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_lerpTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpTo;
}
template<typename T>
constexpr T const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_lerpTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpTo;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_lerpTo(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpTo = value;
}
template<typename T>
constexpr ::System::Action_3<T,T,float_t>*& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_onLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLerp;
}
template<typename T>
constexpr ::System::Action_3<T,T,float_t>* const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_onLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLerp;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_onLerp(::System::Action_3<T,T,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLerp = value;
}
template<typename T>
constexpr ::System::Action*& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_onLerpEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLerpEnd;
}
template<typename T>
constexpr ::System::Action* const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_onLerpEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLerpEnd;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_onLerpEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLerpEnd = value;
}
template<typename T>
constexpr bool& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
template<typename T>
constexpr bool const& GlobalNamespace::LerpTask_1<T>::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
template<typename T>
constexpr void GlobalNamespace::LerpTask_1<T>::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
template<typename T>
inline void GlobalNamespace::LerpTask_1<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpTask_1<T>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LerpTask_1<T>::Start(T  from, T  to, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpTask_1<T>*>(),
                        {"Start", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, duration);
}
template<typename T>
inline void GlobalNamespace::LerpTask_1<T>::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpTask_1<T>*>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LerpTask_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpTask_1<T>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LerpTask_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpTask_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::LerpTask_1<T>* GlobalNamespace::LerpTask_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LerpTask_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LerpTask_1<T>::LerpTask_1()   {
}
