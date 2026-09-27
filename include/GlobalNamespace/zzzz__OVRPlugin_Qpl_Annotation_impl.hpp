#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Annotation.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Variant_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_Builder_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Variant_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Qpl_OVRPlugin_Annotation.get_KeyStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Qpl_OVRPlugin_Annotation::*)()>(&::GlobalNamespace::Qpl_OVRPlugin_Annotation::get_KeyStr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa614104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation>(),
                        {"get_KeyStr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Qpl_OVRPlugin_Annotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Qpl_OVRPlugin_Annotation::*)(uint8_t*, ::GlobalNamespace::Qpl_OVRPlugin_Variant)>(&::GlobalNamespace::Qpl_OVRPlugin_Annotation::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa614160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Variant>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::Qpl_OVRPlugin_Annotation::get_KeyStr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation>(),
                        {"get_KeyStr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::Qpl_OVRPlugin_Annotation::_ctor(uint8_t*  key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Variant>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "Key", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "::GlobalNamespace::Qpl_OVRPlugin_Variant", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Qpl_OVRPlugin_Annotation::Qpl_OVRPlugin_Annotation(uint8_t*  Key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  Value) noexcept  {
this->Key = Key;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Qpl_OVRPlugin_Annotation::Qpl_OVRPlugin_Annotation()   {
}
