#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRecyclerScanner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRRecyclerScanner_def.hpp"
#include "GlobalNamespace/zzzz__GRRecycler_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRRecyclerScanner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecyclerScanner::*)()>(&::GlobalNamespace::GRRecyclerScanner::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58a8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecyclerScanner.ScanItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecyclerScanner::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRRecyclerScanner::ScanItem)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x58a7b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"ScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecyclerScanner.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecyclerScanner::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRRecyclerScanner::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58a8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecyclerScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecyclerScanner::*)()>(&::GlobalNamespace::GRRecyclerScanner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRRecycler>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recycler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycler;
}
constexpr ::UnityW<::GlobalNamespace::GRRecycler> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recycler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycler;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_recycler(::UnityW<::GlobalNamespace::GRRecycler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycler = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_titleText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_titleText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_titleText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_descriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_descriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptionText;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_descriptionText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descriptionText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_annotationText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotationText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_annotationText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___annotationText;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_annotationText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___annotationText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recycleValueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleValueText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recycleValueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycleValueText;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_recycleValueText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycleValueText = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recyclerBarcodeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerBarcodeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recyclerBarcodeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerBarcodeAudio;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_recyclerBarcodeAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerBarcodeAudio = value;
}
constexpr float_t& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recyclerBarcodeAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerBarcodeAudioVolume;
}
constexpr float_t const& GlobalNamespace::GRRecyclerScanner::__cordl_internal_get_recyclerBarcodeAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerBarcodeAudioVolume;
}
constexpr void GlobalNamespace::GRRecyclerScanner::__cordl_internal_set_recyclerBarcodeAudioVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerBarcodeAudioVolume = value;
}
inline void GlobalNamespace::GRRecyclerScanner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRecyclerScanner::ScanItem(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"ScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::GRRecyclerScanner::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GRRecyclerScanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecyclerScanner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRRecyclerScanner* GlobalNamespace::GRRecyclerScanner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRRecyclerScanner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRRecyclerScanner::GRRecyclerScanner()   {
}
