#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataLocalization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TitleDataLocalization_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TitleDataLocalization.GetLocalizedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TitleDataLocalization::*)()>(&::GlobalNamespace::TitleDataLocalization::GetLocalizedText)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a63104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataLocalization*>(),
                        {"GetLocalizedText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataLocalization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataLocalization::*)()>(&::GlobalNamespace::TitleDataLocalization::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6a6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataLocalization*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_English()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___English;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_English() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___English;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_English(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___English = value;
}
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_French()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___French;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_French() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___French;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_French(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___French = value;
}
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_German()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___German;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_German() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___German;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_German(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___German = value;
}
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Spanish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spanish;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Spanish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spanish;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_Spanish(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Spanish = value;
}
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Italian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Italian;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Italian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Italian;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_Italian(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Italian = value;
}
constexpr ::StringW& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Japanese()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Japanese;
}
constexpr ::StringW const& GlobalNamespace::TitleDataLocalization::__cordl_internal_get_Japanese() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Japanese;
}
constexpr void GlobalNamespace::TitleDataLocalization::__cordl_internal_set_Japanese(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Japanese = value;
}
inline ::StringW GlobalNamespace::TitleDataLocalization::GetLocalizedText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataLocalization*>(),
                        {"GetLocalizedText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataLocalization::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataLocalization*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TitleDataLocalization* GlobalNamespace::TitleDataLocalization::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TitleDataLocalization*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TitleDataLocalization::TitleDataLocalization()   {
}
