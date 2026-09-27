#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITag.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITag_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITag.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITag::*)(::Modio::Mods::ModTag*)>(&::Modio::Unity::UI::Components::ModioUITag::Set)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9fbc108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITag.TagSelectedForSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITag::*)()>(&::Modio::Unity::UI::Components::ModioUITag::TagSelectedForSearch)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fbc1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(),
                        {"TagSelectedForSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUITag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUITag::*)()>(&::Modio::Unity::UI::Components::ModioUITag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbc21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUITag::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUITag::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Modio::Unity::UI::Components::ModioUITag::__cordl_internal_set__label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::Modio::Mods::ModTag*& Modio::Unity::UI::Components::ModioUITag::__cordl_internal_get__tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr ::Modio::Mods::ModTag* const& Modio::Unity::UI::Components::ModioUITag::__cordl_internal_get__tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr void Modio::Unity::UI::Components::ModioUITag::__cordl_internal_set__tag(::Modio::Mods::ModTag*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tag = value;
}
inline void Modio::Unity::UI::Components::ModioUITag::Set(::Modio::Mods::ModTag*  tag)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Modio::Unity::UI::Components::ModioUITag::TagSelectedForSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(),
                        {"TagSelectedForSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUITag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUITag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUITag* Modio::Unity::UI::Components::ModioUITag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUITag*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUITag::ModioUITag()   {
}
