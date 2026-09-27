#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectToggle.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectToggle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectToggle.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectToggle::*)(bool)>(&::GlobalNamespace::ObjectToggle::Toggle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a1ef3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectToggle.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectToggle::*)()>(&::GlobalNamespace::ObjectToggle::Enable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a1efbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectToggle.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectToggle::*)()>(&::GlobalNamespace::ObjectToggle::Disable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a1f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectToggle::*)()>(&::GlobalNamespace::ObjectToggle::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a1f224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::ObjectToggle::__cordl_internal_get_objectsToToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToToggle;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::ObjectToggle::__cordl_internal_get_objectsToToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToToggle;
}
constexpr void GlobalNamespace::ObjectToggle::__cordl_internal_set_objectsToToggle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToToggle = value;
}
constexpr bool& GlobalNamespace::ObjectToggle::__cordl_internal_get__ignoreHierarchyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreHierarchyState;
}
constexpr bool const& GlobalNamespace::ObjectToggle::__cordl_internal_get__ignoreHierarchyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreHierarchyState;
}
constexpr void GlobalNamespace::ObjectToggle::__cordl_internal_set__ignoreHierarchyState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreHierarchyState = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::ObjectToggle::__cordl_internal_get__toggled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggled;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::ObjectToggle::__cordl_internal_get__toggled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggled;
}
constexpr void GlobalNamespace::ObjectToggle::__cordl_internal_set__toggled(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggled = value;
}
inline void GlobalNamespace::ObjectToggle::Toggle(bool  initialState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Toggle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState);
}
inline void GlobalNamespace::ObjectToggle::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectToggle::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectToggle* GlobalNamespace::ObjectToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectToggle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectToggle::ObjectToggle()   {
}
