#pragma once
// IWYU pragma private; include "Modio/Unity/UI/ShowIfAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Modio/Unity/UI/zzzz__ShowIfAttribute_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::ShowIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::ShowIfAttribute::*)(::StringW)>(&::Modio::Unity::UI::ShowIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9dd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::ShowIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::ShowIfAttribute::_ctor(::StringW  predicateName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::ShowIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicateName);
}
inline ::Modio::Unity::UI::ShowIfAttribute* Modio::Unity::UI::ShowIfAttribute::New_ctor(::StringW  predicateName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::ShowIfAttribute*>(predicateName));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::ShowIfAttribute::ShowIfAttribute()   {
}
