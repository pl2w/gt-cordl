#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1d_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1d_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
template<typename T>
constexpr ::ArrayW<T> const& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
template<typename T>
constexpr void Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_set_m_Data(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
template<typename T>
constexpr ::ArrayW<float_t>& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_Kernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Kernel;
}
template<typename T>
constexpr ::ArrayW<float_t> const& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_Kernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Kernel;
}
template<typename T>
constexpr void Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_set_m_Kernel(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Kernel = value;
}
template<typename T>
constexpr int32_t& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_CurrentPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPos;
}
template<typename T>
constexpr int32_t const& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get_m_CurrentPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentPos;
}
template<typename T>
constexpr void Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_set_m_CurrentPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentPos = value;
}
template<typename T>
constexpr float_t& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get__Sigma_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sigma_k__BackingField;
}
template<typename T>
constexpr float_t const& Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_get__Sigma_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sigma_k__BackingField;
}
template<typename T>
constexpr void Unity::Cinemachine::GaussianWindow1d_1<T>::__cordl_internal_set__Sigma_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sigma_k__BackingField = value;
}
template<typename T>
inline float_t Unity::Cinemachine::GaussianWindow1d_1<T>::get_Sigma()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"get_Sigma", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::set_Sigma(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"set_Sigma", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t Unity::Cinemachine::GaussianWindow1d_1<T>::get_KernelSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"get_KernelSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::GenerateKernel(float_t  sigma, int32_t  maxKernelRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"GenerateKernel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigma, maxKernelRadius);
}
template<typename T>
inline T Unity::Cinemachine::GaussianWindow1d_1<T>::Compute(int32_t  windowPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, windowPos);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigma, maxKernelRadius);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Unity::Cinemachine::GaussianWindow1d_1<T>::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::AddValue(T  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"AddValue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
template<typename T>
inline T Unity::Cinemachine::GaussianWindow1d_1<T>::Filter(T  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"Filter", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, v);
}
template<typename T>
inline T Unity::Cinemachine::GaussianWindow1d_1<T>::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Cinemachine::GaussianWindow1d_1<T>::get_BufferLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"get_BufferLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Unity::Cinemachine::GaussianWindow1d_1<T>::SetBufferValue(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"SetBufferValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline T Unity::Cinemachine::GaussianWindow1d_1<T>::GetBufferValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(),
                        {"GetBufferValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline ::Unity::Cinemachine::GaussianWindow1d_1<T>* Unity::Cinemachine::GaussianWindow1d_1<T>::New_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::GaussianWindow1d_1<T>*>(sigma, maxKernelRadius));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Cinemachine::GaussianWindow1d_1<T>::GaussianWindow1d_1()   {
}
