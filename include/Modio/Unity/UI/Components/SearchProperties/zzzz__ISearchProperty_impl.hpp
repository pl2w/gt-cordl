#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/ISearchProperty.hpp"
#include "Modio/Unity/UI/Components/SearchProperties/zzzz__ISearchProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty.OnSearchUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::SearchProperties::ISearchProperty::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Components::SearchProperties::ISearchProperty::OnSearchUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::SearchProperties::ISearchProperty::OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
