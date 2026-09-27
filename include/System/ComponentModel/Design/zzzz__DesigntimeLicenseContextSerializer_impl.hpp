#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/DesigntimeLicenseContextSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/Design/zzzz__DesigntimeLicenseContextSerializer_def.hpp"
#include "System/ComponentModel/Design/zzzz__RuntimeLicenseContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::DesigntimeLicenseContextSerializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::StringW, ::System::ComponentModel::Design::RuntimeLicenseContext*)>(&::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xad99410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::Design::RuntimeLicenseContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::DesigntimeLicenseContextSerializer::Deserialize(::System::IO::Stream*  o, ::StringW  cryptoKey, ::System::ComponentModel::Design::RuntimeLicenseContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::DesigntimeLicenseContextSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ComponentModel::Design::RuntimeLicenseContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o, cryptoKey, context);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::DesigntimeLicenseContextSerializer::DesigntimeLicenseContextSerializer()   {
}
