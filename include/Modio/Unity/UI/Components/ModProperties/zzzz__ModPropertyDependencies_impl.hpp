#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDependencies.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDependencies_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::OnModUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9fc60b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc61f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__disableIfNoDependencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoDependencies;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__disableIfNoDependencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableIfNoDependencies;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_set__disableIfNoDependencies(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableIfNoDependencies = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__dependenciesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependenciesCount;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__dependenciesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependenciesCount;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_set__dependenciesCount(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dependenciesCount = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__searchDependencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchDependencies;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> const& Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_get__searchDependencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchDependencies;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::__cordl_internal_set__searchDependencies(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchDependencies = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies* Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies::ModPropertyDependencies()   {
}
