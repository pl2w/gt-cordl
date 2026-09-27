#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisReader.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisReader_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_Hints_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisReader.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::IInputAxisReader::*)(::UnityEngine::Object*, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints)>(&::Unity::Cinemachine::IInputAxisReader::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisReader*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisReader*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::IInputAxisReader::GetValue(::UnityEngine::Object*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisReader*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context, hint);
}
