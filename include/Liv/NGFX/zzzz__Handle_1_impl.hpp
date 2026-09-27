#pragma once
// IWYU pragma private; include "Liv/NGFX/Handle_1.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NGFX/zzzz__Handle_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template<typename T>
constexpr T& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
template<typename T>
constexpr T const& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_data;
}
template<typename T>
constexpr void Liv::NGFX::Handle_1<T>::__cordl_internal_set_m_data(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_data = value;
}
template<typename T>
constexpr ::System::Runtime::InteropServices::GCHandle& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handle;
}
template<typename T>
constexpr ::System::Runtime::InteropServices::GCHandle const& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handle;
}
template<typename T>
constexpr void Liv::NGFX::Handle_1<T>::__cordl_internal_set_m_handle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_handle = value;
}
template<typename T>
constexpr bool& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
template<typename T>
constexpr bool const& Liv::NGFX::Handle_1<T>::__cordl_internal_get_m_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
template<typename T>
constexpr void Liv::NGFX::Handle_1<T>::__cordl_internal_set_m_valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_valid = value;
}
template<typename T>
inline void Liv::NGFX::Handle_1<T>::_ctor(T  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Handle_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename T>
inline void Liv::NGFX::Handle_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NGFX::Handle_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::IntPtr Liv::NGFX::Handle_1<T>::ptr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Handle_1<T>*>(),
                        {"ptr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
template<typename T>
inline T Liv::NGFX::Handle_1<T>::data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Handle_1<T>*>(),
                        {"data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Liv::NGFX::Handle_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Handle_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Liv::NGFX::Handle_1<T>* Liv::NGFX::Handle_1<T>::New_ctor(T  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::Handle_1<T>*>(data));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Liv::NGFX::Handle_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Liv::NGFX::Handle_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Liv::NGFX::Handle_1<T>::Handle_1()   {
}
