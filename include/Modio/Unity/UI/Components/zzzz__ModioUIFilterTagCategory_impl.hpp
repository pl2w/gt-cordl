#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIFilterTagCategory.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIFilterTagCategory_def.hpp"
#include "Modio/Mods/zzzz__GameTagCategory_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory.get_CurrentFilterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)()>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::get_CurrentFilterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"get_CurrentFilterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory.set_CurrentFilterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)(int32_t)>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::set_CurrentFilterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb8e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"set_CurrentFilterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)()>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fb8e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)(::Modio::Mods::GameTagCategory*)>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::Setup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fb8df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"Setup", {}, {::i2c::type_of<::Modio::Mods::GameTagCategory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory.SetFilterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)(int32_t)>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::SetFilterCount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9fb825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"SetFilterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIFilterTagCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIFilterTagCategory::*)()>(&::Modio::Unity::UI::Components::ModioUIFilterTagCategory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb8ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__categoryTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__categoryTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryTitle;
}
constexpr void Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_set__categoryTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryTitle = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__filterCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterCount;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__filterCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterCount;
}
constexpr void Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_set__filterCount(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterCount = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__filterCountBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterCountBackground;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__filterCountBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterCountBackground;
}
constexpr void Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_set__filterCountBackground(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterCountBackground = value;
}
constexpr int32_t& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__CurrentFilterCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFilterCount_k__BackingField;
}
constexpr int32_t const& Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_get__CurrentFilterCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFilterCount_k__BackingField;
}
constexpr void Modio::Unity::UI::Components::ModioUIFilterTagCategory::__cordl_internal_set__CurrentFilterCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentFilterCount_k__BackingField = value;
}
inline int32_t Modio::Unity::UI::Components::ModioUIFilterTagCategory::get_CurrentFilterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"get_CurrentFilterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIFilterTagCategory::set_CurrentFilterCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"set_CurrentFilterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::ModioUIFilterTagCategory::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIFilterTagCategory::Setup(::Modio::Mods::GameTagCategory*  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"Setup", {}, {::i2c::type_of<::Modio::Mods::GameTagCategory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline void Modio::Unity::UI::Components::ModioUIFilterTagCategory::SetFilterCount(int32_t  filterCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {"SetFilterCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterCount);
}
inline void Modio::Unity::UI::Components::ModioUIFilterTagCategory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIFilterTagCategory* Modio::Unity::UI::Components::ModioUIFilterTagCategory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIFilterTagCategory*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIFilterTagCategory::ModioUIFilterTagCategory()   {
}
