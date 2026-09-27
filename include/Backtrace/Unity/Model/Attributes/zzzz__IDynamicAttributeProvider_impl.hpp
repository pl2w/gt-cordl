#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/IDynamicAttributeProvider.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
