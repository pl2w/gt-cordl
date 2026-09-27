#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaLevelScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaLevelScreen_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaLevelScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaLevelScreen::*)()>(&::GlobalNamespace::GorillaLevelScreen::Awake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5919b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaLevelScreen.UpdateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaLevelScreen::*)(::StringW, bool)>(&::GlobalNamespace::GorillaLevelScreen::UpdateText)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x590ecd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {"UpdateText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaLevelScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaLevelScreen::*)()>(&::GlobalNamespace::GorillaLevelScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5919bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_startingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingText;
}
constexpr ::StringW const& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_startingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingText;
}
constexpr void GlobalNamespace::GorillaLevelScreen::__cordl_internal_set_startingText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingText = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_goodMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_goodMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodMaterial;
}
constexpr void GlobalNamespace::GorillaLevelScreen::__cordl_internal_set_goodMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_badMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_badMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badMaterial;
}
constexpr void GlobalNamespace::GorillaLevelScreen::__cordl_internal_set_badMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badMaterial = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaLevelScreen::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::GorillaLevelScreen::__cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
inline void GlobalNamespace::GorillaLevelScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaLevelScreen::UpdateText(::StringW  newText, bool  setToGoodMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {"UpdateText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText, setToGoodMaterial);
}
inline void GlobalNamespace::GorillaLevelScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaLevelScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaLevelScreen* GlobalNamespace::GorillaLevelScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaLevelScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaLevelScreen::GorillaLevelScreen()   {
}
