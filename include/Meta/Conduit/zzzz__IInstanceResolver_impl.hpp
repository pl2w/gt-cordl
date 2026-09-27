#pragma once
// IWYU pragma private; include "Meta/Conduit/IInstanceResolver.hpp"
#include "Meta/Conduit/zzzz__IInstanceResolver_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::IInstanceResolver.GetObjectsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::Meta::Conduit::IInstanceResolver::*)(::System::Type*)>(&::Meta::Conduit::IInstanceResolver::GetObjectsOfType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IInstanceResolver*>(),
                    {::i2c::class_of<::Meta::Conduit::IInstanceResolver*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Meta::Conduit::IInstanceResolver::GetObjectsOfType(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IInstanceResolver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method, type);
}
