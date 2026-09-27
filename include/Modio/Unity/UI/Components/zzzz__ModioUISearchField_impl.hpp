#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchField.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUISearchField_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fbbc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9fbbc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fbbd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField.OnAppliedSearchPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::OnAppliedSearchPreset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9fbbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnAppliedSearchPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField.FilterView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::FilterView)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fbbe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"FilterView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUISearchField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUISearchField::*)()>(&::Modio::Unity::UI::Components::ModioUISearchField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbbf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get_searchField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get_searchField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchField;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_set_searchField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchField = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get_lastSearchPhrase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSearchPhrase;
}
constexpr ::StringW const& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get_lastSearchPhrase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSearchPhrase;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_set_lastSearchPhrase(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSearchPhrase = value;
}
constexpr bool& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get__hasRunStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRunStart;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_get__hasRunStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRunStart;
}
constexpr void Modio::Unity::UI::Components::ModioUISearchField::__cordl_internal_set__hasRunStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRunStart = value;
}
inline void Modio::Unity::UI::Components::ModioUISearchField::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchField::OnAppliedSearchPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"OnAppliedSearchPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchField::FilterView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {"FilterView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUISearchField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUISearchField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUISearchField* Modio::Unity::UI::Components::ModioUISearchField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUISearchField*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUISearchField::ModioUISearchField()   {
}
