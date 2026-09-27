#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyTotalSize.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatBytes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__SearchPropertyTotalSize_def.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize.IsCustomFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::IsCustomFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::OnSearchUpdate)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9fc53c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::*)()>(&::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc57b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__totalFileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalFileSize;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__totalFileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalFileSize;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_set__totalFileSize(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalFileSize = value;
}
constexpr ::Modio::Unity::UI::StringFormatBytes& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__sizeFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeFormat;
}
constexpr ::Modio::Unity::UI::StringFormatBytes const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__sizeFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeFormat;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_set__sizeFormat(::Modio::Unity::UI::StringFormatBytes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sizeFormat = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__customSizeFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customSizeFormat;
}
constexpr ::StringW const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__customSizeFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customSizeFormat;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_set__customSizeFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customSizeFormat = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__alsoIncludeSizeOf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alsoIncludeSizeOf;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__alsoIncludeSizeOf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alsoIncludeSizeOf;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_set__alsoIncludeSizeOf(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alsoIncludeSizeOf = value;
}
constexpr bool& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__ignoreInstalledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreInstalledMods;
}
constexpr bool const& Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_get__ignoreInstalledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreInstalledMods;
}
constexpr void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::__cordl_internal_set__ignoreInstalledMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreInstalledMods = value;
}
inline bool Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::IsCustomFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {"IsCustomFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {"OnSearchUpdate", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize* Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr  Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::operator ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyTotalSize::SearchPropertyTotalSize()   {
}
