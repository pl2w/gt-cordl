#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5628884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(bool)>(&::GlobalNamespace::ProgressDisplay::SetVisible)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56288a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.SetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(int32_t, int32_t)>(&::GlobalNamespace::ProgressDisplay::SetProgress)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5624fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetProgress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.SetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(float_t)>(&::GlobalNamespace::ProgressDisplay::SetProgress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5628938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.SetTextVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(bool)>(&::GlobalNamespace::ProgressDisplay::SetTextVisible)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56288c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetTextVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5628950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_root(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_progressImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_progressImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressImage;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_progressImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressImage = value;
}
constexpr int32_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_largestNumberToShow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largestNumberToShow;
}
constexpr int32_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_largestNumberToShow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largestNumberToShow;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_largestNumberToShow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___largestNumberToShow = value;
}
inline void GlobalNamespace::ProgressDisplay::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressDisplay::SetVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::ProgressDisplay::SetProgress(int32_t  progress, int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetProgress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress, total);
}
inline void GlobalNamespace::ProgressDisplay::SetProgress(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void GlobalNamespace::ProgressDisplay::SetTextVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetTextVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::ProgressDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressDisplay* GlobalNamespace::ProgressDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressDisplay::ProgressDisplay()   {
}
