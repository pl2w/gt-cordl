#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/WeightedTransform.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__WeightedTransform_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::WeightedTransform.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::WeightedTransform::*)(::UnityEngine::Animations::Rigging::WeightedTransform)>(&::UnityEngine::Animations::Rigging::WeightedTransform::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae7e284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::WeightedTransform>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::WeightedTransform>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Animations::Rigging::WeightedTransform::Equals(::UnityEngine::Animations::Rigging::WeightedTransform  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::WeightedTransform>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::WeightedTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr  UnityEngine::Animations::Rigging::WeightedTransform::operator ::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>* UnityEngine::Animations::Rigging::WeightedTransform::i___System__IEquatable_1___UnityEngine__Animations__Rigging__WeightedTransform_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::Rigging::WeightedTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::WeightedTransform::WeightedTransform(::UnityW<::UnityEngine::Transform>  transform, float_t  weight) noexcept  {
this->transform = transform;
this->weight = weight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::WeightedTransform::WeightedTransform()   {
}
