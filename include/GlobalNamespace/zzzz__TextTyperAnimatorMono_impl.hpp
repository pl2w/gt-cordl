#pragma once
// IWYU pragma private; include "GlobalNamespace/TextTyperAnimatorMono.hpp"
#include "Unity/Mathematics/zzzz__Random_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__TextTyperAnimatorMono_def.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.EdRestartAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::EdRestartAnimation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f00d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"EdRestartAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57f00f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f01b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f01c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::SliceUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57f01cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::StringW, ::System::Collections::Generic::IList_1<int32_t>*, int32_t)>(&::GlobalNamespace::TextTyperAnimatorMono::SetText)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57f02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::StringW, ::System::Collections::Generic::IList_1<int32_t>*)>(&::GlobalNamespace::TextTyperAnimatorMono::SetText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57f0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::StringW)>(&::GlobalNamespace::TextTyperAnimatorMono::SetText)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57ee9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::Cysharp::Text::Utf16ValueStringBuilder, ::System::Collections::Generic::IList_1<int32_t>*, int32_t)>(&::GlobalNamespace::TextTyperAnimatorMono::SetText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57efe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::Cysharp::Text::Utf16ValueStringBuilder)>(&::GlobalNamespace::TextTyperAnimatorMono::SetText)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57efd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono._SetEntryIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::System::Collections::Generic::IList_1<int32_t>*)>(&::GlobalNamespace::TextTyperAnimatorMono::_SetEntryIndexes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57f02f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"_SetEntryIndexes", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono.UpdateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)(::Cysharp::Text::Utf16ValueStringBuilder, int32_t)>(&::GlobalNamespace::TextTyperAnimatorMono::UpdateText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57efe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"UpdateText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextTyperAnimatorMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextTyperAnimatorMono::*)()>(&::GlobalNamespace::TextTyperAnimatorMono::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57f03c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textMesh;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_textMesh;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set_m_textMesh(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_textMesh = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_typingSpeedMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_typingSpeedMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_typingSpeedMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_typingSpeedMinMax;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set_m_typingSpeedMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_typingSpeedMinMax = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_typingSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_typingSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_typingSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_typingSoundBank;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set_m_typingSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_typingSoundBank = value;
}
constexpr bool& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__has_typingSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_typingSoundBank;
}
constexpr bool const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__has_typingSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_typingSoundBank;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__has_typingSoundBank(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____has_typingSoundBank = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_beginEntrySoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_beginEntrySoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get_m_beginEntrySoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_beginEntrySoundBank;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set_m_beginEntrySoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_beginEntrySoundBank = value;
}
constexpr bool& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__has_beginEntrySoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_beginEntrySoundBank;
}
constexpr bool const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__has_beginEntrySoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____has_beginEntrySoundBank;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__has_beginEntrySoundBank(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____has_beginEntrySoundBank = value;
}
constexpr int32_t& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__charCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charCount;
}
constexpr int32_t const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__charCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charCount;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__charCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charCount = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__entryIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryIndexes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__entryIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryIndexes;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__entryIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryIndexes = value;
}
constexpr float_t& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitTime;
}
constexpr float_t const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitTime;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitTime = value;
}
constexpr float_t& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__timeOfLastTypedChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOfLastTypedChar;
}
constexpr float_t const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__timeOfLastTypedChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOfLastTypedChar;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__timeOfLastTypedChar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOfLastTypedChar = value;
}
constexpr ::Unity::Mathematics::Random& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr ::Unity::Mathematics::Random const& GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_get__random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr void GlobalNamespace::TextTyperAnimatorMono::__cordl_internal_set__random(::Unity::Mathematics::Random  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____random = value;
}
inline void GlobalNamespace::TextTyperAnimatorMono::EdRestartAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"EdRestartAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextTyperAnimatorMono::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextTyperAnimatorMono::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextTyperAnimatorMono::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SetText(::StringW  text, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes, int32_t  nonRichTextTagsCharCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, entryIndexes, nonRichTextTagsCharCount);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SetText(::StringW  text, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, entryIndexes);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SetText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes, int32_t  nonRichTextTagsCharCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zStringBuilder, entryIndexes, nonRichTextTagsCharCount);
}
inline void GlobalNamespace::TextTyperAnimatorMono::SetText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"SetText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zStringBuilder);
}
inline void GlobalNamespace::TextTyperAnimatorMono::_SetEntryIndexes(::System::Collections::Generic::IList_1<int32_t>*  entryIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"_SetEntryIndexes", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryIndexes);
}
inline void GlobalNamespace::TextTyperAnimatorMono::UpdateText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder, int32_t  nonRichTextTagsCharCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {"UpdateText", {}, {::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zStringBuilder, nonRichTextTagsCharCount);
}
inline void GlobalNamespace::TextTyperAnimatorMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextTyperAnimatorMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextTyperAnimatorMono* GlobalNamespace::TextTyperAnimatorMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextTyperAnimatorMono*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::TextTyperAnimatorMono::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::TextTyperAnimatorMono::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextTyperAnimatorMono::TextTyperAnimatorMono()   {
}
