#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIGroup.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIGroup_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIGroup::*)()>(&::Modio::Unity::UI::Components::ModioUIGroup::Awake)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9fb8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIGroup::*)()>(&::Modio::Unity::UI::Components::ModioUIGroup::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fb90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIGroup.SetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIGroup::*)(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*, int32_t)>(&::Modio::Unity::UI::Components::ModioUIGroup::SetMods)> {
  constexpr static std::size_t size = 0xae4;
  constexpr static std::size_t addrs = 0x9fb90c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"SetMods", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIGroup::*)()>(&::Modio::Unity::UI::Components::ModioUIGroup::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fb9cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____template;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____template;
}
constexpr void Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_set__template(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____template = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_set__active(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__inactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactive;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__inactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactive;
}
constexpr void Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_set__inactive(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inactive = value;
}
constexpr ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__displayOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayOnEnable;
}
constexpr ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t> const& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__displayOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayOnEnable;
}
constexpr void Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_set__displayOnEnable(::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayOnEnable = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__layoutRebuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutRebuilder;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_get__layoutRebuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutRebuilder;
}
constexpr void Modio::Unity::UI::Components::ModioUIGroup::__cordl_internal_set__layoutRebuilder(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutRebuilder = value;
}
inline void Modio::Unity::UI::Components::ModioUIGroup::setStaticF_TempActive(::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*, "TempActive", ::Modio::Unity::UI::Components::ModioUIGroup*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* Modio::Unity::UI::Components::ModioUIGroup::getStaticF_TempActive()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*, "TempActive", ::Modio::Unity::UI::Components::ModioUIGroup*>();
}
inline void Modio::Unity::UI::Components::ModioUIGroup::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIGroup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIGroup::SetMods(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  mods, int32_t  selectionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {"SetMods", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mods, selectionIndex);
}
inline void Modio::Unity::UI::Components::ModioUIGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIGroup* Modio::Unity::UI::Components::ModioUIGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIGroup*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIGroup::ModioUIGroup()   {
}
