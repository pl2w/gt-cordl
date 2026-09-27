#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggableAttribute.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_DebuggingModes_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_DebuggingModes_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggableAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DebuggableAttribute::*)(::GlobalNamespace::DebuggableAttribute_DebuggingModes)>(&::System::Diagnostics::DebuggableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa25e298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::DebuggableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::DebuggableAttribute_DebuggingModes>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes& System::Diagnostics::DebuggableAttribute::__cordl_internal_get_m_debuggingModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_debuggingModes;
}
constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes const& System::Diagnostics::DebuggableAttribute::__cordl_internal_get_m_debuggingModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_debuggingModes;
}
constexpr void System::Diagnostics::DebuggableAttribute::__cordl_internal_set_m_debuggingModes(::GlobalNamespace::DebuggableAttribute_DebuggingModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_debuggingModes = value;
}
inline void System::Diagnostics::DebuggableAttribute::_ctor(::GlobalNamespace::DebuggableAttribute_DebuggingModes  modes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::DebuggableAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::DebuggableAttribute_DebuggingModes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modes);
}
inline ::System::Diagnostics::DebuggableAttribute* System::Diagnostics::DebuggableAttribute::New_ctor(::GlobalNamespace::DebuggableAttribute_DebuggingModes  modes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DebuggableAttribute*>(modes));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggableAttribute::DebuggableAttribute()   {
}
