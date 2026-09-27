#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Descriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__Descriptor_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::Descriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::Descriptor::*)()>(&::GT_CustomMapSupportRuntime::Descriptor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cb6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::Descriptor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GT_CustomMapSupportRuntime::Descriptor::__cordl_internal_get_objectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectName;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::Descriptor::__cordl_internal_get_objectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectName;
}
constexpr void GT_CustomMapSupportRuntime::Descriptor::__cordl_internal_set_objectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectName = value;
}
inline void GT_CustomMapSupportRuntime::Descriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::Descriptor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::GT_CustomMapSupportRuntime::Descriptor* GT_CustomMapSupportRuntime::Descriptor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::Descriptor*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::Descriptor::Descriptor()   {
}
