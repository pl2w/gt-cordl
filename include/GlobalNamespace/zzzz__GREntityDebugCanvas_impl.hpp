#pragma once
// IWYU pragma private; include "GlobalNamespace/GREntityDebugCanvas.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREntityDebugCanvas_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5899fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::Start)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x589a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas.UpdateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::UpdateActive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x589a278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"UpdateActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589a344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas.UpdateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::UpdateText)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x589a348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"UpdateText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREntityDebugCanvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntityDebugCanvas::*)()>(&::GlobalNamespace::GREntityDebugCanvas::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x589a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::GREntityDebugCanvas::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_textPanelPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPanelPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_textPanelPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPanelPrefab;
}
constexpr void GlobalNamespace::GREntityDebugCanvas::__cordl_internal_set_textPanelPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textPanelPrefab = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_prefabAttachOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabAttachOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_prefabAttachOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabAttachOffset;
}
constexpr void GlobalNamespace::GREntityDebugCanvas::__cordl_internal_set_prefabAttachOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabAttachOffset = value;
}
constexpr float_t& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_fontSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontSize;
}
constexpr float_t const& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_fontSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontSize;
}
constexpr void GlobalNamespace::GREntityDebugCanvas::__cordl_internal_set_fontSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontSize = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GREntityDebugCanvas::__cordl_internal_get_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr void GlobalNamespace::GREntityDebugCanvas::__cordl_internal_set_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builder = value;
}
inline void GlobalNamespace::GREntityDebugCanvas::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREntityDebugCanvas::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREntityDebugCanvas::UpdateActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"UpdateActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREntityDebugCanvas::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREntityDebugCanvas::UpdateText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {"UpdateText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREntityDebugCanvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntityDebugCanvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREntityDebugCanvas* GlobalNamespace::GREntityDebugCanvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREntityDebugCanvas*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREntityDebugCanvas::GREntityDebugCanvas()   {
}
