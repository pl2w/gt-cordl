#pragma once
// IWYU pragma private; include "Oculus/Interaction/CandidateComparer_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__CandidateComparer_1_def.hpp"
#include "Oculus/Interaction/zzzz__ICandidateComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline int32_t Oculus::Interaction::CandidateComparer_1<T>::Compare(::System::Object*  a, ::System::Object*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CandidateComparer_1<T>*>(),
                        {"Compare", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template<typename T>
inline int32_t Oculus::Interaction::CandidateComparer_1<T>::Compare(T  a, T  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CandidateComparer_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template<typename T>
inline void Oculus::Interaction::CandidateComparer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CandidateComparer_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Oculus::Interaction::CandidateComparer_1<T>* Oculus::Interaction::CandidateComparer_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::CandidateComparer_1<T>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ICandidateComparer"
template<typename T>
constexpr  Oculus::Interaction::CandidateComparer_1<T>::operator ::Oculus::Interaction::ICandidateComparer*() noexcept {
return static_cast<::Oculus::Interaction::ICandidateComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICandidateComparer"
template<typename T>
constexpr ::Oculus::Interaction::ICandidateComparer* Oculus::Interaction::CandidateComparer_1<T>::i___Oculus__Interaction__ICandidateComparer() noexcept {
return static_cast<::Oculus::Interaction::ICandidateComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Interaction::CandidateComparer_1<T>::CandidateComparer_1()   {
}
