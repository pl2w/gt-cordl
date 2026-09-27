#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspector.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspector_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspector.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspector::*)()>(&::GlobalNamespace::DevInspector::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x566f8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspector*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevInspector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspector::*)()>(&::GlobalNamespace::DevInspector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x566f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevInspector::__cordl_internal_get_pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevInspector::__cordl_internal_get_pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_pivot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivot = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::DevInspector::__cordl_internal_get_outputInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputInfo;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::DevInspector::__cordl_internal_get_outputInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputInfo;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_outputInfo(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputInfo = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& GlobalNamespace::DevInspector::__cordl_internal_get_componentToInspect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentToInspect;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& GlobalNamespace::DevInspector::__cordl_internal_get_componentToInspect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentToInspect;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_componentToInspect(::ArrayW<::UnityW<::UnityEngine::Component>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentToInspect = value;
}
constexpr bool& GlobalNamespace::DevInspector::__cordl_internal_get_isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr bool const& GlobalNamespace::DevInspector::__cordl_internal_get_isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnabled;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnabled = value;
}
constexpr bool& GlobalNamespace::DevInspector::__cordl_internal_get_autoFind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoFind;
}
constexpr bool const& GlobalNamespace::DevInspector::__cordl_internal_get_autoFind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoFind;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_autoFind(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoFind = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevInspector::__cordl_internal_get_canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvas;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevInspector::__cordl_internal_get_canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvas;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canvas = value;
}
constexpr int32_t& GlobalNamespace::DevInspector::__cordl_internal_get_sidewaysOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sidewaysOffset;
}
constexpr int32_t const& GlobalNamespace::DevInspector::__cordl_internal_get_sidewaysOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sidewaysOffset;
}
constexpr void GlobalNamespace::DevInspector::__cordl_internal_set_sidewaysOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sidewaysOffset = value;
}
inline void GlobalNamespace::DevInspector::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspector*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevInspector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevInspector* GlobalNamespace::DevInspector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspector::DevInspector()   {
}
