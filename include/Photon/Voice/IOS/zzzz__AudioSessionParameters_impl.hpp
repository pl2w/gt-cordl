#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionParameters.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategoryOption_impl.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategory_impl.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionMode_impl.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionParameters_def.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategoryOption_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IOS::AudioSessionParameters.CategoryOptionsToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::IOS::AudioSessionParameters::*)()>(&::Photon::Voice::IOS::AudioSessionParameters::CategoryOptionsToInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa75facc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::IOS::AudioSessionParameters>(),
                        {"CategoryOptionsToInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IOS::AudioSessionParameters.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IOS::AudioSessionParameters::*)()>(&::Photon::Voice::IOS::AudioSessionParameters::ToString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa75fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IOS::AudioSessionParameters>(),
                    {::i2c::class_of<::Photon::Voice::IOS::AudioSessionParameters>(), 3}
                ));
    return ___internal_method;
  }
};
inline int32_t Photon::Voice::IOS::AudioSessionParameters::CategoryOptionsToInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::IOS::AudioSessionParameters>(),
                        {"CategoryOptionsToInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Photon::Voice::IOS::AudioSessionParameters::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IOS::AudioSessionParameters>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Category", ty: "::Photon::Voice::IOS::AudioSessionCategory", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mode", ty: "::Photon::Voice::IOS::AudioSessionMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CategoryOptions", ty: "::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::IOS::AudioSessionParameters::AudioSessionParameters(::Photon::Voice::IOS::AudioSessionCategory  Category, ::Photon::Voice::IOS::AudioSessionMode  Mode, ::ArrayW<::Photon::Voice::IOS::AudioSessionCategoryOption>  CategoryOptions) noexcept  {
this->Category = Category;
this->Mode = Mode;
this->CategoryOptions = CategoryOptions;
}
// Ctor Parameters []
constexpr ::Photon::Voice::IOS::AudioSessionParameters::AudioSessionParameters()   {
}
