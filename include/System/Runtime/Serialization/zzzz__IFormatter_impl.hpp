#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IFormatter.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IFormatter::*)(::System::IO::Stream*)>(&::System::Runtime::Serialization::IFormatter::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::Serialization::IFormatter*>(),
                    {::i2c::class_of<::System::Runtime::Serialization::IFormatter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::Serialization::IFormatter::Deserialize(::System::IO::Stream*  serializationStream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::Serialization::IFormatter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializationStream);
}
