#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/ProcessAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__ProcessAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x5f224f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f19a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider* Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr  Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider::ProcessAttributeProvider()   {
}
