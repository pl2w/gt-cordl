#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearchCategory.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchCategory_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchCategory.get_CategoryLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Search::ModioUISearchCategory::*)()>(&::Modio::Unity::UI::Search::ModioUISearchCategory::get_CategoryLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa2e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CategoryLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchCategory.get_CategoryLabelLocalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UI::Search::ModioUISearchCategory::*)()>(&::Modio::Unity::UI::Search::ModioUISearchCategory::get_CategoryLabelLocalized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa2e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CategoryLabelLocalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchCategory.get_Tabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>* (::Modio::Unity::UI::Search::ModioUISearchCategory::*)()>(&::Modio::Unity::UI::Search::ModioUISearchCategory::get_Tabs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa2e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_Tabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchCategory.get_CustomSearchBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> (::Modio::Unity::UI::Search::ModioUISearchCategory::*)()>(&::Modio::Unity::UI::Search::ModioUISearchCategory::get_CustomSearchBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa2e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CustomSearchBase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearchCategory::*)()>(&::Modio::Unity::UI::Search::ModioUISearchCategory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa2e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__categoryLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryLabel;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__categoryLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryLabel;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_set__categoryLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryLabel = value;
}
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__categoryLabelLocalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryLabelLocalized;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__categoryLabelLocalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryLabelLocalized;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_set__categoryLabelLocalized(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryLabelLocalized = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__tabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>* const& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__tabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabs;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_set__tabs(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabs = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__customSearchBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customSearchBase;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_get__customSearchBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customSearchBase;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchCategory::__cordl_internal_set__customSearchBase(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customSearchBase = value;
}
inline ::StringW Modio::Unity::UI::Search::ModioUISearchCategory::get_CategoryLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CategoryLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UI::Search::ModioUISearchCategory::get_CategoryLabelLocalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CategoryLabelLocalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>* Modio::Unity::UI::Search::ModioUISearchCategory::get_Tabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_Tabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*>(this, ___internal_method);
}
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> Modio::Unity::UI::Search::ModioUISearchCategory::get_CustomSearchBase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {"get_CustomSearchBase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearchCategory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchCategory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Search::ModioUISearchCategory* Modio::Unity::UI::Search::ModioUISearchCategory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Search::ModioUISearchCategory*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::ModioUISearchCategory::ModioUISearchCategory()   {
}
