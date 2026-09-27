#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TypeConverterRegistry_ConverterKey.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_ConverterKey_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TypeConverterRegistry_ConverterKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TypeConverterRegistry_ConverterKey::*)(::System::Type*, ::System::Type*)>(&::GlobalNamespace::TypeConverterRegistry_ConverterKey::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb718464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TypeConverterRegistry_ConverterKey>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TypeConverterRegistry_ConverterKey::_ctor(::System::Type*  source, ::System::Type*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TypeConverterRegistry_ConverterKey>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, destination);
}
// Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TypeConverterRegistry_ConverterKey::TypeConverterRegistry_ConverterKey(::System::Type*  SourceType, ::System::Type*  DestinationType) noexcept  {
this->SourceType = SourceType;
this->DestinationType = DestinationType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TypeConverterRegistry_ConverterKey::TypeConverterRegistry_ConverterKey()   {
}
