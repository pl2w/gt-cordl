#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/MachineStateAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__MachineStateAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5f220ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::*)()>(&::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f19a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider* Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr  Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::operator ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Attributes::MachineStateAttributeProvider::MachineStateAttributeProvider()   {
}
