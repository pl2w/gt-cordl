#pragma once
// IWYU pragma private; include "GlobalNamespace/TestManipulatableSpinnerIcons.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestManipulatableSpinnerIcons_def.hpp"
#include "GlobalNamespace/zzzz__ManipulatableSpinner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::LateUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x575d784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons.GenerateRollers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::GenerateRollers)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x575d538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"GenerateRollers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons.UpdateSelectedIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::UpdateSelectedIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x575d7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"UpdateSelectedIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons.UpdateRollers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::UpdateRollers)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x575d868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"UpdateRollers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinnerIcons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinnerIcons::*)()>(&::GlobalNamespace::TestManipulatableSpinnerIcons::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x575da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner>& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_spinner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner> const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_spinner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_spinner(::UnityW<::GlobalNamespace::ManipulatableSpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinner = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rotationScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr float_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rotationScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_rotationScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationScale = value;
}
constexpr int32_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementCount;
}
constexpr int32_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementCount;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_rollerElementCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollerElementCount = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementTemplate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementTemplate;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_rollerElementTemplate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollerElementTemplate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconCanvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconCanvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconCanvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconCanvas;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_iconCanvas(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iconCanvas = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconElementTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconElementTemplate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconElementTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconElementTemplate;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_iconElementTemplate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iconElementTemplate = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconOffset;
}
constexpr float_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_iconOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconOffset;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_iconOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iconOffset = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementAngle;
}
constexpr float_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_rollerElementAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollerElementAngle;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_rollerElementAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollerElementAngle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_visibleIcons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleIcons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>* const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_visibleIcons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleIcons;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_visibleIcons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Text>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleIcons = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_currentRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotation;
}
constexpr float_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_currentRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotation;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_currentRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRotation = value;
}
constexpr int32_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_scrollableCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollableCount;
}
constexpr int32_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_scrollableCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollableCount;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_scrollableCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollableCount = value;
}
constexpr int32_t& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_selectedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedIndex;
}
constexpr int32_t const& GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_get_selectedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedIndex;
}
constexpr void GlobalNamespace::TestManipulatableSpinnerIcons::__cordl_internal_set_selectedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedIndex = value;
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::GenerateRollers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"GenerateRollers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::UpdateSelectedIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"UpdateSelectedIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::UpdateRollers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {"UpdateRollers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinnerIcons::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinnerIcons*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestManipulatableSpinnerIcons* GlobalNamespace::TestManipulatableSpinnerIcons::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestManipulatableSpinnerIcons*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestManipulatableSpinnerIcons::TestManipulatableSpinnerIcons()   {
}
