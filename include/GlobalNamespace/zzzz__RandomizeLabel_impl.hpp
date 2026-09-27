#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeLabel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomizeLabel_def.hpp"
#include "GlobalNamespace/zzzz__RandomStrings_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomizeLabel.Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeLabel::*)()>(&::GlobalNamespace::RandomizeLabel::Randomize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x578f724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeLabel*>(),
                        {"Randomize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomizeLabel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeLabel::*)()>(&::GlobalNamespace::RandomizeLabel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578f770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeLabel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::RandomizeLabel::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::RandomizeLabel::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void GlobalNamespace::RandomizeLabel::__cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr ::UnityW<::GlobalNamespace::RandomStrings>& GlobalNamespace::RandomizeLabel::__cordl_internal_get_strings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strings;
}
constexpr ::UnityW<::GlobalNamespace::RandomStrings> const& GlobalNamespace::RandomizeLabel::__cordl_internal_get_strings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strings;
}
constexpr void GlobalNamespace::RandomizeLabel::__cordl_internal_set_strings(::UnityW<::GlobalNamespace::RandomStrings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strings = value;
}
constexpr bool& GlobalNamespace::RandomizeLabel::__cordl_internal_get_distinct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr bool const& GlobalNamespace::RandomizeLabel::__cordl_internal_get_distinct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr void GlobalNamespace::RandomizeLabel::__cordl_internal_set_distinct(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distinct = value;
}
inline void GlobalNamespace::RandomizeLabel::Randomize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeLabel*>(),
                        {"Randomize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomizeLabel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeLabel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomizeLabel* GlobalNamespace::RandomizeLabel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomizeLabel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomizeLabel::RandomizeLabel()   {
}
