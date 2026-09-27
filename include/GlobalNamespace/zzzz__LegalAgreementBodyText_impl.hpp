#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementBodyText.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementBodyText_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementBodyText_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementBodyText_State_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)()>(&::GlobalNamespace::LegalAgreementBodyText::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a5ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)(::StringW)>(&::GlobalNamespace::LegalAgreementBodyText::SetText)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5a5eee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.ClearText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)()>(&::GlobalNamespace::LegalAgreementBodyText::ClearText)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a5f1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"ClearText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.UpdateTextFromPlayFabTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::LegalAgreementBodyText::*)(::StringW, ::StringW)>(&::GlobalNamespace::LegalAgreementBodyText::UpdateTextFromPlayFabTitleData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a5f30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"UpdateTextFromPlayFabTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LegalAgreementBodyText::OnPlayFabError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a5f444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.OnTitleDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)(::StringW)>(&::GlobalNamespace::LegalAgreementBodyText::OnTitleDataReceived)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a5f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"OnTitleDataReceived", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LegalAgreementBodyText::*)()>(&::GlobalNamespace::LegalAgreementBodyText::get_Height)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a5f500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreementBodyText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreementBodyText::*)()>(&::GlobalNamespace::LegalAgreementBodyText::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a5f524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textBox;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textBox;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_textBox(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textBox = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textAsset;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textAsset = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCollection;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>* const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_textCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCollection;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_textCollection(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textCollection = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_cachedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_cachedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_cachedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedText = value;
}
constexpr ::GlobalNamespace::LegalAgreementBodyText_State& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::LegalAgreementBodyText_State const& GlobalNamespace::LegalAgreementBodyText::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::LegalAgreementBodyText::__cordl_internal_set_state(::GlobalNamespace::LegalAgreementBodyText_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::LegalAgreementBodyText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreementBodyText::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::LegalAgreementBodyText::ClearText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"ClearText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::LegalAgreementBodyText::UpdateTextFromPlayFabTitleData(::StringW  key, ::StringW  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"UpdateTextFromPlayFabTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, key, version);
}
inline void GlobalNamespace::LegalAgreementBodyText::OnPlayFabError(::PlayFab::PlayFabError*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LegalAgreementBodyText::OnTitleDataReceived(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"OnTitleDataReceived", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline float_t GlobalNamespace::LegalAgreementBodyText::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreementBodyText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreementBodyText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegalAgreementBodyText* GlobalNamespace::LegalAgreementBodyText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreementBodyText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreementBodyText::LegalAgreementBodyText()   {
}
