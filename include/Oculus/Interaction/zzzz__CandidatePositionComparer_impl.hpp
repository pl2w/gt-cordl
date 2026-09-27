#pragma once
// IWYU pragma private; include "Oculus/Interaction/CandidatePositionComparer.hpp"
#include "Oculus/Interaction/zzzz__CandidateComparer_1_impl.hpp"
#include "Oculus/Interaction/zzzz__CandidatePositionComparer_def.hpp"
#include "Oculus/Interaction/zzzz__ICandidatePosition_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::CandidatePositionComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::CandidatePositionComparer::*)(::Oculus::Interaction::ICandidatePosition*, ::Oculus::Interaction::ICandidatePosition*)>(&::Oculus::Interaction::CandidatePositionComparer::Compare)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa41171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::CandidatePositionComparer*>(),
                    {::i2c::class_of<::Oculus::Interaction::CandidatePositionComparer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::CandidatePositionComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::CandidatePositionComparer::*)()>(&::Oculus::Interaction::CandidatePositionComparer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4118e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CandidatePositionComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::CandidatePositionComparer::__cordl_internal_get__compareOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compareOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::CandidatePositionComparer::__cordl_internal_get__compareOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compareOrigin;
}
constexpr void Oculus::Interaction::CandidatePositionComparer::__cordl_internal_set__compareOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compareOrigin = value;
}
inline int32_t Oculus::Interaction::CandidatePositionComparer::Compare(::Oculus::Interaction::ICandidatePosition*  a, ::Oculus::Interaction::ICandidatePosition*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CandidatePositionComparer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Oculus::Interaction::CandidatePositionComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CandidatePositionComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::CandidatePositionComparer* Oculus::Interaction::CandidatePositionComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::CandidatePositionComparer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::CandidatePositionComparer::CandidatePositionComparer()   {
}
