#pragma once
// IWYU pragma private; include "GlobalNamespace/GridSpacingScaler.hpp"
#include "GlobalNamespace/zzzz__GridSpacingScaler_Axis_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GridSpacingScaler_def.hpp"
#include "GlobalNamespace/zzzz__GridSpacingScaler_Axis_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GridSpacingScaler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridSpacingScaler::*)()>(&::GlobalNamespace::GridSpacingScaler::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa42439c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridSpacingScaler.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridSpacingScaler::*)()>(&::GlobalNamespace::GridSpacingScaler::LateUpdate)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa424554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GridSpacingScaler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GridSpacingScaler::*)()>(&::GlobalNamespace::GridSpacingScaler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4247a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GridSpacingScaler_Axis& GlobalNamespace::GridSpacingScaler::__cordl_internal_get_scaleAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAxis;
}
constexpr ::GlobalNamespace::GridSpacingScaler_Axis const& GlobalNamespace::GridSpacingScaler::__cordl_internal_get_scaleAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAxis;
}
constexpr void GlobalNamespace::GridSpacingScaler::__cordl_internal_set_scaleAxis(::GlobalNamespace::GridSpacingScaler_Axis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleAxis = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GridSpacingScaler::__cordl_internal_get_minSpacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpacing;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GridSpacingScaler::__cordl_internal_get_minSpacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpacing;
}
constexpr void GlobalNamespace::GridSpacingScaler::__cordl_internal_set_minSpacing(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpacing = value;
}
constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup>& GlobalNamespace::GridSpacingScaler::__cordl_internal_get__gridLayoutGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridLayoutGroup;
}
constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup> const& GlobalNamespace::GridSpacingScaler::__cordl_internal_get__gridLayoutGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridLayoutGroup;
}
constexpr void GlobalNamespace::GridSpacingScaler::__cordl_internal_set__gridLayoutGroup(::UnityW<::UnityEngine::UI::GridLayoutGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gridLayoutGroup = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::GridSpacingScaler::__cordl_internal_get__rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::GridSpacingScaler::__cordl_internal_get__rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectTransform;
}
constexpr void GlobalNamespace::GridSpacingScaler::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rectTransform = value;
}
inline void GlobalNamespace::GridSpacingScaler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GridSpacingScaler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GridSpacingScaler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GridSpacingScaler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GridSpacingScaler* GlobalNamespace::GridSpacingScaler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GridSpacingScaler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GridSpacingScaler::GridSpacingScaler()   {
}
