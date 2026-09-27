#pragma once
// IWYU pragma private; include "System/ComponentModel/SRCategoryAttribute.hpp"
#include "System/ComponentModel/zzzz__CategoryAttribute_impl.hpp"
#include "System/ComponentModel/zzzz__SRCategoryAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SRCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::SRCategoryAttribute::*)(::StringW)>(&::System::ComponentModel::SRCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad98bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SRCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::SRCategoryAttribute::_ctor(::StringW  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::SRCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::System::ComponentModel::SRCategoryAttribute* System::ComponentModel::SRCategoryAttribute::New_ctor(::StringW  category)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::SRCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SRCategoryAttribute::SRCategoryAttribute()   {
}
