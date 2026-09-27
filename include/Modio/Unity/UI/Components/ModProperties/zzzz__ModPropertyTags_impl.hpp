#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyTags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyTags_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyTags_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUITag_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyTags::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyTags::OnModUpdate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x9fc86c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyTags::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyTags::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fc8c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITag>& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tagTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagTemplate;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITag> const& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tagTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagTemplate;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_set__tagTemplate(::UnityW<::Modio::Unity::UI::Components::ModioUITag>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tagTemplate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__noTagsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noTagsActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__noTagsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noTagsActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_set__noTagsActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noTagsActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tagsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tagsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_set__tagsActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tagsActive = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>* const& Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_get__tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::__cordl_internal_set__tags(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tags = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyTags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags* Modio::Unity::UI::Components::ModProperties::ModPropertyTags::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyTags::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyTags::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags::ModPropertyTags()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c._OnModUpdate_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::*)(::Modio::Mods::ModTag*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::_OnModUpdate_b__4_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fc8cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(),
                        {"<OnModUpdate>b__4_0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::setStaticF___9(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*, "<>9", ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(std::forward<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(value));
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c* Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*, "<>9", ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>();
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::setStaticF___9__4_0(::System::Func_2<::Modio::Mods::ModTag*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::ModTag*,bool>*, "<>9__4_0", ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(std::forward<::System::Func_2<::Modio::Mods::ModTag*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Mods::ModTag*,bool>* Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::ModTag*,bool>*, "<>9__4_0", ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>();
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::_OnModUpdate_b__4_0(::Modio::Mods::ModTag*  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>(),
                        {"<OnModUpdate>b__4_0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c* Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c::ModPropertyTags___c()   {
}
